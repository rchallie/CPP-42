/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: excalibur <excalibur@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:31:43 by excalibur         #+#    #+#             */
/*   Updated: 2020/03/24 19:19:39 by excalibur        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

// COPLIEN =====================================================================
Cure::Cure(std::string const & type)
:
	AMateria(
		type
	)
{}

Cure::Cure(const Cure& copy)
:
	AMateria(
		copy
	)
{ *this = copy; }

Cure::~Cure() {}

Cure & Cure::operator=(const Cure& op)
{
	if (this == &op)
		return (*this);
	AMateria::operator=(op);
	return (*this);
}
// =============================================================================

// GETTER - SETTER =============================================================
// =============================================================================

// ADDITIONNAL =================================================================
AMateria*		Cure::clone(void) const { return (new Cure(*this)); }

void			Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	AMateria::use(target);
}
// =============================================================================

// FUNCTIONS SUP ===============================================================
// =============================================================================
