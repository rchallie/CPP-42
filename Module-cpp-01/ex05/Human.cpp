/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:31:43 by rchallie          #+#    #+#             */
/*   Updated: 2020/10/03 10:59:11 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

/*
** @brief Default contructor:
** The "Human".
*/
Human::Human()
:
    _brain(new Brain())
{}

/*
** @brief Copy:
** Copy the "Human".
** 
** @param copy the "Human" to copy.
*/
Human::Human(const Human& copy)
:
    _brain(copy._brain)
{}

/*
** @brief Destructor:
** Called when the object "Human" is delete
*/
Human::~Human() { delete this->_brain; }

Human &Human::operator=(const Human& op)
{
    if (this == &op)
        return (*this);
    this->_brain = op._brain;
    return (*this);
}

// GETTER - SETTER =============================================================

/*
** @brief Getter of the brain of the human.
*/
Brain       &Human::getBrain() { return (*this->_brain); }

// =============================================================================

// ADDITIONNAL =================================================================

/*
** @brief Call brain to get is identifier.
*/
std::string Human::identify() { return (this->getBrain().identify()); }
// =============================================================================
