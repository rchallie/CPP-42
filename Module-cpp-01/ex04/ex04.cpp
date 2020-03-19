/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: excalibur <excalibur@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 19:50:37 by excalibur         #+#    #+#             */
/*   Updated: 2020/03/15 19:54:42 by excalibur        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    
    std::string *p_str = &str;              //Pointeur
    std::string &ref_str = str;             //Autre nom pour une meme variable (Alias)
    
    std::cout << *p_str << std::endl;
    std::cout << ref_str << std::endl;

}