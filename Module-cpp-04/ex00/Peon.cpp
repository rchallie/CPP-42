/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: excalibur <excalibur@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:31:43 by excalibur         #+#    #+#             */
/*   Updated: 2020/03/19 19:22:00 by excalibur        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(const std::string & name)
:
    Victim(
        name
    )
{
    std::cout << "Zog Zog." << std::endl;
}

Peon::Peon(const Peon & copy)
:
    Victim (
        copy.getName()
    )
{}

Peon::~Peon()
{
    std::cout << "Bleuark..." << std::endl;
}

Peon & Peon::operator=(Peon& op)
{
    if (this == &op)
        return (*this); 
    return (*this);
}

// Additionnal
void    Peon::getPolymorphed(void) const
{
    std::cout << getName() << " was just polymorphed into a pink pony!" << std::endl;
}