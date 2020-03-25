/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: excalibur <excalibur@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 12:00:53 by excalibur         #+#    #+#             */
/*   Updated: 2020/03/24 12:11:21 by excalibur        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony() {}

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

Pony::~Pony() {}

// GETTER - SETTER =============================================================
std::string Pony::get_Color()                           { return (this->_color);}
std::string Pony::get_Name()                            { return (this->_name);}
std::string Pony::get_Favorite_Food()                   { return (this->_favorite_food);}
std::string Pony::get_Owner()                           { return (this->_owner);}
std::string Pony::get_Size()                            { return (this->_size);}
std::string Pony::get_Weight()                          { return (this->_weight);}

void Pony::set_Name(std::string name)                   {this->_name = name;}
void Pony::set_Color(std::string color)                 {this->_color = color;}
void Pony::set_Favorite_Food(std::string favorite_food) {this->_favorite_food = favorite_food;}
void Pony::set_Owner(std::string owner)                 {this->_owner = owner;}
void Pony::set_Size(std::string size)                   {this->_size = size;}
void Pony::set_Weight(std::string weight)               {this->_weight = weight;}
// =============================================================================

// ADDITIONNAL =================================================================
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
void    poneyOnTheStack() 
{
    Pony poney_stack("Sucre d'orge", "Yellow", "Apple", "Romain C.", "Cute", "125");
    poney_stack.speech();
}

void    poneyOnTheHeap()
{
    Pony *pony_heap = new Pony("Sprinkles", "Purple", "Carrots", "Abigail A.", "Fat", "100");
    pony_heap->speech();
    delete pony_heap;
}
// =============================================================================
