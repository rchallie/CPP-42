/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:31:43 by rchallie          #+#    #+#             */
/*   Updated: 2020/10/14 21:08:25 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

// COPLIEN =====================================================================
Character::Character(std::string const & name)
:
	_name(name)
{
	for (int i = 0; i < 4; i++)
		this->_inv[i] = NULL;
}

Character::Character(const Character& copy)
{
	this->_name = std::string(copy.getName());
	for (int i = 0; i < 4; i++)
		if (this->_inv[i])
			delete this->_inv[i];
	for (int i = 0; i < 4; i++)
		if (copy._inv[i])
			this->_inv[i] = copy._inv[i]->clone();
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		if (this->_inv[i])
			delete this->_inv[i];
}

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
 * @brief Give "Character" name.
 * 
 * @return the "Character" name.
 */
std::string const &	Character::getName(void) const { return (this->_name); }

// =============================================================================

// ADDITIONNAL =================================================================

/**
 * @brief Add a "AMateria" to the "Character" inventory.
 * If the inventory is full, nothing will be done.
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
 * @brief Unequip the "AMateria" from the "Character" inventory
 * at index. If the index gived is out of the slots number of
 * inventory ot the slot is empty nothing will be done.
 * The "AMateria" will not be destroyed.
 * 
 * @param idx the index of inventory slot where the "AMateria" is.
 */
void				Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
		this->_inv[idx] = NULL;
}

/**
 * @brief Use the "AMateria" at the slot on targeted "ICharacter".
 * If the index gived is out of the slots number of
 * inventory ot the slot is empty nothing will be done.
 * 
 * @param idx the index of inventory slot where the "AMateria" is.
 * @param target the target where the materia will be used
 */
void				Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4)
		this->_inv[idx]->use(target);
}

// =============================================================================

// FUNCTIONS SUP ===============================================================
// =============================================================================
