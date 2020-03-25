/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: excalibur <excalibur@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:31:43 by excalibur         #+#    #+#             */
/*   Updated: 2020/03/19 19:22:00 by excalibur        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist()
:
    AWeapon(
        "Power Fist",
        8,
        50
    )
{}

PowerFist::PowerFist(const PowerFist & copy)
:
    AWeapon(
        copy
    )
{ *this = copy; }

PowerFist::~PowerFist() {}

PowerFist & PowerFist::operator=(const PowerFist& op)
{
    if (this == &op)
        return (*this);
    return (*this);
}

// ADDITIONNAL

void    PowerFist::attack() const
{
    std::cout << "* pschhh... SBAM! *" << std::endl;
}