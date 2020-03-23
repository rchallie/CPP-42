/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: excalibur <excalibur@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:31:43 by excalibur         #+#    #+#             */
/*   Updated: 2020/03/19 19:22:00 by excalibur        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage)
:
    _name(name),
    _apcost(apcost),
    _damage(damage)
{}

AWeapon::AWeapon(const AWeapon&) {}

AWeapon::~AWeapon() {}

AWeapon & AWeapon::operator=(AWeapon& op)
{
    if (this == &op)
        return (*this);
    this->_name = op.getName();
    this->_apcost = op.getApCost();
    this->_damage = op.getDamage();
    return (*this);
}

std::string AWeapon::getName() const { return (this->_name); }
int         AWeapon::getApCost() const { return (this->_apcost); }
int         AWeapon::getDamage() const { return (this->_damage); }