/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:31:43 by rchallie          #+#    #+#             */
/*   Updated: 2020/10/14 21:28:31 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

// COPLIEN =====================================================================
AMateria::AMateria(std::string const & type)
:
	_type(type),
	_xp(0)
{}

AMateria::AMateria(const AMateria& copy)
:
	_type(copy._type),
	_xp(copy.getXP())
{}

AMateria::~AMateria() {}

AMateria & AMateria::operator=(const AMateria& op)
{
	if (this == &op)
		return (*this); 
	this->_xp = op.getXP();
	return (*this);
}
// =============================================================================

// GETTER - SETTER =============================================================

/**
 * @brief Get type of the "AMateria"
 * 
 * @return the type of "AMateria"
 */
const std::string& 	AMateria::getType(void)	const	{ return (this->_type); }

/**
 * @brief Get xp of the "AMateria"
 * 
 * @return the xp of "AMateria"
 */
unsigned int		AMateria::getXP(void) const		{ return (this->_xp); }

// =============================================================================

// ADDITIONNAL =================================================================

/**
 * @brief Use the "AMateria" on the target and add 10 of experience
 * points to the "Amateria".
 * 
 * @param the target where the "Amateria" will be used.
 */
void				AMateria::use(ICharacter& target)
{
	(void)target;
	this->_xp += 10;
}

// =============================================================================

// FUNCTIONS SUP ===============================================================
// =============================================================================
