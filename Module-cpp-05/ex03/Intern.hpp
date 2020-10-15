/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:33:03 by rchallie          #+#    #+#             */
/*   Updated: 2020/10/15 21:29:39 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

// LIBS ========================================================================
# include "PresidentialPardonForm.hpp"
# include "RobotmyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"
// =============================================================================

// PROTOTYPES ==================================================================
class Intern;
// =============================================================================

// CLASS DEFINITIONS ===========================================================
class Intern
{
    public:
        // Coplien
        Intern();
        Intern(const Intern&);
        virtual ~Intern();
        Intern &operator=(const Intern& op);

        // Getter - Setter

        // Additionnal
        Form*        makeForm(std::string const & form_name, std::string const & target);

        // Exceptions
};
// =============================================================================

// FUNCTIONS SUP PROTOYPES =====================================================
// =============================================================================

#endif