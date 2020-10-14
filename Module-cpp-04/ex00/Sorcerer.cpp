/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:31:43 by rchallie          #+#    #+#             */
/*   Updated: 2020/10/13 21:41:17 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

/*
** @brief Default contructor:
** The "Sorcerer".
*/
Sorcerer::Sorcerer()
:
    _name(),
    _title()
{
    std::cout << this->_name << ", " << this->_title << " is born !" << std::endl;
}

/*
** @brief Init contrcutor:
** The "Sorcerer".
*/
Sorcerer::Sorcerer(const std::string & name, const std::string & title)
:
    _name(name),
    _title(title)
{
    std::cout << this->_name << ", " << this->_title << " is born !" << std::endl;
}

/*
** @brief Copy:
** Copy the "Sorcerer".
** 
** @param copy the "Sorcerer" to copy.
*/
Sorcerer::Sorcerer(const Sorcerer& copy)
:
    _name(copy._name),
    _title(copy._name)
{}

/*
** @brief Destructor:
** Called when the object "Sorcerer" is delete
*/
Sorcerer::~Sorcerer()
{
    std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer & Sorcerer::operator=(const Sorcerer& op)
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

/*
** @brief Polymorph the victim.
*/
void            Sorcerer::polymorph(Victim const & victim)
{
    victim.getPolymorphed();
}

/*
** @brief Overload for output.
*/
std::ostream    &operator<<(std::ostream & out, const Sorcerer & sorcerer)
{
    out << "I am " << sorcerer.getName() << ", " << sorcerer.getTitle();
    out << ", and i like ponies" << std::endl;
    return (out);
}