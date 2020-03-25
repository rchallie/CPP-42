/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: excalibur <excalibur@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:31:43 by excalibur         #+#    #+#             */
/*   Updated: 2020/03/24 19:19:39 by excalibur        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

// COPLIEN =====================================================================
Character::Character(std::string const & name)
:
	_name(name)
{}

Character::Character(const Character& copy) { *this = copy; }
Character::~Character() {}

Character & Character::operator=(const Character& op)
{
	if (this == &op)
		return (*this);
	this->_name = op.getName();
	
	for (int i = 0; i < 4; i++)
		if (op._inv[i])
			this->_inv[i] = op._inv[i];
		else
			this->_inv[i] = NULL;
	
	return (*this);
}
// =============================================================================

// GETTER - SETTER =============================================================

/**
 * @return the "Character" name.
 */
const std::string &	Character::getName(void) const { return (this->_name); }

// =============================================================================

// ADDITIONNAL =================================================================

/**
 * Add a "AMateria" object to the "Character" inventory.
 * If the inventory is full, nothing is do.
 * 
 * @param m the pointer to the "AMaterial" object to add.
 */
void				Character::equip(AMateria* m)
{
	int i = 0;

	for (i = 0; i < 4 && this->_inv[i] != NULL; i++);

	if (i < 4)
		this->_inv[i] = m;
}

/**
 * Unequip the "AMateria" object from the "Character" inventory
 * at index. If the index gived is out of the slots number of
 * inventory, nothing is do.
 * 
 * @param idx the index of inventory slot where the "AMateria" is.
 */
void				Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
	{

	}
}

// =============================================================================

// FUNCTIONS SUP ===============================================================
// =============================================================================
