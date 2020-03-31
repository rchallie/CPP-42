/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: excalibur <excalibur@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/30 14:35:01 by excalibur         #+#    #+#             */
/*   Updated: 2020/03/30 15:35:37 by excalibur        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Array.hpp"
# include <iostream>

int main()
{
    Array<int> j(5);
    Array<std::string> list(2);

    list[0] = "test";
    list[1] = "plop";

    std::cout << "String array content : " << std::endl;
    for (int i = 0; i < list.size(); i++)
        std::cout << "list[" << i << "] = " << list[i] << std::endl;

    std::cout << std::endl;
    std::cout << "Copy list :" << std::endl;
    Array<std::string> listcopy(list);
    std::cout << "Change list[0] to \"murp\"" << std::endl;
    list[0] = "murp";
    std::cout << "Listcopy[0] = " << listcopy[0] << std::endl;
    std::cout << "List[0] = " << list[0] << std::endl;

    std::cout << std::endl;
    std::cout << "Int array content : " << std::endl;
    for (int i = 0; i < j.size(); i++)
        std::cout << "j" << i << " = " << j[i] << std::endl;

    std::cout << std::endl;
    Array<int> intassign = j;
    std::cout << "Int array content : " << std::endl;
    for (int i = 0; i < j.size(); i++)
        std::cout << "intassign[" << i << "] = " << intassign[i] << std::endl;

    std::cout << std::endl;
    std::cout << "See out of the bound : " << std::endl;
    std::cout << "jx = " << j[j.size() + 1] << std::endl;
}