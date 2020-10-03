/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:31:43 by rchallie          #+#    #+#             */
/*   Updated: 2020/10/03 11:22:04 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

/*
** @brief Default contructor:
** The "Weapon".
*/
Weapon::Weapon()
:
    _type()
{}

/*
** @brief Init contrcutor:
** The "Weapon".
*/
Weapon::Weapon(std::string type)
:
    _type(type)
{}

/*
** @brief Copy:
** Copy the "Weapon".
** 
** @param copy the "Weapon" to copy.
*/
Weapon::Weapon(const Weapon& copy)
:
    _type(copy._type)
{}

/*
** @brief Destructor:
** Called when the object "Weapon" is delete
*/
Weapon::~Weapon() {}

Weapon &Weapon::operator=(const Weapon& op)
{
    if (this == &op)
        return (*this);
    this->_type = op._type;
    return (*this);
}

// GETTER - SETTER =============================================================

/*
** @brief Getter of the type of the weapon.
*/
const std::string&      Weapon::getType() { return (this->_type); }

/*
** @brief Setter of the type of the weapon.
*/
void                    Weapon::setType(const std::string& type) { this->_type = type; }

// =============================================================================
