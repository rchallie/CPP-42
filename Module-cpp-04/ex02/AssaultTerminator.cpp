/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:31:43 by rchallie          #+#    #+#             */
/*   Updated: 2020/10/14 20:59:05 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

/*
** @brief Default contructor:
** The "AssaultTerminator".
*/
AssaultTerminator::AssaultTerminator()    { std::cout << "* teleports from space *" << std::endl; }

/*
** @brief Copy:
** Copy the "AssaultTerminator".
** 
** @param copy the "AssaultTerminator" to copy.
*/
AssaultTerminator::AssaultTerminator(const AssaultTerminator&) {}

/*
** @brief Destructor:
** Called when the object "AssaultTerminator" is delete
*/
AssaultTerminator::~AssaultTerminator()   { std::cout << "I'll be back ..." << std::endl; }

AssaultTerminator & AssaultTerminator::operator=(const AssaultTerminator& op)
{
    if (this == &op)
        return (*this); 
    return (*this);
}

/*
** @brief Give a new AssaultTerminator, copy of this.
*/
ISpaceMarine*   AssaultTerminator::clone() const           { return (new AssaultTerminator(*this)); }

/*
** @brief Shout in function of attack.
*/
void            AssaultTerminator::battleCry() const       { std::cout << "This code is unclean. Purify it !" << std::endl;}
void            AssaultTerminator::rangedAttack() const    { std::cout << "* does nothing *" << std::endl; }
void            AssaultTerminator::meleeAttack() const     { std::cout << "* attaque with chainfists *" << std::endl; }
