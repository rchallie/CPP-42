/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:31:43 by rchallie          #+#    #+#             */
/*   Updated: 2020/10/13 22:22:53 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

/*
** @brief Init contrcutor:
** The "AWeapon".
*/
AWeapon::AWeapon(std::string const & name, int apcost, int damage)
:
    _name(name),
    _apcost(apcost),
    _damage(damage)
{}

/*
** @brief Copy:
** Copy the "AWeapon".
** 
** @param copy the "AWeapon" to copy.
*/
AWeapon::AWeapon(const AWeapon& copy)
:
    _name(copy._name),
    _apcost(copy._apcost),
    _damage(copy._damage)
{}

/*
** @brief Destructor:
** Called when the object "AWeapon" is delete
*/
AWeapon::~AWeapon() {}

AWeapon & AWeapon::operator=(const AWeapon& op)
{
    if (this == &op)
        return (*this);
    this->_name = op.getName();
    this->_apcost = op.getApCost();
    this->_damage = op.getDamage();
    return (*this);
}

// GETTER - SETTER =============================================================

std::string AWeapon::getName() const { return (this->_name); }
int         AWeapon::getApCost() const { return (this->_apcost); }
int         AWeapon::getDamage() const { return (this->_damage); }

// =============================================================================
