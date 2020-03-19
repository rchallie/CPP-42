/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: excalibur <excalibur@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 18:58:53 by excalibur         #+#    #+#             */
/*   Updated: 2020/03/14 19:22:13 by excalibur        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "Zombie.hpp"
#include "ZombieEvent.hpp"

// Avantage Heap : beaucoup d'espace allocable, bien pour des things que l'on a
// pas peur de trop perdre (utuliser sur le cours term) (on sais jamais un truc mal codé..)
// Avantage stack, pas de leaks, bon pour tout ce qui vas être utilisé sur plusieurs autres, plus stable

int main()
{
    ZombieEvent zombie_event;
    Zombie      *zombie_one;
    Zombie      *zombie_two;
    Zombie      *zombie_three;
    Zombie      *zombie_four;


    zombie_one = new Zombie("Normal", "One");
    zombie_one->announce();
    delete zombie_one;

    zombie_two = zombie_event.newZombie("Two");
    zombie_two->announce();
    delete zombie_two;

    zombie_event.setZombieType("SettedType");

    zombie_three = zombie_event.newZombie("Three");
    zombie_three->announce();
    delete zombie_three;

    zombie_event.setZombieType("Chump");

    zombie_four = zombie_event.randomChump();
    zombie_four->announce();
    delete zombie_four;
    
    return (0);
}