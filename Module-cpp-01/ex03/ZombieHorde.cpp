/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: excalibur <excalibur@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 18:48:33 by excalibur         #+#    #+#             */
/*   Updated: 2020/03/18 21:39:02 by excalibur        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include <cstdlib>
#include <time.h>

ZombieHorde::ZombieHorde() {}

ZombieHorde::ZombieHorde(int n)
{
    
    int     random;
    
    this->zombies = new Zombie[n];
    this->nbr_zomzom = n;
    srand(time(NULL));

    std::string name_list[19] = {"Muller", "Frantic", "Hacker", "Haunter", "Bloomer",
                                "Climber", "Tester", "Tumbler", "Chunky", "Dasher",
                                "Brooder", "Trapper", "Fuser", "Sloucher", "Screaker",
                                "Foamer", "Squaller", "Frenzied", "Leecher"};
    for (int z_count = 0; z_count < n; z_count++)
    {
        random = rand() % 19;
        this->zombies[z_count].setName(name_list[random]);
    }
}

ZombieHorde::~ZombieHorde() { delete [] zombies; }
    
void    ZombieHorde::announce()
{
    int z_count = 0;
    while(z_count < this->nbr_zomzom)
    {
        zombies[z_count].announce();
        z_count++;
    }
}