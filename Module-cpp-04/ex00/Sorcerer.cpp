/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: excalibur <excalibur@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:31:43 by excalibur         #+#    #+#             */
/*   Updated: 2020/03/21 12:17:43 by excalibur        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(const std::string & name, const std::string & title)
:
    _name(name),
    _title(title)
{
    std::cout << name << ", " << title << " is born !" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer&) {}

Sorcerer::~Sorcerer()
{
    std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer & Sorcerer::operator=(Sorcerer& op)
{
    if (this == &op)
        return (*this);
    this->_name = op.getName();
    this->_title = op.getTitle();
    return (*this);
}

// GETTER / SETTER
std::string     Sorcerer::getName(void) const { return (this->_name); }
std::string     Sorcerer::getTitle(void) const { return (this->_title); }

// ADDITIONNAL
void            Sorcerer::polymorph(Victim const & victim)
{
    victim.getPolymorphed();
}


std::ostream    &operator<<(std::ostream & out, const Sorcerer & sorcerer)
{
    out << "I am " << sorcerer.getName() << ", " << sorcerer.getTitle();
    out << ", and i like ponies" << std::endl;
    return (out);
}