/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 18:58:53 by rchallie          #+#    #+#             */
/*   Updated: 2020/10/03 00:41:15 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int main()
{
    ZombieEvent zombie_event;
    Zombie      *zombie;


    zombie = new Zombie("Normal", "One");
    zombie->advert();
    delete zombie;

    zombie = zombie_event.newZombie("Two");
    zombie->advert();
    delete zombie;

    zombie_event.setZombieType("SettedType");

    zombie = zombie_event.newZombie("Three");
    zombie->advert();
    delete zombie;

    zombie_event.setZombieType("Chump");

    zombie = zombie_event.randomChump();
    delete zombie;
    
    return (0);
}