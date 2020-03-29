/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConvSca.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: excalibur <excalibur@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:33:03 by excalibur         #+#    #+#             */
/*   Updated: 2020/03/26 16:35:58 by excalibur        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVSCA_HPP
# define CONVSCA_HPP

// LIBS ========================================================================
# include <iostream>
# include <string>
# include <limits>
# include <cmath>
// =============================================================================

// PROTOTYPES ==================================================================
class ConvSca;
// =============================================================================

// CLASS DEFINITIONS ===========================================================
class ConvSca
{
    public:
        // Coplien
        ConvSca();
        ConvSca(const ConvSca&);
        virtual ~ConvSca();
        ConvSca &operator=(const ConvSca& op);

        // Getter - Setter

        // Additionnal
        float       toTreatable(std::string const & totreat);
        float       toFloat(float);
        int         toInt(float);
        double      toDouble(float);
        char        toChar(float);

        // Exceptions
        class NotConvertible : public std::exception
		{
			public:
				NotConvertible () throw();
				NotConvertible (const NotConvertible&) throw();
				NotConvertible& operator= (const NotConvertible&) throw();
				virtual ~NotConvertible() throw();
				virtual const char* what() const throw();
		};
};
// =============================================================================

// FUNCTIONS SUP PROTOYPES =====================================================
// =============================================================================

#endif