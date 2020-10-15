/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:33:03 by rchallie          #+#    #+#             */
/*   Updated: 2020/10/15 16:29:33 by rchallie         ###   ########.fr       */
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
    private:
        void        beExecuted() const;

    public:
        // Coplien
        PresidentialPardonForm(std::string const & target);
        PresidentialPardonForm(const PresidentialPardonForm&);
        virtual ~PresidentialPardonForm();
        PresidentialPardonForm &operator=(const PresidentialPardonForm& op);

        // Getter - Setter

        // Additionnal

        // Exceptions
};
// =============================================================================

// FUNCTIONS SUP PROTOYPES =====================================================
// =============================================================================

#endif