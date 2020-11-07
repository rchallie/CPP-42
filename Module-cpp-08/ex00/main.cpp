/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/31 11:29:31 by excalibur         #+#    #+#             */
/*   Updated: 2020/11/07 23:48:48 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "easyfind.hpp"
# include <vector>
# include <list>


int main()
{
    std::vector<int>v;
    std::list<int>p;

    v.push_back(2);
    v.push_back(-5);
    v.push_back(99);
    v.push_back(0);

    p.push_back(8);
    p.push_back(-895);
    p.push_back(785);
    p.push_back(156);

    std::cout << "Search 0 : " << easyfind(v, 0) << std::endl;

    try
    {
        std::cout << "Search 10000 : ";
        easyfind(v, 10000);
    }
    catch (std::exception & e)
    {
        std::cout << "Error : " << e.what() << std::endl;
    }

    std::cout << "Search -895 : " << easyfind(p, -895) << std::endl;
}