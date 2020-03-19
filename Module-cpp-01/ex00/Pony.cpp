/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: excalibur <excalibur@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 12:00:53 by excalibur         #+#    #+#             */
/*   Updated: 2020/03/18 19:06:32 by excalibur        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony() {}

Pony::Pony(std::string name, std::string color,
			std::string favorite_food, std::string owner,
			std::string size, std::string weight)
{
    this->name = name;
    this->color = color;
    this->favorite_food = favorite_food;
    this->owner = owner;
    this->size = size;
    this->weight = weight;
}

Pony::~Pony() {}

void Pony::set_Name(std::string name) {this->name = name;}
void Pony::set_Color(std::string color) {this->color = color;}
void Pony::set_Favorite_Food(std::string favorite_food) {this->favorite_food = favorite_food;}
void Pony::set_Owner(std::string owner) {this->owner = owner;}
void Pony::set_Size(std::string size) {this->size = size;}
void Pony::set_Weight(std::string weight) {this->weight = weight;}
void Pony::speech()
{
    std::cout << "[" << get_Name() << "] : ";
    std::cout << "I'm " << get_Color() << ", ";
    std::cout << "I like " << get_Favorite_Food() << ", ";
    std::cout << "my owner is " << get_Owner() << ", ";
    std::cout << "I'm " << get_Size() << " and ";
    std::cout << "my weight is " << get_Weight() << "kg" << std::endl;
}

std::string Pony::get_Color() { return (this->color);}
std::string Pony::get_Name() { return (this->name);}
std::string Pony::get_Favorite_Food() { return (this->favorite_food);}
std::string Pony::get_Owner() { return (this->owner);}
std::string Pony::get_Size() { return (this->size);}
std::string Pony::get_Weight() { return (this->weight);}

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