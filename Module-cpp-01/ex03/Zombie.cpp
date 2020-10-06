/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 17:06:13 by rchallie          #+#    #+#             */
/*   Updated: 2020/10/05 20:44:59 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*
** @brief Default contructor:
** The "Zombie".
*/
Zombie::Zombie()
:
    _name(),
    _type()
{}

/*
** @brief Init contrcutor:
** The "Zombie".
*/
Zombie::Zombie(std::string type, std::string name)
:
    _name(name),
    _type(type)
{}

/*
** @brief Copy:
** Copy the "Zombie".
** 
** @param copy the "Zombie" to copy.
*/
Zombie::Zombie(const Zombie& copy)
:
    _name(copy._name),
    _type(copy._type)
{}

/*
** @brief Destructor:
** Called when the object "Zombie" is delete
*/
Zombie::~Zombie() {}

Zombie & Zombie::operator=(const Zombie & op)
{
    if (this == &op)
        return (*this);
    this->_name = op._name;
    this->_type = op._type;
    return (*this);
}

// GETTER - SETTER =============================================================

/*
** @brief Getters of each attributes of "Zombie".
*/
std::string Zombie::getName() {return (this->_name); }
std::string Zombie::getType() {return (this->_type); }

/*
** @brief Setters of each attributes of "Zombie".
*/
void Zombie::setName(std::string name) { this->_name = name; }
void Zombie::setType(std::string type) { this->_type = type; }
// =============================================================================

// ADDITIONNAL =================================================================

/*
** @brief Let the zombie exprim who is it.
** Use is attributes.
*/
void Zombie::announce()
{
    std::cout << "<" << getName() << " (" << getType() << ")> Braiiiiiiinnnssss ..." << std::endl;
}

// =============================================================================

// FUNCTIONS SUP ===============================================================
// =============================================================================
