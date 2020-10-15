/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:31:43 by rchallie          #+#    #+#             */
/*   Updated: 2020/10/15 21:45:08 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

// PROTOTYPES ==================================================================

static Form*	createPresidentialPardonForm(std::string const & target);
static Form*	createRobotomyRequestForm(std::string const & target);
static Form*	createShrubberyCreationForm(std::string const & target);


// COPLIEN =====================================================================

/**
 * @brief Constructor:
 * The "Intern".
 */
Intern::Intern() {}

/**
 * @brief Copy:
 * Copy the "Intern".
 * 
 * @param copy the "Intern" to copy.
 */
Intern::Intern(const Intern& copy) { (void)copy; }

/**
 * @brief Destructor:
 * Called when the object "Bureaucrat" is delete
 */
Intern::~Intern() {}

Intern & Intern::operator=(const Intern& op)
{
	if (this == &op)
		return (*this); 
	return (*this);
}
// =============================================================================

// GETTER - SETTER =============================================================
// =============================================================================

// ADDITIONNAL =================================================================

Form*		Intern::makeForm(std::string const & form_name, std::string const & target)
{
	Form* rtn;
	typedef Form* (*func)(std::string const & target);
	typedef struct { std::string form_name; func func; } FormTypes;
	
	rtn = NULL;
	FormTypes	forms[] = 
	{
		{"presidential pardon", &createPresidentialPardonForm},
		{"robotomy request", &createRobotomyRequestForm},
		{"shrubbery creation", &createShrubberyCreationForm}
	};

	for (int i = 0; i < 3; i++)
		if (forms[i].form_name == form_name)
		{
			rtn = forms[i].func(target);
			std::cout << "Intern creates " << rtn->getName() << std::endl;
			return (rtn);
		}
	std::cout << "Intern is not able to create the form asked." << std::endl;
	return (rtn);
}

// =============================================================================

// EXCEPTIONS ==================================================================
// =============================================================================

// FUNCTIONS SUP ===============================================================

static Form*	createPresidentialPardonForm(std::string const & target) { return (new PresidentialPardonForm(target)); }
static Form*	createRobotomyRequestForm(std::string const & target) { return (new RobotmyRequestForm(target)); }
static Form*	createShrubberyCreationForm(std::string const & target) { return (new ShrubberyCreationForm(target)); }

// =============================================================================
