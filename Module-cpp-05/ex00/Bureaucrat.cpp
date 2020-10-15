/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:31:43 by rchallie          #+#    #+#             */
/*   Updated: 2020/10/14 22:16:34 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// COPLIEN =====================================================================

/**
 * @brief Constructor:
 * Create a new gear of bureaucracy... The "Bureaucrat".
 * 
 * @param name the name of the "Bureaucrat"
 * @param grade the grade of "Bureaucrat" (1 - 150)
 * 1 is the higher, 150 is the lower.
 */
Bureaucrat::Bureaucrat(const std::string & name, int grade)
{
	if (grade <= 0)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_name = name;
	this->_grade = grade;
}

/**
 * @brief Copy:
 * Copy the "Bureaucrat".
 * 
 * @param copy the "Bureaucrat" to copy.
 */
Bureaucrat::Bureaucrat(const Bureaucrat& copy) 
{
	if (copy.getGrade() <= 0)
		throw Bureaucrat::GradeTooHighException();
	else if (copy.getGrade() > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_name = copy.getName();
	this->_grade = copy.getGrade();
}

/**
 * @brief Destructor:
 * Called when the object "Bureaucrat" is delete
 */
Bureaucrat::~Bureaucrat() {}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat& op)
{
	if (this == &op)
		return (*this);
	this->_name = op.getName();
	this->_grade = op.getGrade();
	return (*this);
}
// =============================================================================

// GETTER - SETTER =============================================================

/**
 * @brief Get name of the "Bureaucrat"
 * 
 * @return the name of "Bureaucrat"
 */
const std::string & Bureaucrat::getName(void) const { return (this->_name); }

/**
 * @brief Get grade of the "Bureaucrat"
 * 
 * @return the grade of "Bureaucrat"
 */
int					Bureaucrat::getGrade(void) const { return (this->_grade); }

// =============================================================================

// ADDITIONNAL =================================================================

/**
 * @brief Upgrade the "Bureaucrat" to the superior grade.
 */
void				Bureaucrat::upGrade(void)
{
	if (this->_grade - 1 <= 0)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade -= 1;
}

/**
 * @brief Downgrade the "Bureaucrat" to the inferior grade.
 */
void				Bureaucrat::downGrade(void)
{
	if (this->_grade + 1 >= 151)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade += 1;
}

// =============================================================================

// EXCEPTIONS ==================================================================

/**
 * @brief Constructor:
 * The "GradeTooHighException".
 */
Bureaucrat::GradeTooHighException::GradeTooHighException() throw() {}

/**
 * @brief Copy:
 * Copy the "GradeTooHighException".
 * 
 * @param copy the "GradeTooHighException" to copy.
 */
Bureaucrat::GradeTooHighException::GradeTooHighException(const GradeTooHighException&) throw() {}

/**
 * @brief Destructor:
 * Called when the object "GradeTooHighException" is delete
 */
Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() {}

Bureaucrat::GradeTooHighException & Bureaucrat::GradeTooHighException::operator=(const GradeTooHighException& op) throw() 
{
	if (this == &op)
		return (*this); 
	return (*this);
}

const char* Bureaucrat::GradeTooHighException::what() const throw() { return ("Grade is to high."); }


/**
 * @brief Constructor:
 * The "GradeTooLowException".
 */
Bureaucrat::GradeTooLowException::GradeTooLowException() throw() {}

/**
 * @brief Copy:
 * Copy the "GradeTooLowException".
 * 
 * @param copy the "GradeTooLowException" to copy.
 */
Bureaucrat::GradeTooLowException::GradeTooLowException(const GradeTooLowException&) throw() {}

/**
 * @brief Destructor:
 * Called when the object "GradeTooLowException" is delete
 */
Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() {}

Bureaucrat::GradeTooLowException & Bureaucrat::GradeTooLowException::operator=(const GradeTooLowException& op) throw() 
{
	if (this == &op)
		return (*this); 
	return (*this);
}

const char* Bureaucrat::GradeTooLowException::what() const throw() { return ("Grade is to low."); }

// =============================================================================

// FUNCTIONS SUP ===============================================================

/**
 * @brief Overload of "<<" for "Bureaucrat".
 * 
 * @param out the out stream where print
 * @param bureaucrat the bureaucraft we're going print 
 * informations.
 * 
 * @return the out stream.
 */
std::ostream	&operator<<(std::ostream & out, const Bureaucrat & bureaucrat)
{
	out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << std::endl;
	return (out);
}

// =============================================================================
