/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: excalibur <excalibur@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 16:51:34 by excalibur         #+#    #+#             */
/*   Updated: 2020/03/14 16:58:24 by excalibur        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void    memoryLeak()
{
    std::string*        panthere = new std::string("String panthere");
    
    std::cout << *panthere << std::endl;
    delete panthere;
}