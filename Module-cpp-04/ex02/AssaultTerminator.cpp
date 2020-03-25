/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: excalibur <excalibur@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:31:43 by excalibur         #+#    #+#             */
/*   Updated: 2020/03/19 19:22:00 by excalibur        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator()    { std::cout << "* teleports from space *" << std::endl; }
AssaultTerminator::AssaultTerminator(const AssaultTerminator&) {}
AssaultTerminator::~AssaultTerminator()   { std::cout << "I'll be back ..." << std::endl; }

AssaultTerminator & AssaultTerminator::operator=(const AssaultTerminator& op)
{
    if (this == &op)
        return (*this); 
    return (*this);
}

ISpaceMarine*   AssaultTerminator::clone() const           { return (new AssaultTerminator(*this)); }
void            AssaultTerminator::battleCry() const       { std::cout << "This code is unclean. Purify it !" << std::endl;}
void            AssaultTerminator::rangedAttack() const    { std::cout << "* does nothing *" << std::endl; }
void            AssaultTerminator::meleeAttack() const     { std::cout << "* attaque with chainfists *" << std::endl; }
