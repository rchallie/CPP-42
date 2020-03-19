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
    std::cout << "Default constructor called" << std::endl;
    this->value = 0;
}

Fixed::Fixed(const Fixed& copy)
{
    std::cout << "Copy constructor called" << std::endl;
    this->operator=(copy);
}

Fixed::Fixed(const int integer)
{
    std::cout << "Int constructor called" << std::endl;
    this->value = integer << this->fractionnal_bits;
}

Fixed::Fixed(const float floater)
{
    std::cout << "Float constructor called" << std::endl;
    this->value = (int)(roundf(floater * (1 << this->fractionnal_bits)));
}

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

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->value);
}

void Fixed::setRawBits(int const raw) { this->value = raw; }

float Fixed::toFloat(void) const
{
    return ((float)this->value / (float)(1 << this->fractionnal_bits));
}

int Fixed::toInt(void) const
{
    return ((int)(this->value >> this->fractionnal_bits));
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixe)
{
    out << fixe.toFloat();
    return (out);
}
