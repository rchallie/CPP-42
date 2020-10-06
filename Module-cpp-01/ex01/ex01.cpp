/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 16:51:34 by rchallie          #+#    #+#             */
/*   Updated: 2020/10/05 20:40:34 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void    memoryLeak()
{
    std::string*        panthere = new std::string("String panthere");
    
    std::cout << *panthere << std::endl;
    delete panthere;
}

/*
** To check if no leaks use:
** Remove comments of main
** valgrind --leak-check=full ./a.out
*/

// int main()
// {
//     memoryLeak();
// }