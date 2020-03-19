/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: excalibur <excalibur@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 12:01:11 by excalibur         #+#    #+#             */
/*   Updated: 2020/03/14 16:48:53 by excalibur        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

int main()
{
    //  Stack
    std::cout << "### On Stack : ###" << std::endl;
    poneyOnTheStack();
    std::cout << std::endl;
    
    //  Heap
    std::cout << "### On Heap : ###" << std::endl;
    poneyOnTheHeap();
    std::cout << std::endl;
}