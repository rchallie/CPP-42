/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:33:03 by rchallie          #+#    #+#             */
/*   Updated: 2020/10/13 22:20:48 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

// LIBS ========================================================================
# include <iostream>
# include <string>
// =============================================================================

// PROTOTYPES ==================================================================
class AWeapon;
// =============================================================================

// CLASSES DEFINITIONS =========================================================
class AWeapon
{
    private:
        std::string _name;
        int         _apcost;
        int         _damage;

    public:
        AWeapon(std::string const & name, int apcost, int damage);
        AWeapon(const AWeapon&);
        virtual ~AWeapon();
        AWeapon &operator=(const AWeapon& op);

        // Getter / Setter
        std::string         getName() const;
        int                 getApCost() const;
        int                 getDamage() const;

        // Additionnal
        virtual void        attack() const = 0;
};
// =============================================================================

// FUNCTIONS PROTOYPES =========================================================
// =============================================================================

#endif