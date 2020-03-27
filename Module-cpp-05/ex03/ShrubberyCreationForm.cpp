/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: excalibur <excalibur@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:31:43 by excalibur         #+#    #+#             */
/*   Updated: 2020/03/26 19:16:08 by excalibur        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

// COPLIEN =====================================================================

/**
 * @brief Constructor:
 * The "ShrubberyCreationForm".
 */
ShrubberyCreationForm::ShrubberyCreationForm(std::string const & target)
:
	Form(
		"Shrubbery",
		145,
		137,
		target
	)	
{}

/**
 * @brief Copy:
 * Copy the "ShrubberyCreationForm".
 * 
 * @param copy the "ShrubberyCreationForm" to copy.
 */
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy)
:
	Form(
		copy.getName(),
		copy.getSignGrade(),
		copy.getExecGrade(),
		copy.getTarget()
	)
{ *this = copy; }

/**
 * @brief Destructor:
 * Called when the object "Bureaucrat" is delete
 */
ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm& op)
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
 * @brief print a tree in <"Bureaucrat"name>_shrubbery.
 * 
 * @param executor the "Bureaucrat" that execute the "Form".
 */
void					ShrubberyCreationForm::beExecuted() const
{
	std::ofstream file;

	file.open(this->getTarget() + "_shrubbery", std::ios::out | std::ios::app);
	if(file.is_open())
	{
		file << "                 # #### ####			" << std::endl;
        file << "               ### \\/#|### |/####		" << std::endl;
        file << "              ##\\/#/ \\||/##/_/##/_#	" << std::endl;
        file << "            ###  \\/###|/ \\/ # ###	" << std::endl;
        file << "          ##_\\_#\\_\\## | #/###_/_####" << std::endl;
        file << "         ## #### # \\ #| /  #### ##/##	" << std::endl;
        file << "          __#_--###`  |{,###---###-~	" << std::endl;
        file << "                    \\ }{				" << std::endl;
        file << "                     }}{				" << std::endl;
        file << "                     }}{				" << std::endl;
        file << "                     {{}				" << std::endl;
        file << "               , -=-~{ .-^- _			" << std::endl;
        file << "                     `}				" << std::endl;
        file << "                      {				" << std::endl;
		file.close();
	}
}

// =============================================================================

// EXCEPTIONS ==================================================================
// =============================================================================

// FUNCTIONS SUP ===============================================================
// =============================================================================
