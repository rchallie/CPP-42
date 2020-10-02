/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 18:48:33 by rchallie          #+#    #+#             */
/*   Updated: 2020/10/03 00:53:23 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include <cstdlib>
#include <time.h>

/*
** @brief Default contructor:
** The "ZombieHorde".
*/
ZombieHorde::ZombieHorde() {}

/*
** @brief Init contrcutor:
** The "ZombieHorde".
*/
ZombieHorde::ZombieHorde(int n)
{
    
    int     random;
    
    this->_zombies = new Zombie[n];
    this->_nbr_zomzom = n;
    srand(time(NULL));

    std::string name_list[19] = {"Muller", "Frantic", "Hacker", "Haunter", "Bloomer",
                                "Climber", "Tester", "Tumbler", "Chunky", "Dasher",
                                "Brooder", "Trapper", "Fuser", "Sloucher", "Screaker",
                                "Foamer", "Squaller", "Frenzied", "Leecher"};
    for (int z_count = 0; z_count < n; z_count++)
    {
        random = rand() % 19;
        this->_zombies[z_count].setName(name_list[random]);
    }
}

/*
** @brief Copy:
** Copy the "ZombieHorde".
** 
** @param copy the "ZombieHorde" to copy.
*/
ZombieHorde::ZombieHorde(const ZombieHorde& copy)
:
    _zombies(copy._zombies),
    _nbr_zomzom(copy._nbr_zomzom)
{}

/*
** @brief Destructor:
** Called when the object "Pony" is delete
*/
ZombieHorde::~ZombieHorde() { delete [] _zombies; }

ZombieHorde & ZombieHorde::operator=(const ZombieHorde& op)
{
    if (this == &op)
        return (*this);
    this->_nbr_zomzom = op._nbr_zomzom;
    this->_zombies = op._zombies;
    return (*this);
}

/*
** @brief Announce all the zombies of the horde.
*/
void    ZombieHorde::announce()
{
    int z_count = 0;
    while(z_count < this->_nbr_zomzom)
    {
        _zombies[z_count].announce();
        z_count++;
    }
}