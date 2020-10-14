/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:31:43 by rchallie          #+#    #+#             */
/*   Updated: 2020/10/13 22:40:57 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

/*
** @brief Init contrcutor:
** The "SuperMutant".
*/
SuperMutant::SuperMutant()
:
    Enemy(
        170,
        "Super Mutant"
    )
{
    std::cout << "Gaaah. Break everything !" << std::endl;
}

/*
** @brief Copy:
** Copy the "SuperMutant".
** 
** @param copy the "SuperMutant" to copy.
*/
SuperMutant::SuperMutant(const SuperMutant & copy)
:
    Enemy(copy)
{}

/*
** @brief Destructor:
** Called when the object "SuperMutant" is delete
*/
SuperMutant::~SuperMutant()
{
    std::cout << "Aaargh ..." << std::endl;
}

SuperMutant & SuperMutant::operator=(const SuperMutant& op)
{
    if (this == &op)
        return (*this);
    Enemy::operator=(op);
    return (*this);
}

/*
** @brief Remove life to the SuperMutant.
*/
void    SuperMutant::takeDamage(int amount)
{
    amount -= 3;
    Enemy::takeDamage(amount);
}