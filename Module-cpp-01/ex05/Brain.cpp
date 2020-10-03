/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:31:43 by rchallie          #+#    #+#             */
/*   Updated: 2020/10/03 10:58:08 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <sstream>

/*
** @brief Default contructor:
** The "Brain".
*/
Brain::Brain() {}

/*
** @brief Copy:
** Copy the "Brain".
** 
** @param copy the "Brain" to copy.
*/
Brain::Brain(const Brain& copy)
:
    _capacity(copy._capacity)
{}

/*
** @brief Destructor:
** Called when the object "Brain" is delete
*/
Brain::~Brain() {}

Brain &Brain::operator=(const Brain& op)
{
    if (this == &op)
        return (*this);
    this->_capacity = op._capacity;
    return (*this);
}

// GETTER - SETTER =============================================================

/*
** @brief Get the capacity of Brain.
*/
unsigned long long  Brain::getCapacity() { return (this->_capacity); }

/*
** @brief Set the capacity of Brain.
*/
void                Brain::setCapacity(unsigned long long capacity) { this->_capacity = capacity; }

// =============================================================================

// ADDITIONNAL =================================================================

/* @brief Give the address of this object.
** stringstream use a string buffer that contains
** a sequence of characters. This sequence of characters
** can be accessed directly as a string object,
** using member str.
**
** @return a string that contain the adress of this object
** in form "0x00000000"
*/
std::string         Brain::identify()
{
    std::stringstream address;
    address << this;
    return (address.str());
}

// =============================================================================

// FUNCTIONS SUP ===============================================================
// =============================================================================
