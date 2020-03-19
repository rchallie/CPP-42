/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: excalibur <excalibur@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 18:26:20 by excalibur         #+#    #+#             */
/*   Updated: 2020/03/14 18:44:09 by excalibur        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

#include "Zombie.hpp"

class ZombieEvent;

class ZombieEvent
{
    private:
        std::string type;
    public:
        ZombieEvent();
        ~ZombieEvent();
        void setZombieType(std::string type);
        std::string getZombieType();
        Zombie *newZombie(std::string name);
        Zombie *randomChump();
};

#endif