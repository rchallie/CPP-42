/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:31:43 by rchallie          #+#    #+#             */
/*   Updated: 2020/10/12 22:48:42 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

/*
** @brief Default contructor:
** The "SuperTrap".
*/
SuperTrap::SuperTrap() 
:
    ClapTrap(),
    FragTrap(),
    NinjaTrap()
{}

/*
** @brief Init contrcutor:
** The "SuperTrap".
*/
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
    FragTrap(name),
    NinjaTrap(name)
{
	_print_suffix(getName(), getHitPoints());
    std::cout << "Super Trap created" << std::endl;
}

/*
** @brief Copy:
** Copy the "SuperTrap".
** 
** @param copy the "SuperTrap" to copy.
*/
SuperTrap::SuperTrap(const SuperTrap& op)
:
    ClapTrap(op)
{
	_print_suffix(getName(), getHitPoints());
    std::cout << "Super Trap Copied !" << std::endl;
}

/*
** @brief Destructor:
** Called when the object "SuperTrap" is delete
*/
SuperTrap::~SuperTrap()
{
    _print_suffix(getName(), getHitPoints());
    std::cout << "Super Trap Destroyed !" << std::endl;
}

SuperTrap & SuperTrap::operator=(const SuperTrap& op)
{
    if (this == &op)
        return (*this);
    ClapTrap::operator=(op);
    return (*this);
}