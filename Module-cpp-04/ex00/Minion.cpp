/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Minion.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: excalibur <excalibur@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:31:43 by excalibur         #+#    #+#             */
/*   Updated: 2020/03/19 19:22:00 by excalibur        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Minion.hpp"

Minion::Minion(const std::string & name)
:
    Victim(
        name
    )
{
    std::cout << "Prêt à servir de souffre douleur." << std::endl;
}

Minion::Minion(const Minion & copy)
:
    Victim (
        copy.getName()
    )
{}

Minion::~Minion()
{
    std::cout << "Je délivre quelques PO..." << std::endl;
}

Minion & Minion::operator=(Minion& op)
{
    if (this == &op)
        return (*this); 
    return (*this);
}

// Additionnal
void    Minion::getPolymorphed(void) const
{
    std::cout << getName() << " was just polymorphed into a big TANK!" << std::endl;
}