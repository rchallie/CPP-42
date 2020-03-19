/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: excalibur <excalibur@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 18:47:02 by excalibur         #+#    #+#             */
/*   Updated: 2020/03/18 19:07:04 by excalibur        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

#include "Zombie.hpp"

class ZombieHorde;

class ZombieHorde
{
    private:
        Zombie  *zombies;
        int     nbr_zomzom;

    public:
        ZombieHorde();
        ZombieHorde(int n);
        ~ZombieHorde();
        void announce();
};

#endif