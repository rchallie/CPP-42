/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 12:00:53 by rchallie          #+#    #+#             */
/*   Updated: 2020/10/03 00:46:54 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

/*
** @brief Default contructor:
** The "Pony".
*/
Pony::Pony() {}

/*
** @brief Init contrcutor:
** The "Pony".
*/
Pony::Pony( std::string name,
            std::string color,
			std::string favorite_food,
            std::string owner,
			std::string size,
            std::string weight)
:
    _name(name),
    _color(color),
    _favorite_food(favorite_food),
    _owner(owner),
    _size(size),
    _weight(weight)
{}

/*
** @brief Copy:
** Copy the "Pony".
** 
** @param copy the "Pony" to copy.
*/
Pony::Pony(const Pony& copy)
:
    _name(copy._name),
    _color(copy._color),
    _favorite_food(copy._favorite_food),
    _owner(copy._owner),
    _size(copy._size),
    _weight(copy._weight)
{}

/*
** @brief Destructor:
** Called when the object "Pony" is delete
*/
Pony::~Pony()
{ std::cout << "This is the end of the pony..." << std::endl; }

Pony & Pony::operator=(const Pony& op)
{
    if (this == &op)
        return (*this);
    this->_name = op._name;
    this->_color = op._color;
    this->_favorite_food = op._favorite_food;
    this->_owner = op._owner;
    this->_size = op._size;
    this->_weight = op._weight;
    return (*this);
}

// GETTER - SETTER =============================================================

/*
** @brief Getters of each attributes of "Pony".
*/
std::string Pony::get_Color()                           { return (this->_color);}
std::string Pony::get_Name()                            { return (this->_name);}
std::string Pony::get_Favorite_Food()                   { return (this->_favorite_food);}
std::string Pony::get_Owner()                           { return (this->_owner);}
std::string Pony::get_Size()                            { return (this->_size);}
std::string Pony::get_Weight()                          { return (this->_weight);}

/*
** @brief Setters of each attributes of "Pony".
*/
void Pony::set_Name(std::string name)                   {this->_name = name;}
void Pony::set_Color(std::string color)                 {this->_color = color;}
void Pony::set_Favorite_Food(std::string favorite_food) {this->_favorite_food = favorite_food;}
void Pony::set_Owner(std::string owner)                 {this->_owner = owner;}
void Pony::set_Size(std::string size)                   {this->_size = size;}
void Pony::set_Weight(std::string weight)               {this->_weight = weight;}
// =============================================================================

// ADDITIONNAL =================================================================

/*
** @brief Let the pony exprim who is it.
** Use is attributes.
*/
void Pony::speech()
{
    std::cout << "[" << get_Name() << "] : ";
    std::cout << "I'm " << get_Color() << ", ";
    std::cout << "I like " << get_Favorite_Food() << ", ";
    std::cout << "my owner is " << get_Owner() << ", ";
    std::cout << "I'm " << get_Size() << " and ";
    std::cout << "my weight is " << get_Weight() << "kg" << std::endl;
}
// =============================================================================

// FUNCTIONS SUP ===============================================================
// =============================================================================
