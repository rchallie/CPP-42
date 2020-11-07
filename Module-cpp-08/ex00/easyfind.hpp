/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 23:41:16 by rchallie          #+#    #+#             */
/*   Updated: 2020/11/07 23:47:24 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

/**
 * @brief Exception NotFound.
 */
class NotFound : public std::exception
{
    virtual const char* what() const throw() { return ("Not found."); }
};

/**
 * @brief Get the first occurence of an integer in
 * a integer container.
 * 
 * @param t is the integer container.
 * @param n is the integer to found.
 * 
 * @throw a NotFound exception if the integer is not
 * in the container.
 */
template < template < typename , typename> class T>
int    easyfind(T<int, std::allocator<int>> const &t, int n)
{   
    typename T<int, std::allocator<int>>::const_iterator it = t.begin();
    for (; it != t.end() && *it != n; it++);
    if (*it == n)
        return (*it);
    else
        throw NotFound();
}