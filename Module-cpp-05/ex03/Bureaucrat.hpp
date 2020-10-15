/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:33:03 by rchallie          #+#    #+#             */
/*   Updated: 2020/10/14 23:09:36 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

// LIBS ========================================================================
# include <iostream>
# include <string>

# include "Form.hpp"
// =============================================================================

// PROTOTYPES ==================================================================
class Bureaucrat;
class Form;
// =============================================================================

// CLASS DEFINITIONS ===========================================================
class Bureaucrat
{
	private:
		std::string			_name;
		int           		_grade;

	public:
		// Coplien
		Bureaucrat(const std::string & name, int grade);
		Bureaucrat(const Bureaucrat&);
		virtual ~Bureaucrat();
		Bureaucrat &operator=(const Bureaucrat& op);

		// Getter - Setter
		const std::string & getName() const;
		int                 getGrade() const;

		// Additionnal
		void				upGrade();
		void				downGrade();
		void				signForm(Form & form);
		void				executeForm(Form const & form);
		
		// Exceptions
		class GradeTooHighException : public std::exception
		{
			public:
				GradeTooHighException () throw();
				GradeTooHighException (const GradeTooHighException&) throw();
				GradeTooHighException& operator= (const GradeTooHighException&) throw();
				virtual ~GradeTooHighException() throw();
				virtual const char* what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				GradeTooLowException () throw();
				GradeTooLowException (const GradeTooLowException&) throw();
				GradeTooLowException& operator= (const GradeTooLowException&) throw();
				virtual ~GradeTooLowException() throw();
				virtual const char* what() const throw();
		};
};
// =============================================================================

// FUNCTIONS SUP PROTOYPES =====================================================

std::ostream    &operator<<(std::ostream & out, const Bureaucrat & bureaucrat);

// =============================================================================

#endif