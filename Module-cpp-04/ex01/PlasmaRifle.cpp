/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: excalibur <excalibur@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:31:43 by excalibur         #+#    #+#             */
/*   Updated: 2020/03/19 19:22:00 by excalibur        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle()
:
    AWeapon(
        "Plasma Rifle",
        5,
        21
    )
{}

PlasmaRifle::PlasmaRifle(const PlasmaRifle & copy)
:
    AWeapon(
        copy
    )
{}

PlasmaRifle::~PlasmaRifle() {}

PlasmaRifle & PlasmaRifle::operator=(PlasmaRifle& op)
{
    if (this == &op)
        return (*this);
    return (*this);
}

// ADDITIONNAL

void    PlasmaRifle::attack() const
{
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}