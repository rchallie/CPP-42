/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:33:03 by rchallie          #+#    #+#             */
/*   Updated: 2020/10/14 20:42:55 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

// LIBS ========================================================================
# include <iostream>
# include "ISpaceMarine.hpp"
// =============================================================================

// PROTOTYPES ==================================================================
class AssaultTerminator;
// =============================================================================

// CLASSES DEFINITIONS =========================================================
class AssaultTerminator : public ISpaceMarine
{
    public:
        AssaultTerminator();
        AssaultTerminator(const AssaultTerminator&);
        virtual ~AssaultTerminator();
        AssaultTerminator &operator=(const AssaultTerminator& op);

        // Additionnal
        ISpaceMarine*   clone() const;
        void            battleCry() const;
        void            rangedAttack() const;
        void            meleeAttack() const;  
};
// =============================================================================

// FUNCTIONS PROTOYPES =========================================================
// =============================================================================

#endif