/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LastRanger.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:33:03 by rchallie          #+#    #+#             */
/*   Updated: 2020/10/14 00:42:12 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LASTRANGER_HPP
# define LASTRANGER_HPP

// LIBS ========================================================================
# include <iostream>
# include "Enemy.hpp"
# include "Character.hpp"
// =============================================================================

// PROTOTYPES ==================================================================
class LastRanger;
// =============================================================================

// CLASSES DEFINITIONS =========================================================
class LastRanger : public Character
{
    private:

    public:
        LastRanger();
        LastRanger(const LastRanger&);
        virtual ~LastRanger();
        LastRanger &operator=(const LastRanger& op);
        
        // Getter / Setter

        // Additionnal
        void            attack(Enemy*);
};
// =============================================================================

#endif