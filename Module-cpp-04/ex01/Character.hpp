/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:33:03 by rchallie          #+#    #+#             */
/*   Updated: 2020/10/14 00:56:10 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

// LIBS ========================================================================
# include <iostream>
# include <string>
# include "AWeapon.hpp"
# include "Enemy.hpp"
// =============================================================================

// PROTOTYPES ==================================================================
class Character;
// =============================================================================

// CLASSES DEFINITIONS =========================================================
class Character
{
    private:
        std::string     _name;
        int             _ap;
        int             _has_equiped_weapon;
        AWeapon*        _equiped_weapon;

    public:
        Character(std::string const & name);
        Character(const Character&);
        virtual ~Character();
        Character &operator=(const Character& op);

        int                 hasEquipedWeapon() const;
        
        // Getter / Setter
        std::string const   &getName() const;
        int                 getAP() const;
        AWeapon*            getWeapon() const;

        // Additionnal
        void            recoverAP();
        void            equip(AWeapon*);
        void            attack(Enemy*);
};
// =============================================================================

// FUNCTIONS PROTOYPES =========================================================
std::ostream    &operator<<(std::ostream & out, const Character & charater);
// =============================================================================

#endif