/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: excalibur <excalibur@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:31:43 by excalibur         #+#    #+#             */
/*   Updated: 2020/03/17 16:20:00 by excalibur        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//https://embeddedartistry.com/blog/2018/07/12/simple-fixed-point-conversion-in-c/

#include "Fixed.hpp"

/*
** @brief Default contructor:
** The "Fixed".
*/
Fixed::Fixed()
{ this->value = 0; }

/*
** @brief Init contrcutor:
** The "Fixed". Using an Integer.
*/
Fixed::Fixed(const int integer)
{ this->value = integer << this->fractionnal_bits; }

/*
** @brief Init contrcutor:
** The "Fixed". Using an float.
** We transform the float to a integer.
*/
Fixed::Fixed(const float floater)
{ this->value = (int)(roundf(floater * (1 << this->fractionnal_bits))); }

/*
** @brief Copy:
** Copy the "Fixed".
** 
** @param copy the "Fixed" to copy.
*/
Fixed::Fixed(const Fixed& copy)
{ *this = copy; }

/*
** @brief Destructor:
** Called when the object "Fixed" is delete
*/
Fixed::~Fixed()
{}

Fixed & Fixed::operator=(const Fixed& op)
{
    if (this != &op)
        this->value = op.getRawBits();
    return (*this);
}

/*
** @brief Plus operator.
*/
Fixed Fixed::operator+(const Fixed & op) const
{
    Fixed rtn;
    rtn.setRawBits(this->value + op.getRawBits());
    return (rtn);
}

/*
** @brief Minus operator.
*/
Fixed Fixed::operator-(const Fixed & op) const
{
    Fixed rtn;
    rtn.setRawBits(this->value - op.getRawBits());
    return (rtn);
}

/*
** @brief Multiplication operator.
*/
Fixed Fixed::operator*(const Fixed & op) const
{
    Fixed rtn;
    rtn.setRawBits((this->value * op.getRawBits()) >> this->fractionnal_bits);
    return (rtn);
}

/*
** @brief Division operator.
*/
Fixed Fixed::operator/(const Fixed & op) const
{
    Fixed rtn;
    rtn.setRawBits((this->value << this->fractionnal_bits) / op.getRawBits());
    return (rtn);
}

/*
** @brief Pre increment operator.
*/
Fixed & Fixed::operator++(void)
{
    this->value++;
    return (*this);
}

/*
** @brief Post increment operator.
*/
Fixed Fixed::operator++(int)
{
    Fixed rtn(*this);
    operator++();
    return (rtn);
}

/*
** @brief Pre decrement operator.
*/
Fixed & Fixed::operator--(void)
{
    this->value--;
    return (*this);
}

/*
** @brief Post decrement operator.
*/
Fixed Fixed::operator--(int)
{
    Fixed rtn(*this);
    operator--();
    return (rtn);
}

/*
** @brief Return a boolean that contain
** if the two "Fixed" values are equals.
*/
static bool isEqual(Fixed const & op1, Fixed const & op2)
{ return (op1.getRawBits() == op2.getRawBits()); }

/*
** @brief Comparaison operators.
** The comparaison is between the brut values
** of the "Fixed"s. 
*/
bool Fixed::operator>(Fixed const & op) const { return (this->value > op.getRawBits()); }
bool Fixed::operator<(Fixed const & op) const { return (this->value < op.getRawBits()); }
bool Fixed::operator>=(Fixed const & op) const { return (this->value >= op.getRawBits()); }
bool Fixed::operator<=(Fixed const & op) const { return (this->value <= op.getRawBits()); }   
bool Fixed::operator==(Fixed const & op) const { return (isEqual(*this, op)); }   
bool Fixed::operator!=(Fixed const & op) const { return !(isEqual(*this, op)); }


// GETTER - SETTER =============================================================

/*
** @brief Give the brut value of the fixec
** point number.
**
** @brief the brut value.
*/
int Fixed::getRawBits(void) const
{ return (this->value); }

/*
** @brief Set the brut value of the fixec
** point number.
**
** @brief the brut value.
*/
void Fixed::setRawBits(int const raw)
{ this->value = raw; }

// =============================================================================

// ADDITIONNAL =================================================================

/*
** @brief Transform the brut value of fixed
** point to a float.
*/
float Fixed::toFloat(void) const
{ return ((float)this->value / (float)(1 << this->fractionnal_bits)); }

/*
** @brief Transform the brut value of fixed
** point to an int.
*/
int Fixed::toInt(void) const
{ return ((int)(this->value >> this->fractionnal_bits)); }


Fixed & Fixed::min(Fixed &u, Fixed &v) { return (u < v ? u : v); }
const Fixed & Fixed::min(const Fixed &u, const Fixed &v) { return (u < v ? u : v); }
Fixed & Fixed::max(Fixed &u, Fixed &v) { return (u > v ? u : v); }
const Fixed & Fixed::max(const Fixed &u, const Fixed &v) { return (u > v ? u : v); }

// =============================================================================

// FUNCTIONS SUP ===============================================================

std::ostream &operator<<(std::ostream &out, const Fixed &fixe)
{
    out << fixe.toFloat();
    return (out);
}

Fixed &min(Fixed &u, Fixed &v)
{
    return (u < v ? u : v);
}

Fixed &max(Fixed &u, Fixed &v)
{
    return (u > v ? u : v);
}
// =============================================================================

