/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: excalibur <excalibur@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:33:03 by excalibur         #+#    #+#             */
/*   Updated: 2020/03/17 16:58:39 by excalibur        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>
# include <string>

class AWeapon;

class AWeapon
{
    private:
        std::string _name;
        int         _apcost;
        int         _damage;

    public:
        AWeapon(std::string const & name, int apcost, int damage);
        AWeapon(const AWeapon&);
        ~AWeapon();
        AWeapon &operator=(AWeapon& op);

        // Getter / Setter
        std::string         getName() const;
        int                 getApCost() const;
        int                 getDamage() const;

        // Additionnal
        virtual void        attack() const = 0;
};

#endif