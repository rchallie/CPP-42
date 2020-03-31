/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: excalibur <excalibur@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:33:03 by excalibur         #+#    #+#             */
/*   Updated: 2020/03/26 16:35:58 by excalibur        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

// LIBS ========================================================================
# include <iostream>
// =============================================================================

// CLASS DEFINITIONS ===========================================================
template<class T>
class Array
{
    private:
        T       *_array;
        int     _size;

    public:
        // Coplien
        Array() : _array(new T[0]()), _size(0) {} ;
        Array(unsigned int n) : _array(new T[n]()), _size(n) {} ;

        Array(const Array& copy)
        {
            this->_array = new T[copy.size()]();
            this->_size = copy.size();
            for (int i = 0; i < this->size(); i++)
                this->_array[i] = copy._array[i];
        };

        virtual ~Array() { delete [] _array; };

        Array &operator=(const Array& op)
        {
            if (this == op)
                return (this);
            this->_array = new T[op.size()]();
            this->_size = op.size();
            for (int i = 0; i < this->size(); i++)
                this->_array[i] = op._array[i];
            return (this);
        };

        // Getter - Setter
        int     size(void) const { return (this->_size); }

        // Additionnal
        T& operator[](unsigned int i)
        {
            if (i > static_cast<unsigned int>(this->_size) - 1)
                throw ArrayAccess();
            return (this->_array[i]);
        };

        // Exceptions
        class ArrayAccess : public std::exception
		{
			public:
				ArrayAccess () throw() {} ;
				ArrayAccess (const ArrayAccess&) throw() {} ;
				ArrayAccess& operator= (const ArrayAccess&) throw() {} ;
				virtual ~ArrayAccess() throw() {} ;
				virtual const char* what() const throw() { return ("Out of bounds. (Out of the array)"); };
		};
};
// =============================================================================

// FUNCTIONS SUP PROTOYPES =====================================================
// =============================================================================

#endif