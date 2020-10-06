/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:31:43 by rchallie          #+#    #+#             */
/*   Updated: 2020/10/05 22:38:29 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*
** @brief Default contructor:
** The "Fixed".
*/
Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->value = 0;
}

/*
** @brief Copy:
** Copy the "Fixed".
** 
** @param copy the "Fixed" to copy.
*/
Fixed::Fixed(const Fixed& copy)
{
    std::cout << "Copy constructor called" << std::endl;
    this->value = copy.getRawBits();
}

/*
** @brief Destructor:
** Called when the object "Fixed" is delete
*/
Fixed::~Fixed()
{ std::cout << "Destructor called" << std::endl; }

Fixed & Fixed::operator=(const Fixed& op)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this == &op)
        return (*this);
    this->value = op.getRawBits();
    return (*this);
}

// GETTER - SETTER =============================================================

/*
** @brief Give the brut value of the fixec
** point number.
**
** @brief the brut value.
*/
int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->value);
}

/*
** @brief Set the brut value of the fixec
** point number.
**
** @brief the brut value.
*/
void Fixed::setRawBits(int const raw) { this->value = raw; }

// =============================================================================

// ADDITIONNAL =================================================================
// =============================================================================

// FUNCTIONS SUP ===============================================================
// =============================================================================
