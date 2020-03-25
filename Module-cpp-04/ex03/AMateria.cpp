/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: excalibur <excalibur@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:31:43 by excalibur         #+#    #+#             */
/*   Updated: 2020/03/25 14:12:14 by excalibur        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

// COPLIEN =====================================================================
AMateria::AMateria(std::string const & type)
:
	_type(type),
	_xp(0)
{}

AMateria::AMateria(const AMateria& copy) { *this = copy; }
AMateria::~AMateria() {}

AMateria & AMateria::operator=(const AMateria& op)
{
	if (this == &op)
		return (*this); 
	this->_type = op.getType();
	this->_xp = op.getXP();
	return (*this);
}
// =============================================================================

// GETTER - SETTER =============================================================
const std::string& 	AMateria::getType(void)	const	{ return (this->_type); }
unsigned int		AMateria::getXP(void) const		{ return (this->_xp); }
// =============================================================================

// ADDITIONNAL =================================================================
void				AMateria::use(ICharacter& target)
{
	this->_xp += 10;
}
// =============================================================================

// FUNCTIONS SUP ===============================================================
// =============================================================================
