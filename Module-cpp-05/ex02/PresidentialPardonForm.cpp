/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:31:43 by rchallie          #+#    #+#             */
/*   Updated: 2020/10/15 21:15:54 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

// COPLIEN =====================================================================

/**
 * @brief Constructor:
 * The "PresidentialPardonForm".
 */
PresidentialPardonForm::PresidentialPardonForm(std::string const & target)
:
	Form(
		"PresidentialPardonForm",
		25,
		5,
		target
	)	
{}

/**
 * @brief Copy:
 * Copy the "PresidentialPardonForm".
 * 
 * @param copy the "PresidentialPardonForm" to copy.
 */
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy)
:
	Form(
		copy.getName(),
		copy.getSignGrade(),
		copy.getExecGrade(),
		copy.getTarget()
	)
{}

/**
 * @brief Destructor:
 * Called when the object "Bureaucrat" is delete
 */
PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm& op)
{
	if (this == &op)
		return (*this); 
	Form::operator=(op);
	return (*this);
}

// =============================================================================

// GETTER - SETTER =============================================================
// =============================================================================

// ADDITIONNAL =================================================================

/**
 * @brief try to robotize the "Bureaucrat".
 * 
 * @param executor the "Bureaucrat" that execute the "Form".
 */
void					PresidentialPardonForm::beExecuted() const
{
	std::cout << this->getTarget() << " was pardonned by Zafod Beeblebrox." << std::endl;
}

// =============================================================================

// EXCEPTIONS ==================================================================
// =============================================================================

// FUNCTIONS SUP ===============================================================
// =============================================================================
