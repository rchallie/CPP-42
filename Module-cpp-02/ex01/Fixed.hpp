/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: excalibur <excalibur@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:33:03 by excalibur         #+#    #+#             */
/*   Updated: 2020/03/17 13:06:12 by excalibur        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed;

class Fixed
{
    private:
        int                 value;
        const static int    fractionnal_bits = 8;
    public:
        Fixed();                             // Default constructor
        Fixed(const Fixed& copy);                  // recopy constructor
        Fixed(const int integer);
        Fixed(const float floater);
        ~Fixed();                            // Eventual virtual destructor
        Fixed &operator=(const Fixed& op);         // Affectation operation
        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixe);

#endif