/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:31:43 by rchallie          #+#    #+#             */
/*   Updated: 2020/10/14 01:04:56 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/*
** @brief Init contrcutor:
** The "Character".
*/
Character::Character(std::string const & name)
:
    _name(name),
    _ap(40),
    _has_equiped_weapon(0)
{}

/*
** @brief Copy:
** Copy the "Character".
** 
** @param copy the "Character" to copy.
*/
Character::Character(const Character& copy)
:
    _name(copy._name),
    _ap(copy._ap),
    _has_equiped_weapon(copy._has_equiped_weapon)
{
    if (copy._has_equiped_weapon)
        this->_equiped_weapon = copy._equiped_weapon;
}

/*
** @brief Destructor:
** Called when the object "Character" is delete
*/
Character::~Character() {}

Character & Character::operator=(const Character& op)
{
    if (this == &op)
        return (*this);
    this->_name = op.getName();
    this->_ap = op.getAP();
    this->_has_equiped_weapon = op._has_equiped_weapon;
    if (op.hasEquipedWeapon())
        this->_equiped_weapon = op.getWeapon();
    return (*this);
}

int                 Character::hasEquipedWeapon(void) const { return (this->_has_equiped_weapon); }

// Getter / Setter
std::string const   &Character::getName(void) const { return (this->_name); }
int                 Character::getAP(void) const { return (this->_ap); }
AWeapon*            Character::getWeapon(void) const { return (this->_equiped_weapon); }

// Additionnal

/*
** @brief Recover action point.
*/
void            Character::recoverAP(void)
{
    int     ap_recovered = 10;
    int     max_ap = 40;

    if (this->_ap + ap_recovered > max_ap)
        ap_recovered = max_ap - this->_ap;
    this->_ap += ap_recovered;
}

/*
** @brief Equip weapon.
*/
void            Character::equip(AWeapon* weapon)
{
    this->_has_equiped_weapon = 1;
    this->_equiped_weapon = weapon;
}

/*
** @brief Attack the enemy given.
** If the Character doesn't have enougth
** action point, nothing append.
** If the enemy life is 0 or less,
** delete the enemy.
*/
void            Character::attack(Enemy* enemy)
{
    int     ap_cost = this->_equiped_weapon->getApCost();

    if (this->_ap < ap_cost)
        std::cout << "Not enough AP." << std::endl;
    else if (!enemy)
        std::cout << "You tried to attack a dead." << std::endl;
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

/*
** @brief Overload for output.
*/
std::ostream    &operator<<(std::ostream & out, const Character & charater)
{
    if (charater.hasEquipedWeapon())
        out << charater.getName() << " has " << charater.getAP() << " AP and carries a " << charater.getWeapon()->getName() << std::endl;
    else
        out << charater.getName() << " has " << charater.getAP() << " AP and is unarmed" << std::endl;
    return (out);
}