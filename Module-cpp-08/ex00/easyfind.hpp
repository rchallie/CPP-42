/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 23:41:16 by rchallie          #+#    #+#             */
/*   Updated: 2020/11/08 15:58:29 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <algorithm>

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
typename T<int, std::allocator<int> >::iterator
    easyfind(T<int, std::allocator<int> > &array, int n)
{   
    typename T<int, std::allocator<int> >::iterator itpos;
    if ((itpos = std::find(array.begin(), array.end(), n)) != array.end())
        return (itpos);
    else
        throw NotFound();
}