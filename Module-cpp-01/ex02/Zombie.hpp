/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 17:06:32 by rchallie          #+#    #+#             */
/*   Updated: 2020/10/03 00:44:48 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

// LIBS ========================================================================
#include <iostream>
// =============================================================================

// PROTOTYPES ==================================================================
class Zombie;
// =============================================================================

// CLASSES DEFINITIONS =========================================================
class Zombie
{
    public:
        Zombie();
        Zombie(std::string type, std::string name);
        Zombie(const Zombie&);
        virtual ~Zombie();
        Zombie &operator=(const Zombie& op);

		// Getter - Setter
        std::string getName();
        std::string getType();
        
        void setName(std::string name);
        void setType(std::string type);
        void announce();
    
    private:
        std::string _name;
        std::string _type;
};
// =============================================================================

// FUNCTIONS PROTOYPES =========================================================
// =============================================================================

#endif