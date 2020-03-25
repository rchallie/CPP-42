/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: excalibur <excalibur@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:31:43 by excalibur         #+#    #+#             */
/*   Updated: 2020/03/19 19:22:00 by excalibur        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type)
:
    _hp(hp),
    _type(type)
{}

Enemy::Enemy(const Enemy& copy) { *this = copy; }

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


void    Enemy::takeDamage(int amount)
{
    if (amount < 0)
        amount = 0;
    if (this->_hp - amount <= 0)
        amount = this->_hp;
    this->_hp -= amount;
}