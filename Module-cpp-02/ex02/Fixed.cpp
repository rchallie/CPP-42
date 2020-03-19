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

Fixed::Fixed()
{
    // std::cout << "Default constructor called" << std::endl;
    this->value = 0;
}

Fixed::Fixed(const Fixed& copy)
{
    // std::cout << "Copy constructor called" << std::endl;
    this->operator=(copy);
}

Fixed::Fixed(const int integer)
{
    // std::cout << "Int constructor called" << std::endl;
    this->value = integer << this->fractionnal_bits;
}

Fixed::Fixed(const float floater)
{
    // std::cout << "Float constructor called" << std::endl;
    this->value = (int)(roundf(floater * (1 << this->fractionnal_bits)));
}

Fixed::~Fixed()
{
    // std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator=(const Fixed& op)
{
    // std::cout << "Assignation operator called" << std::endl;
    if (this != &op)
        this->value = op.getRawBits();
    return (*this);
}

Fixed Fixed::operator+(const Fixed & op) const
{
    Fixed rtn;
    rtn.setRawBits(this->value + op.getRawBits());
    return (rtn);
}

Fixed Fixed::operator-(const Fixed & op) const
{
    Fixed rtn;
    rtn.setRawBits(this->value - op.getRawBits());
    return (rtn);
}

Fixed Fixed::operator*(const Fixed & op) const
{
    Fixed rtn;
    rtn.setRawBits((this->value * op.getRawBits()) >> this->fractionnal_bits);
    return (rtn);
}

Fixed Fixed::operator/(const Fixed & op) const
{
    Fixed rtn;
    rtn.setRawBits((this->value << this->fractionnal_bits) / op.getRawBits());
    return (rtn);
}

// Pre increment
Fixed & Fixed::operator++(void)
{
    this->value++;
    return (*this);
}

// Post increment
Fixed Fixed::operator++(int)
{
    Fixed rtn(*this);
    operator++();
    return (rtn);
}

// Pre decrement
Fixed & Fixed::operator--(void)
{
    this->value--;
    return (*this);
}

// Post decrement
Fixed Fixed::operator--(int)
{
    Fixed rtn(*this);
    operator--();
    return (rtn);
}

static bool isEqual(Fixed const & op1, Fixed const & op2) { return (op1.getRawBits() == op2.getRawBits()); }

bool Fixed::operator>(Fixed const & op) const { return (this->value > op.getRawBits()); }
bool Fixed::operator<(Fixed const & op) const { return (this->value < op.getRawBits()); }
bool Fixed::operator>=(Fixed const & op) const { return (this->value >= op.getRawBits()); }
bool Fixed::operator<=(Fixed const & op) const { return (this->value <= op.getRawBits()); }   
bool Fixed::operator==(Fixed const & op) const { return (isEqual(*this, op)); }   
bool Fixed::operator!=(Fixed const & op) const { return !(isEqual(*this, op)); }

Fixed & Fixed::min(Fixed &u, Fixed &v) { return (u < v ? u : v); }
const Fixed & Fixed::min(const Fixed &u, const Fixed &v) { return (u < v ? u : v); }
Fixed & Fixed::max(Fixed &u, Fixed &v) { return (u > v ? u : v); }
const Fixed & Fixed::max(const Fixed &u, const Fixed &v) { return (u > v ? u : v); }

int Fixed::getRawBits(void) const
{
    // std::cout << "getRawBits member function called" << std::endl;
    return (this->value);
}

void Fixed::setRawBits(int const raw) { this->value = raw; }

float Fixed::toFloat(void) const { return ((float)this->value / (float)(1 << this->fractionnal_bits)); }
int Fixed::toInt(void) const { return ((int)(this->value >> this->fractionnal_bits)); }

std::ostream &operator<<(std::ostream &out, const Fixed &fixe)
{
    out << fixe.toFloat();
    return (out);
}
