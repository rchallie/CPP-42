/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: excalibur <excalibur@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:31:43 by excalibur         #+#    #+#             */
/*   Updated: 2020/03/19 19:22:00 by excalibur        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const & name)
:
    _name(name),
    _ap(40)
{}

Character::Character(const Character&) {}
Character::~Character() {}
Character & Character::operator=(Character& op)
{
    if (this == &op)
        return (*this);
    this->_name = op.getName();
    this->_ap = op.getAP();
    this->_equiped_weapon = op.getWeapon();
    return (*this);
}

// Getter / Setter
std::string     Character::getName(void) const { return (this->_name); }
int             Character::getAP(void) const { return (this->_ap); }
AWeapon*        Character::getWeapon(void) const { return (this->_equiped_weapon); }

// Additionnal
void            Character::recoverAP(void)
{
    int     ap_recovered = 10;
    int     max_ap = 40;

    if (this->_ap + ap_recovered > max_ap)
        ap_recovered = max_ap - this->_ap;
    this->_ap = ap_recovered;
}

void            Character::equip(AWeapon* weapon) { this->_equiped_weapon = weapon; }


void            Character::attack(Enemy* enemy)
{
    int     ap_cost = this->_equiped_weapon->getApCost();

    if (this->_ap < ap_cost)
        std::cout << "Not enough AP." << std::endl;
    else if (this->_equiped_weapon)
    {
        std::cout << this->_name << " attaque " << enemy->getType() << " with ";
        std::cout << this->_equiped_weapon->getName() << std::endl;

        enemy->takeDamage(this->_equiped_weapon->getDamage());
        this->_equiped_weapon->attack();
        this->_ap -= ap_cost;

        if (enemy->getHP() <= 0)
            delete enemy;
    }
}

std::ostream    &operator<<(std::ostream & out, const Character & charater)
{
    if (charater.getWeapon())
        out << charater.getName() << " has " << charater.getAP() << " AP and carries a " << charater.getWeapon()->getName() << std::endl;
    else
        out << charater.getName() << " has " << charater.getAP() << " AP and is unarmed" << std::endl;
    return (out);
}