/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:33:03 by rchallie          #+#    #+#             */
/*   Updated: 2020/10/14 20:43:06 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

// LIBS ========================================================================
# include <iostream>
# include "ISpaceMarine.hpp"
// =============================================================================

// PROTOTYPES ==================================================================
class TacticalMarine;
// =============================================================================

// CLASSES DEFINITIONS =========================================================
class TacticalMarine : public ISpaceMarine
{
    public:
        TacticalMarine();
        TacticalMarine(const TacticalMarine&);
        virtual ~TacticalMarine();
        TacticalMarine &operator=(const TacticalMarine& op);

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