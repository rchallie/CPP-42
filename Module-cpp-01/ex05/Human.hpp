/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:33:03 by rchallie          #+#    #+#             */
/*   Updated: 2020/10/03 11:10:45 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

// LIBS ========================================================================
#include "Brain.hpp"
// =============================================================================

// PROTOTYPES ==================================================================
class Human;
// =============================================================================

// CLASSES DEFINITIONS =========================================================
class Human
{
    public:
        Human();
        Human(const Human&);
        virtual ~Human();
        Human &operator=(const Human& op);

        Brain       &getBrain();
    
        std::string identify();

    private:
        Brain *_brain;
};
// =============================================================================

// FUNCTIONS PROTOYPES =========================================================
// =============================================================================

#endif
