/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:31:43 by rchallie          #+#    #+#             */
/*   Updated: 2020/10/05 23:16:54 by rchallie         ###   ########.fr       */
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
** @brief Init contrcutor:
** The "Fixed". Using an Integer.
*/
Fixed::Fixed(const int integer)
{
    std::cout << "Int constructor called" << std::endl;
    this->value = integer << this->fractionnal_bits;
}

/*
** @brief Init contrcutor:
** The "Fixed". Using an float.
** We transform the float to a integer.
*/
Fixed::Fixed(const float floater)
{
    std::cout << "Float constructor called" << std::endl;
    this->value = (int)(roundf(floater * (1 << this->fractionnal_bits)));
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
{
    std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator=(const Fixed& op)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &op)
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

/*
** @brief Transform the brut value of fixed
** point to a float.
*/
float Fixed::toFloat(void) const
{
    return ((float)this->value / (float)(1 << this->fractionnal_bits));
}

/*
** @brief Transform the brut value of fixed
** point to an int.
*/
int Fixed::toInt(void) const
{
    return ((int)(this->value >> this->fractionnal_bits));
}

// =============================================================================

// FUNCTIONS SUP ===============================================================

std::ostream &operator<<(std::ostream &out, const Fixed &fixe)
{
    out << fixe.toFloat();
    return (out);
}

// =============================================================================
