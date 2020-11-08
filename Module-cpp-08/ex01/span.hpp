/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: excalibur <excalibur@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:33:03 by excalibur         #+#    #+#             */
/*   Updated: 2020/03/26 16:35:58 by excalibur        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

// LIBS ========================================================================
# include <iostream>
# include <vector>
# include <algorithm>
// =============================================================================

// PROTOTYPES ==================================================================
class Span;
// =============================================================================

// CLASS DEFINITIONS ===========================================================
class Span
{
    private:
        unsigned int        _max_values;
        std::vector<int>    _values;

    public:
        // Coplien
        Span(unsigned int const & N);
        Span(const Span&);
        virtual ~Span();
        Span &operator=(const Span& op);

        // Getter - Setter

        // Additionnal
        void        addNumber(int);
        long        shortestSpan(void);
        long        longestSpan(void);

        // Exceptions
        class Full : public std::exception
        {
            virtual const char* what() const throw() { return ("Span is full."); }
        };

        class CantSpan : public std::exception
        {
            virtual const char* what() const throw() { return ("Span have not enough values to do a span."); }
        };
};
// =============================================================================

// FUNCTIONS SUP PROTOYPES =====================================================
// =============================================================================

#endif