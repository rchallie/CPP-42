/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: excalibur <excalibur@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:33:03 by excalibur         #+#    #+#             */
/*   Updated: 2020/03/17 16:58:39 by excalibur        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>

# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character;

class Character
{
    private:
        std::string     _name;
        int             _ap;
        AWeapon*        _equiped_weapon;

    public:
        Character(std::string const & name);
        Character(const Character&);
        ~Character();
        Character &operator=(const Character& op);
        
        // Getter / Setter
        std::string     getName() const;
        int             getAP() const;
        AWeapon*        getWeapon() const;

        // Additionnal
        void            recoverAP();
        void            equip(AWeapon*);
        void            attack(Enemy*);
};

std::ostream    &operator<<(std::ostream & out, const Character & charater);

#endif