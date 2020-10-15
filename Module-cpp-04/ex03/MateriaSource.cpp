/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:31:43 by rchallie          #+#    #+#             */
/*   Updated: 2020/10/15 21:53:40 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

// COPLIEN =====================================================================
MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->_templates[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& copy)
{
	for (int i = 0; i < 4; i++)
		if (copy._templates[i])
			this->_templates[i] = copy._templates[i];
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		if (this->_templates[i] != NULL)
			delete this->_templates[i];
}

MateriaSource & MateriaSource::operator=(const MateriaSource& op)
{
	if (this == &op)
		return (*this);
	for (int i = 0; i < 4; i++)
		if (op._templates[i])
			this->_templates[i] = op._templates[i];
	return (*this);
}
// =============================================================================

// GETTER - SETTER =============================================================
// =============================================================================

// ADDITIONNAL =================================================================

/**
 * @brief Add the "AMateria" to the templates of "MateriaSource".
 * If the number of templates in MateriaSource are more than 4, nothing
 * will be done.
 * 
 * @param m the pointer to the "AMateria" will be add to templates
 */
void		MateriaSource::learnMateria(AMateria* m)
{
	int i = 0;

	for (i = 0; i < 4 && this->_templates[i] != NULL; i++);

	if (i < 4)
		this->_templates[i] = m;
}

/**
 * @brief Return a pointer to a new "AMateria" if a type of a
 * template equal to type pasted in arguments.
 * 
 * @param type the type identifier
 * @return A pointer to a new "AMaterial" or NULL
 */
AMateria*	MateriaSource::createMateria(std::string const & type)
{
	// for (int i = 0; i < 4; i++)
	// {
	// 	std::cout << "Template : " << this->_templates[i]->getType() << std::endl;
	// }
	for (int i = 0; i < 4; i++)
		if (this->_templates[i] != NULL
			&& this->_templates[i]->getType() == type)
				return (this->_templates[i]->clone());
	return (0);
}

// =============================================================================

// FUNCTIONS SUP ===============================================================
// =============================================================================
