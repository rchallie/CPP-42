/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:31:43 by rchallie          #+#    #+#             */
/*   Updated: 2020/10/03 11:37:06 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

/*
** @brief Init contrcutor:
** The "HumanB".
*/
HumanB::HumanB(const std::string& name)
:
    _weapon(),
    _name(name)
{}

/*
** @brief Copy:
** Copy the "HumanB".
** 
** @param copy the "HumanB" to copy.
*/
HumanB::HumanB(const HumanB& copy)
:
    _weapon(copy._weapon),
    _name(copy._name)
{}

/*
** @brief Destructor:
** Called when the object "HumanB" is delete
*/
HumanB::~HumanB() {}

HumanB &HumanB::operator=(const HumanB& op)
{
    if (this == &op)
        return (*this);
    this->_weapon = op._weapon;
    this->_name = op._name;
    return (*this);
}

// GETTER - SETTER =============================================================

/*
** @brief Getter for the weapon of this human.
*/
void    HumanB::setWeapon(Weapon& weapon) { this->_weapon = &weapon; }

// =============================================================================

// ADDITIONNAL =================================================================

/*
** @brief Attack speech of this human.
*/
void    HumanB::attack() { std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl; }

// =============================================================================

// FUNCTIONS SUP ===============================================================
// =============================================================================
