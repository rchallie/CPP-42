/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Minion.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:31:43 by rchallie         #+#    #+#             */
/*   Updated: 2020/10/13 22:07:08 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Minion.hpp"

/*
** @brief Default contructor:
** The "Pony".
*/
Minion::Minion()
:
    Victim()
{
    std::cout << "Prêt à servir de souffre douleur." << std::endl;
}

/*
** @brief Init contrcutor:
** The "Pony".
*/
Minion::Minion(const std::string & name)
:
    Victim(
        name
    )
{
    std::cout << "Prêt à servir de souffre douleur." << std::endl;
}

/*
** @brief Copy:
** Copy the "Pony".
** 
** @param copy the "Pony" to copy.
*/
Minion::Minion(const Minion & copy)
:
    Victim (
        copy
    )
{}

/*
** @brief Destructor:
** Called when the object "Pony" is delete
*/
Minion::~Minion()
{
    std::cout << "Je délivre quelques PO..." << std::endl;
}

Minion & Minion::operator=(const Minion& op)
{
    if (this == &op)
        return (*this);
    Victim::operator=(op);
    return (*this);
}

// Additionnal

/*
** @brief Polymorphed the Minion.
*/
void    Minion::getPolymorphed(void) const
{
    std::cout << getName() << " was just polymorphed into a big TANK!" << std::endl;
}