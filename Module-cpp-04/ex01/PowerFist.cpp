/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:31:43 by rchallie          #+#    #+#             */
/*   Updated: 2020/10/13 22:34:05 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

/*
** @brief Default contructor:
** The "PowerFist".
*/
PowerFist::PowerFist()
:
    AWeapon(
        "Power Fist",
        8,
        50
    )
{}

/*
** @brief Copy:
** Copy the "PowerFist".
** 
** @param copy the "PowerFist" to copy.
*/
PowerFist::PowerFist(const PowerFist & copy)
:
    AWeapon(
        copy
    )
{}

/*
** @brief Destructor:
** Called when the object "PowerFist" is delete
*/
PowerFist::~PowerFist() {}

PowerFist & PowerFist::operator=(const PowerFist& op)
{
    if (this == &op)
        return (*this);
    AWeapon::operator=(op);
    return (*this);
}

// ADDITIONNAL

/*
** @brief Attack of the "PowerFist"
*/
void    PowerFist::attack() const
{
    std::cout << "* pschhh... SBAM! *" << std::endl;
}