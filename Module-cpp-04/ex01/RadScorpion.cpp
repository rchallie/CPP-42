/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:31:43 by rchallie          #+#    #+#             */
/*   Updated: 2020/10/14 00:20:01 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

/*
** @brief Init contrcutor:
** The "Pony".
*/
RadScorpion::RadScorpion()
:
    Enemy(
        80,
        "RadScorpion"
    )
{
    std::cout << "* click click click *" << std::endl;
}

/*
** @brief Copy:
** Copy the "Pony".
** 
** @param copy the "Pony" to copy.
*/
RadScorpion::RadScorpion(const RadScorpion & copy)
:
    Enemy(copy)
{}

/*
** @brief Destructor:
** Called when the object "Pony" is delete
*/
RadScorpion::~RadScorpion()
{
    std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion & RadScorpion::operator=(const RadScorpion& op)
{
    if (this == &op)
        return (*this);
    Enemy::operator=(op);
    return (*this);
}