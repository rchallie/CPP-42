/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LastRanger.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:31:43 by excalibur         #+#    #+#             */
/*   Updated: 2020/10/14 00:59:53 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "LastRanger.hpp"

/*
** @brief Init contrcutor:
** The "LastRanger".
*/
LastRanger::LastRanger()
:
    Character(
        "TheLastOne"
    )
{}

/*
** @brief Copy:
** Copy the "LastRanger".
** 
** @param copy the "LastRanger" to copy.
*/
LastRanger::LastRanger(const LastRanger& copy)
:
    Character(copy)
{}

/*
** @brief Destructor:
** Called when the object "LastRanger" is delete
*/
LastRanger::~LastRanger() {}

LastRanger & LastRanger::operator=(const LastRanger& op)
{
    if (this == &op)
        return (*this);
    Character::operator=(op);
    return (*this);
}

// Getter / Setter

// Additionnal

/*
** @brief Attack the enemy given.
*/
void            LastRanger::attack(Enemy* enemy)
{
    std::cout << "I'm the last one of this earth ! Take care of me !" << std::endl;
    Character::attack(enemy);
}