/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: excalibur <excalibur@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/29 18:49:12 by excalibur         #+#    #+#             */
/*   Updated: 2020/03/29 19:09:05 by excalibur        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// LIBS ========================================================================
# include <iostream>

# include "../incs/Base.hpp"
# include "../incs/A.hpp"
# include "../incs/B.hpp"
# include "../incs/C.hpp"
// =============================================================================

/**
 * @brief Identify the derived class between
 * "A", "B", "C".
 * 
 * @param p the "Base" pointer.
 */
void identify_from_pointer(Base * p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
}

/**
 * @brief Identify the derived class between
 * "A", "B", "C".
 * 
 * @param p the "Base" reference.
 */
void identify_from_reference( Base & p)
{
    if (dynamic_cast<A*>(&p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(&p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(&p))
        std::cout << "C" << std::endl;
}