/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:31:43 by rchallie          #+#    #+#             */
/*   Updated: 2020/10/13 21:44:10 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

/*
** @brief Default contructor:
** The "Victim".
*/
Victim::Victim()
:
    _name()
{
    std::cout << "A random victim called " << this->_name << " just appeared; " << std::endl;
}

/*
** @brief Init contrcutor:
** The "Victim".
*/
Victim::Victim(const std::string & name)
:
    _name(name)
{
    std::cout << "A random victim called " << name << " just appeared; " << std::endl;
}

/*
** @brief Copy:
** Copy the "Victim".
** 
** @param copy the "Victim" to copy.
*/
Victim::Victim(const Victim& copy)
:
    _name(copy._name)
{}

/*
** @brief Destructor:
** Called when the object "Victim" is delete
*/
Victim::~Victim()
{
    std::cout << "The victim " << this->_name << " died for no apparent reasons!" << std::endl;
}

Victim & Victim::operator=(const Victim& op)
{
    if (this == &op)
        return (*this);
    this->_name = op.getName();
    return (*this);
}

// GETTER / SETTER
std::string     Victim::getName(void) const { return (this->_name); }

//ADDITIONNAL

/*
** @brief Poyphmorphed the Victim into ... sheep.
*/
void            Victim::getPolymorphed(void) const
{
    std::cout << this->_name << " was just polymorphed in a cute little sheep!" << std::endl;
}

/*
** @brief Overload for output.
*/
std::ostream    &operator<<(std::ostream & out, Victim & victim)
{
    std::cout << "I'm " << victim.getName() << " and I like otters!" << std::endl;
    return (out);
}