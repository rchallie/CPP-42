/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:31:43 by rchallie          #+#    #+#             */
/*   Updated: 2020/10/14 20:49:13 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

/*
** @brief Default contructor:
** The "TacticalMarine".
*/
TacticalMarine::TacticalMarine()
{
    std::cout << "Tactical Marine ready for action!" << std::endl;
}

/*
** @brief Copy:
** Copy the "TacticalMarine".
** 
** @param copy the "TacticalMarine" to copy.
*/
TacticalMarine::TacticalMarine(const TacticalMarine &) {}

TacticalMarine::~TacticalMarine()
{
    std::cout << "Aaargh ..." << std::endl;
}

/*
** @brief Destructor:
** Called when the object "TacticalMarine" is delete
*/
TacticalMarine & TacticalMarine::operator=(const TacticalMarine& op)
{
    if (this == &op)
        return (*this);
    return (*this);
}

/*
** @brief Give an new TacticalMarine, a copy of this.
*/
ISpaceMarine*   TacticalMarine::clone() const           { return (new TacticalMarine(*this)); }

/*
** @brief Shout in function of attack.
*/
void            TacticalMarine::battleCry() const       { std::cout << "For the Holy PLOT!" << std::endl;}
void            TacticalMarine::rangedAttack() const    { std::cout << "* attacks with a bolter *" << std::endl; }
void            TacticalMarine::meleeAttack() const     { std::cout << "* attacks with a chainsword *" << std::endl; }
