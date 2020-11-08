/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/31 11:29:31 by excalibur         #+#    #+#             */
/*   Updated: 2020/11/08 16:04:38 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "easyfind.hpp"
# include <vector>
# include <list>


int main()
{
    std::vector<int> vec;
    std::list<int> list;

    vec.push_back(2);
    vec.push_back(-5);
    vec.push_back(99);
    vec.push_back(0);

    list.push_back(8);
    list.push_back(-895);
    list.push_back(785);
    list.push_back(156);

    std::vector<int>::iterator it_find_vec = easyfind(vec, 0);
    std::cout << "Search 0 : " << *it_find_vec << std::endl;
    std::cout << "Previous of 0 in array is : " << *(it_find_vec - 1) << std::endl;

    try
    {
        std::cout << "Search 10000 : ";
        it_find_vec = easyfind(vec, 10000);
        std::cout << *it_find_vec << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << "Error : " << e.what() << std::endl;
    }

    std::list<int>::iterator it_find_list = easyfind(list, -895);
    std::cout << "Search -895 : " << *it_find_list << std::endl; 
    std::cout << "Previous of -895 in array is : " << *(--it_find_list) << std::endl;
}