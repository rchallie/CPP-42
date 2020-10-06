/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 17:19:29 by rchallie          #+#    #+#             */
/*   Updated: 2020/10/05 20:41:43 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include <cstdlib>
#include <ctime>

/*
** @brief Default contructor:
** The "ZombieEvent".
*/
ZombieEvent::ZombieEvent()
:
    _type()
{}

/*
** @brief Copy:
** Copy the "ZombieEvent".
** 
** @param copy the "ZombieEvent" to copy.
*/
ZombieEvent::ZombieEvent(const ZombieEvent& copy)
:
    _type(copy._type)
{}

/*
** @brief Destructor:
** Called when the object "ZombieEvent" is delete
*/
ZombieEvent::~ZombieEvent() {}

ZombieEvent & ZombieEvent::operator=(const ZombieEvent& op)
{
    if (this == &op)
        return (*this);
    this->_type = op._type;
    return (*this);
}

// GETTER - SETTER =============================================================

/*
** @brief Set the type of zombie that will be
** create.
**
** @param type the type.
*/
void ZombieEvent::setZombieType(std::string type) { this->_type = type;}

// =============================================================================

// ADDITIONNAL =================================================================

/*
** @brief Create a new Zombie who has name
** with the defined type.
**
** @param name the name of the zombie.
** @return the new zombie.
*/
Zombie *ZombieEvent::newZombie(std::string name)
{
    return (new Zombie(this->_type, name));
}

Zombie *ZombieEvent::randomChump()
{
    int     random;
    Zombie *rtn;

    std::string name_list[10] = {"Muller", "Frantic", "Hacker", "Haunter", "Bloomer",
                                "Climber", "Tester", "Tumbler", "Chunky", "Dasher"};
    srand(time(NULL));
    random = rand() % 9 + 1;
    if (this->_type == "")
        this->_type = "Chump";
    rtn = newZombie(name_list[random]);
    rtn->announce();
    return (rtn);
}
// =============================================================================

// FUNCTIONS SUP ===============================================================
// =============================================================================
