/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:31:43 by rchallie          #+#    #+#             */
/*   Updated: 2020/10/03 11:43:27 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

/*
** @brief Init contrcutor:
** The "Pony".
*/
HumanA::HumanA(std::string name, Weapon& weapon)
:
    _name(name),
    _weapon(weapon)
{}

/*
** @brief Copy:
** Copy the "Pony".
** 
** @param copy the "Pony" to copy.
*/
HumanA::HumanA(const HumanA& copy)
:
    _name(copy._name),
    _weapon(copy._weapon)
{}

/*
** @brief Destructor:
** Called when the object "Pony" is delete
*/
HumanA::~HumanA() {}

HumanA &HumanA::operator=(const HumanA& op)
{
    if (this == &op)
        return (*this);
    this->_name = op._name;
    this->_weapon = op._weapon;
    return (*this);
}

// ADDITIONNAL =================================================================

/*
** @brief Attack speech of this human.
*/
void    HumanA::attack() { std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl; }

// =============================================================================

// FUNCTIONS SUP ===============================================================
// =============================================================================
