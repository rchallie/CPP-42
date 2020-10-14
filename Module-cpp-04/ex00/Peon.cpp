/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:31:43 by rchallie          #+#    #+#             */
/*   Updated: 2020/10/13 22:08:24 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

/*
** @brief Default contructor:
** The "Peon".
*/
Peon::Peon()
:
    Victim()
{
    std::cout << "Zog Zog." << std::endl;
}

/*
** @brief Init contrcutor:
** The "Peon".
*/
Peon::Peon(const std::string & name)
:
    Victim(
        name
    )
{
    std::cout << "Zog Zog." << std::endl;
}

/*
** @brief Copy:
** Copy the "Peon".
** 
** @param copy the "Peon" to copy.
*/
Peon::Peon(const Peon & copy)
:
    Victim (
        copy
    )
{}

/*
** @brief Destructor:
** Called when the object "Peon" is delete
*/
Peon::~Peon()
{
    std::cout << "Bleuark..." << std::endl;
}

Peon & Peon::operator=(const Peon& op)
{
    if (this == &op)
        return (*this);
    Victim::operator=(op);
    return (*this);
}

/*
** @brief Polymorphed the Peon.
*/
void    Peon::getPolymorphed(void) const
{
    std::cout << getName() << " was just polymorphed into a pink Peon!" << std::endl;
}