/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:33:03 by rchallie          #+#    #+#             */
/*   Updated: 2020/10/05 22:42:39 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

// LIBS ========================================================================
# include <iostream>
# include <cmath>
// =============================================================================

// PROTOTYPES ==================================================================
class Fixed;
// =============================================================================

// CLASSES DEFINITIONS =========================================================
class Fixed
{
    private:
        int                 value;
        const static int    fractionnal_bits = 8;
    public:
        Fixed();                             // Default constructor
        Fixed(const int integer);
        Fixed(const float floater);
        Fixed(const Fixed& copy);                  // Copy constructor
        virtual ~Fixed();                            // Eventual virtual destructor
        Fixed &operator=(const Fixed& op);         // Affectation operation

		// Getter - Setter
        int getRawBits(void) const;
        void setRawBits(int const raw);
        
        float toFloat(void) const;
        int toInt(void) const;
};
// =============================================================================

// FUNCTIONS PROTOYPES =========================================================
std::ostream &operator<<(std::ostream &out, const Fixed &fixe);
// =============================================================================

#endif