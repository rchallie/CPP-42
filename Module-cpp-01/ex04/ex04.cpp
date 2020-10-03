/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 19:50:37 by rchallie          #+#    #+#             */
/*   Updated: 2020/10/03 10:41:27 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    
    std::string *p_str = &str;
    std::string &ref_str = str;

    std::cout << "Using pointer : " << *p_str << std::endl;
    std::cout << "Using reference : " << ref_str << std::endl;
}