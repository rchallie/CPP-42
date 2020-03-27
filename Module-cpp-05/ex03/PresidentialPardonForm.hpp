/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: excalibur <excalibur@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:33:03 by excalibur         #+#    #+#             */
/*   Updated: 2020/03/27 10:09:34 by excalibur        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

// LIBS ========================================================================
# include <cstdlib>

# include "Form.hpp"
// =============================================================================

// PROTOTYPES ==================================================================
class PresidentialPardonForm;
// =============================================================================

// CLASS DEFINITIONS ===========================================================
class PresidentialPardonForm : public Form
{
    public:
        // Coplien
        PresidentialPardonForm(std::string const & target);
        PresidentialPardonForm(const PresidentialPardonForm&);
        virtual ~PresidentialPardonForm();
        PresidentialPardonForm &operator=(const PresidentialPardonForm& op);

        // Getter - Setter

        // Additionnal
        void        beExecuted() const;

        // Exceptions
};
// =============================================================================

// FUNCTIONS SUP PROTOYPES =====================================================
// =============================================================================

#endif