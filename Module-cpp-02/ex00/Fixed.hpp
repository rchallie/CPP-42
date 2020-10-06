/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:33:03 by rchallie          #+#    #+#             */
/*   Updated: 2020/10/05 22:37:30 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

// LIBS ========================================================================
# include <iostream>
// =============================================================================

// PROTOTYPES ==================================================================
class Fixed;
// =============================================================================

// CLASSES DEFINITIONS =========================================================
class Fixed
{

    public:
        Fixed();                                    // Default constructor
        Fixed(const Fixed& copy);                   // Copy constructor
        virtual ~Fixed();                           // Eventual virtual destructor
        Fixed &operator=(const Fixed& op);          // Affectation operation

		// Getter - Setter
        int getRawBits(void) const;
        void setRawBits(int const raw);

    private:
        int                 value;
        const static int    fractionnal_bits = 8;
};
// =============================================================================

// FUNCTIONS PROTOYPES =========================================================
// =============================================================================

#endif