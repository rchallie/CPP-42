/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: excalibur <excalibur@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 17:19:29 by excalibur         #+#    #+#             */
/*   Updated: 2020/03/15 19:19:43 by excalibur        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include <cstdlib>
#include <ctime>

ZombieEvent::ZombieEvent() { this->type = ""; }
ZombieEvent::~ZombieEvent() {}

void ZombieEvent::setZombieType(std::string type) { this->type = type;}

Zombie *ZombieEvent::newZombie(std::string name)
{
    return (new Zombie(this->type, name));
}

Zombie *ZombieEvent::randomChump()
{
    int     random;

    std::string name_list[10] = {"Muller", "Frantic", "Hacker", "Haunter", "Bloomer",
                                "Climber", "Tester", "Tumbler", "Chunky", "Dasher"};
    srand(time(NULL));
    random = rand() % 9 + 1;
    if (this->type == "")
        this->type = "Chump";
    return (newZombie(name_list[random]));
}