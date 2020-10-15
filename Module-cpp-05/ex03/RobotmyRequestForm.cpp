/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotmyRequestForm.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:31:43 by rchallie          #+#    #+#             */
/*   Updated: 2020/10/15 21:15:49 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotmyRequestForm.hpp"

// COPLIEN =====================================================================

/**
 * @brief Constructor:
 * The "RobotmyRequestForm".
 * 
 * @param target the target where the "Form" can be executed.
 */
RobotmyRequestForm::RobotmyRequestForm(std::string const & target)
:
	Form(
		"RobotmyRequestForm",
		72,
		45,
		target
	)	
{ srand(time(NULL)); }

/**
 * @brief Copy:
 * Copy the "RobotmyRequestForm".
 * 
 * @param copy the "RobotmyRequestForm" to copy.
 */
RobotmyRequestForm::RobotmyRequestForm(const RobotmyRequestForm& copy)
:
	Form(
		copy.getName(),
		copy.getSignGrade(),
		copy.getExecGrade(),
		copy.getTarget()
	)
{srand(time(NULL)); }

/**
 * @brief Destructor:
 * Called when the object "Bureaucrat" is delete
 */
RobotmyRequestForm::~RobotmyRequestForm() {}

RobotmyRequestForm & RobotmyRequestForm::operator=(const RobotmyRequestForm& op)
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
void					RobotmyRequestForm::beExecuted() const
{
	std::cout << "Vvvvvvvrrrrr...vvvvrrr...VVVvvvrrrr...VvvVvvrr..." << std::endl;
	if((1 + (rand() % 3)) == 2)
		std::cout << this->getTarget() << " was robotomized!" << std::endl;
	else
		std::cout << "The robotization messed up..." << std::endl;
}

// =============================================================================

// EXCEPTIONS ==================================================================
// =============================================================================

// FUNCTIONS SUP ===============================================================
// =============================================================================
