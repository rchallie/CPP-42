/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: excalibur <excalibur@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:33:03 by excalibur         #+#    #+#             */
/*   Updated: 2020/03/17 16:58:39 by excalibur        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include "AWeapon.hpp"

class PlasmaRifle;

class PlasmaRifle : public AWeapon
{
    public:
        PlasmaRifle();
        PlasmaRifle(const PlasmaRifle & copy);
        ~PlasmaRifle();
        PlasmaRifle &operator=(const PlasmaRifle& op);
        
        // Additionnal
        void    attack() const;
};

#endif