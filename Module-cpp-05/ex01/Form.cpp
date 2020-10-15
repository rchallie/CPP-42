/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:31:43 by rchallie          #+#    #+#             */
/*   Updated: 2020/10/14 22:21:09 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

// COPLIEN =====================================================================

/**
 * @brief Constructor:
 * The "Form".
 * 
 * @param name the name of the "Form"
 * @param requiered_sign_grade the grade necessary to sign the "Form"
 * @param requiered_exec_grade the grade necessary to execute the "Form"
 */
Form::Form(const std::string & name, int requiered_sign_grade, int requiered_exec_grade)
{
	if (requiered_sign_grade <= 0 || requiered_exec_grade <= 0)
		throw Form::GradeTooHighException();
	else if (requiered_sign_grade > 150 || requiered_exec_grade > 150)
		throw Form::GradeTooLowException();
	this->_name = name;
	this->_signed = false;
	this->_requiered_sign_grade = requiered_sign_grade;
	this->_requiered_exec_grade = requiered_exec_grade;
}

/**
 * @brief Copy:
 * Copy the "Form".
 * 
 * @param copy the "Form" to copy.
 */
Form::Form(const Form& copy)
{
	if (copy.getSignGrade() <= 0 || copy.getExecGrade() <= 0)
		throw Form::GradeTooHighException();
	else if (copy.getSignGrade() > 150 || copy.getExecGrade() > 150)
		throw Form::GradeTooLowException();
	this->_name = copy.getName();
	this->_signed = copy.getSigned();
	this->_requiered_sign_grade = copy.getSignGrade();
	this->_requiered_exec_grade = copy.getExecGrade();
}

/**
 * @brief Destructor:
 * Called when the object "Form" is delete
 */
Form::~Form() {}

Form & Form::operator=(const Form& op)
{
	if (this == &op)
		return (*this);
	if (op.getSignGrade() <= 0 || op.getExecGrade() <= 0)
		throw Form::GradeTooHighException();
	else if (op.getSignGrade() > 150 || op.getExecGrade() > 150)
		throw Form::GradeTooLowException();
	this->_name = op.getName();
	this->_signed = op.getSigned();
	this->_requiered_sign_grade = op.getSignGrade();
	this->_requiered_exec_grade = op.getExecGrade();
	return (*this);
}

// =============================================================================

// GETTER - SETTER =============================================================

/**
 * @brief Get name of the "Form"
 * 
 * @return the name of the "Form"
 */
const std::string &	Form::getName(void) const { return (this->_name); }

/**
 * @brief Get signed status (bool) of the "Form"
 * 
 * @return the signed status (bool) of the "Form"
 */
bool				Form::getSigned(void) const { return (this->_signed); }

/**
 * @brief Get grade requiered to sign the "Form"
 * 
 * @return the grade requiered to sign the "Form"
 */
int					Form::getSignGrade(void) const { return (this->_requiered_sign_grade); }

/**
 * @brief Get grade requiered to execute the "Form"
 * 
 * @return the grade requiered to execute the "Form"
 */
int					Form::getExecGrade(void) const { return (this->_requiered_exec_grade); }

// =============================================================================

// ADDITIONNAL =================================================================

/**
 * @brief Sign the "Form". If the grade of the "Bureaucrat"
 * is to low, an exception will be given.
 * 
 * @param bureaucrat the bureaucrat that will sign the "Form"
 */
void				Form::beSigned(const Bureaucrat & bureaucrat)
{
	if (bureaucrat.getGrade() <= this->_requiered_sign_grade)
		this->_signed = true;
	else
		throw Form::GradeTooLowException();
}

// =============================================================================

// EXCEPTIONS ==================================================================
/**
 * @brief Constructor:
 * The "GradeTooHighException".
 */
Form::GradeTooHighException::GradeTooHighException() throw() {}

/**
 * @brief Copy:
 * Copy the "GradeTooHighException".
 * 
 * @param copy the "GradeTooHighException" to copy.
 */
Form::GradeTooHighException::GradeTooHighException(const GradeTooHighException&) throw() {}

/**
 * @brief Destructor:
 * Called when the object "GradeTooHighException" is delete
 */
Form::GradeTooHighException::~GradeTooHighException() throw() {}

Form::GradeTooHighException & Form::GradeTooHighException::operator=(const GradeTooHighException& op) throw() 
{
	if (this == &op)
		return (*this); 
	return (*this);
}

const char* Form::GradeTooHighException::what() const throw() { return ("Grade is to high for Form."); }


/**
 * @brief Constructor:
 * The "GradeTooLowException".
 */
Form::GradeTooLowException::GradeTooLowException() throw() {}

/**
 * @brief Copy:
 * Copy the "GradeTooLowException".
 * 
 * @param copy the "GradeTooLowException" to copy.
 */
Form::GradeTooLowException::GradeTooLowException(const GradeTooLowException&) throw() {}

/**
 * @brief Destructor:
 * Called when the object "GradeTooLowException" is delete
 */
Form::GradeTooLowException::~GradeTooLowException() throw() {}

Form::GradeTooLowException & Form::GradeTooLowException::operator=(const GradeTooLowException& op) throw() 
{
	if (this == &op)
		return (*this); 
	return (*this);
}

const char* Form::GradeTooLowException::what() const throw() { return ("Grade is to low for Form."); }

// =============================================================================

// FUNCTIONS SUP ===============================================================

/**
 * @brief Overload of "<<" for "Form".
 * 
 * @param out the out stream where print
 * @param form the form we're going print 
 * informations.
 * 
 * @return the out stream.
 */
std::ostream	&operator<<(std::ostream & out, const Form & form)
{
	out << form.getName() << " is ";

	if (form.getSigned() == false)
		out << "not signed, ";
	else
		out << "signed, ";
	
	out << "it is signable at grade : " << form.getSignGrade();
	out << " and executable at grade : " << form.getExecGrade() << "." << std::endl;

	return (out);
}

// =============================================================================
