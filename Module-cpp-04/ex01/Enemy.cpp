/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:31:43 by rchallie          #+#    #+#             */
/*   Updated: 2020/10/13 22:38:20 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

/*
** @brief Init contrcutor:
** The "Enemy".
*/
Enemy::Enemy(int hp, std::string const & type)
:
    _hp(hp),
    _type(type)
{}

/*
** @brief Copy:
** Copy the "Enemy".
** 
** @param copy the "Enemy" to copy.
*/
Enemy::Enemy(const Enemy& copy)
:
    _hp(copy._hp),
    _type(copy._type)
{}

/*
** @brief Destructor:
** Called when the object "Enemy" is delete
*/
Enemy::~Enemy() {}

Enemy & Enemy::operator=(const Enemy& op)
{
    if (this == &op)
        return (*this);
    this->_hp = op.getHP();
    this->_type = op.getType();
    return (*this);
}

// Getter / Setter
int             Enemy::getHP(void) const { return (this->_hp); }
std::string     Enemy::getType(void) const { return (this->_type); }

/*
** @brief Remove some life to the Enemy.
*/
void    Enemy::takeDamage(int amount)
{
    if (amount < 0)
        amount = 0;
    if (this->_hp - amount <= 0)
        amount = this->_hp;
    this->_hp -= amount;
}