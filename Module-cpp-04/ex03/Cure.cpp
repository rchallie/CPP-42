/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:31:43 by rchallie          #+#    #+#             */
/*   Updated: 2020/10/14 21:11:53 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

// COPLIEN =====================================================================
Cure::Cure()
:
	AMateria(
		"cure"
	)
{}

Cure::Cure(const Cure& copy)
:
	AMateria(
		copy
	)
{}

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
