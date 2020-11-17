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
# include <algorithm>
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

        typedef typename std::stack<T>::container_type::iterator iterator;
        typedef typename std::stack<T>::container_type::const_iterator const_iterator;
        typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
        typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

        // Coplien
        MutantStack() : std::stack<T>() {};
        MutantStack(const MutantStack& copy) : std::stack<T>(copy){};
        virtual ~MutantStack() {};

        MutantStack &operator=(const MutantStack &op)
        {
            if (this == &op)
                return (*this);
            std::stack<T>::operator=(op);
            return (*this);
        };
	
        // Getter - Setter

        // Additionnal

        /**
         * @brief Get an iterator on the ground of the
         * "std::stack".
         * 
         * @return the iterator.
         */
        iterator begin() { return (std::stack<T>::c.begin()); }

        /**
         * @brief Get a const iterator on the ground of the
         * "std::stack".
         * 
         * @return the iterator.
         */
        const_iterator begin() const { return (std::stack<T>::c.begin()); }
        
        /**
         * @brief Get an iterator on the top of the "std::stack".
         * 
         * @return the iterator.
         */
        iterator end() { return (std::stack<T>::c.end()); }

        /**
         * @brief Get a cnst iterator on the top of the "std::stack".
         * 
         * @return the iterator.
         */
        const_iterator end() const { return (std::stack<T>::c.end()); }

                /**
         * @brief Get an iterator on the ground of the
         * "std::stack".
         * 
         * @return the iterator.
         */
        reverse_iterator rbegin() { return (std::stack<T>::c.rbegin()); }

        /**
         * @brief Get a const reverse_iterator on the ground of the
         * "std::stack".
         * 
         * @return the reverse_iterator.
         */
        const_reverse_iterator rbegin() const { return (std::stack<T>::c.rbegin()); }
        
        /**
         * @brief Get an reverse_iterator on the top of the "std::stack".
         * 
         * @return the reverse_iterator.
         */
        reverse_iterator rend() { return (std::stack<T>::c.rend()); }

        /**
         * @brief Get a cnst reverse_iterator on the top of the "std::stack".
         * 
         * @return the reverse_iterator.
         */
        const_reverse_iterator rend() const { return (std::stack<T>::c.rend()); } 

        // Exceptions
};
// =============================================================================

// FUNCTIONS SUP PROTOYPES =====================================================
// =============================================================================

#endif