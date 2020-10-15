/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:33:03 by rchallie          #+#    #+#             */
/*   Updated: 2020/10/14 22:18:07 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

// LIBS ========================================================================
# include <iostream>
# include <string>

# include "Bureaucrat.hpp"
// =============================================================================

// PROTOTYPES ==================================================================
class Form;
class Bureaucrat;
// =============================================================================

// CLASS DEFINITIONS ===========================================================
class Form
{
    private:
        std::string     _name;
        bool            _signed;
        int             _requiered_sign_grade;
        int             _requiered_exec_grade;

    public:
        // Coplien
        Form(const std::string & name, int requiered_sign_grade, int _requiered_exec_grade);
        Form(const Form&);
        virtual ~Form();
        Form &operator=(const Form& op);

        // Getter - Setter
        const std::string & getName() const;
        bool                getSigned() const;
        int                 getSignGrade() const;
        int                 getExecGrade() const;

        // Additionnal
        void                beSigned(Bureaucrat const & bureaucrat);

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

std::ostream    &operator<<(std::ostream & out, const Form & form);

// =============================================================================

#endif