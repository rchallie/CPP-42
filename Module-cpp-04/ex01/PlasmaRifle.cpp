/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:31:43 by rchallie          #+#    #+#             */
/*   Updated: 2020/10/13 22:29:42 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

/*
** @brief Default contructor:
** The "PlasmaRifle".
*/
PlasmaRifle::PlasmaRifle()
:
    AWeapon(
        "Plasma Rifle",
        5,
        21
    )
{}

/*
** @brief Copy:
** Copy the "PlasmaRifle".
** 
** @param copy the "PlasmaRifle" to copy.
*/
PlasmaRifle::PlasmaRifle(const PlasmaRifle & copy)
:
    AWeapon(
        copy
    )
{}

/*
** @brief Destructor:
** Called when the object "PlasmaRifle" is delete
*/
PlasmaRifle::~PlasmaRifle() {}

PlasmaRifle & PlasmaRifle::operator=( const PlasmaRifle& op)
{
    if (this == &op)
        return (*this);
    AWeapon::operator=(op);
    return (*this);
}

// ADDITIONNAL

/*
** @brief Attack of the "PlasmaRifle"
*/
void    PlasmaRifle::attack() const
{
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}