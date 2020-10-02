/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 18:26:20 by rchallie          #+#    #+#             */
/*   Updated: 2020/10/03 00:41:22 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

// LIBS ========================================================================
#include "Zombie.hpp"
// =============================================================================

// PROTOTYPES ==================================================================
class ZombieEvent;
// =============================================================================

// CLASSES DEFINITIONS =========================================================
class ZombieEvent
{
    public:
        ZombieEvent();
        ZombieEvent(const ZombieEvent&);
        virtual ~ZombieEvent();
        ZombieEvent &operator=(const ZombieEvent &op);

		// Getter - Setter
        void setZombieType(std::string type);
        std::string getZombieType();
        
        Zombie *newZombie(std::string name);
        Zombie *randomChump();
    
    private:
        std::string _type;
};
// =============================================================================

// FUNCTIONS PROTOYPES =========================================================
// =============================================================================


#endif