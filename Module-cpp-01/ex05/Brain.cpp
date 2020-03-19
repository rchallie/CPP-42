/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: excalibur <excalibur@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:31:43 by excalibur         #+#    #+#             */
/*   Updated: 2020/03/15 21:36:17 by excalibur        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <sstream>

Brain::Brain() {}
Brain::~Brain() {}

void                Brain::setCapacity(unsigned long long capacity) { this->capacity = capacity; }
unsigned long long  Brain::getCapacity() { return (this->capacity); }

// stringstream use a string buffer that contains a sequence of characters.
// This sequence of characters can be accessed directly as a string object,
// using member str.
std::string         Brain::identify()
{
    std::stringstream address;
    address << this;
    return (address.str());
}