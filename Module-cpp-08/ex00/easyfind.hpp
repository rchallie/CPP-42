/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: excalibur <excalibur@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/31 11:18:21 by excalibur         #+#    #+#             */
/*   Updated: 2020/03/31 12:45:24 by excalibur        ###   ########.fr       */
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
void    easyfind(T<int, std::allocator<int>> const &t, int n)
{   
    typename T<int, std::allocator<int>>::const_iterator it = t.begin();
    for (; it != t.end() && *it != n; it++);
    if (*it == n)
        std::cout << *it << std::endl;
    else
        throw NotFound();
}