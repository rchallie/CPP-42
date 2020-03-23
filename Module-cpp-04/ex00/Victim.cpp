/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: excalibur <excalibur@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:31:43 by excalibur         #+#    #+#             */
/*   Updated: 2020/03/21 11:30:23 by excalibur        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(const std::string & name)
:
    _name(name)
{
    std::cout << "A random victim called " << name << " just appeared; " << std::endl;
}

Victim::Victim(const Victim&) {}

Victim::~Victim()
{
    std::cout << "The victim " << this->_name << " died for no apparent reasons!" << std::endl;
}

Victim & Victim::operator=(Victim& op)
{
    if (this == &op)
        return (*this);
    this->_name = op.getName();
    return (*this);
}

// GETTER / SETTER
std::string     Victim::getName(void) const { return (this->_name); }

//ADDITIONNAL
void            Victim::getPolymorphed(void) const
{
    std::cout << this->_name << " was just polymorphed in a cute little sheep!" << std::endl;
}

std::ostream    &operator<<(std::ostream & out, Victim & victim)
{
    std::cout << "I'm " << victim.getName() << " and I like otters!" << std::endl;
    return (out);
}