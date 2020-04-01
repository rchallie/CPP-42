/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: excalibur <excalibur@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:33:03 by excalibur         #+#    #+#             */
/*   Updated: 2020/03/26 16:35:58 by excalibur        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

// LIBS ========================================================================
# include <stack>
# include <list>
// =============================================================================

// PROTOTYPES ==================================================================
template< typename T > 
class MutantStack;
// =============================================================================

// CLASS DEFINITIONS ===========================================================

template< typename T > 
class MutantStack : public std::stack<T>
{
    public:
        // Coplien
        MutantStack() {};
        MutantStack(const MutantStack&) {};
        virtual ~MutantStack() {};
        MutantStack &operator=(const MutantStack&) {};
	
        // Getter - Setter

        // Additionnal
        class iterator
        {
            private:
                T*      _pointer;

            public :
                iterator(T* pointer) : _pointer(pointer) {};
                iterator operator++() { _pointer++; return (*this); }
                iterator operator--() { _pointer--; return (*this); }
                T&      operator*() { return (*_pointer); }
                T*      operator->() { return (_pointer); }
                bool    operator==(const iterator& op) { return (_pointer == op._pointer); }
                bool    operator!=(const iterator& op) { return (_pointer != op._pointer); }
        };

        /**
         * @brief Get an iterator on the ground of the
         * "std::stack".
         * 
         * @return the iterator.
         */
        iterator begin() { return (iterator(&this->top() - (this->size()) + 1)); }
        
        /**
         * @brief Get an iterator on the top of the "std::stack".
         * 
         * @return the iterator.
         */
        iterator end() { return (iterator(&this->top() + 1)); } 

        // Exceptions
};
// =============================================================================

// FUNCTIONS SUP PROTOYPES =====================================================
// =============================================================================

#endif