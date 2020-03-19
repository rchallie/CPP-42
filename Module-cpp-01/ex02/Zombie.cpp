/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: excalibur <excalibur@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 17:06:13 by excalibur         #+#    #+#             */
/*   Updated: 2020/03/15 19:48:48 by excalibur        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() { this->type = "", this->name = ""; }
Zombie::Zombie(std::string type, std::string name) { this->type = type; this->name = name;}

Zombie::~Zombie() {}

std::string Zombie::getName() {return (this->name); }
std::string Zombie::getType() {return (this->type); }

void Zombie::setName(std::string name) { this->name = name; }
void Zombie::setType(std::string type) { this->type = type; }

void Zombie::announce()
{
    std::cout << "<" << getName() << " (" << getType() << ")> Braiiiiiiinnnssss ..." << std::endl;
}
