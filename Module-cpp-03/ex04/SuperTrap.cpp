/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: excalibur <excalibur@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:31:43 by excalibur         #+#    #+#             */
/*   Updated: 2020/03/19 19:22:00 by excalibur        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap() 
:
    ClapTrap(), FragTrap(), NinjaTrap()
{}

SuperTrap::SuperTrap(std::string name)
:
    ClapTrap(
        100,
        10,
        120,
        120,
        1,
        name,
        60,
        30,
        5
    ),
    FragTrap(
        name
    ),
    NinjaTrap(
        name
    )
{
    std::cout << "Super Trap created" << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap&) {}
SuperTrap::~SuperTrap() {}
SuperTrap & SuperTrap::operator=(SuperTrap& op)
{
    if (this == &op)
        return (*this); 
    return (*this);
}

void		SuperTrap::rangedAttack(std::string const & target)
{
	_print_suffix(getName(), getHitPoints());
	std::cout << "J'urine des arcs-en-ciel sur toi \033[1;34m" << target << "\033[0m, \033[1;33m" << getRangedAttackDamage() << "\033[0m de ta décadante vie en moins dans ta face !" << std::endl;
}

void		SuperTrap::meleeAttack(std::string const & target)
{
	_print_suffix(getName(), getHitPoints());
	std::cout << "Ninja ! Ninja ! NIIIIIIINJA, coup direct sur \033[1;34m" << target <<"\033[0m. Direct in the carotine pour un total de \033[1;33m" << getMeleeAttackDamage() << "\033[0m dégats ! " << std::endl;
}