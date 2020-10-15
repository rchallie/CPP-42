/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:33:03 by rchallie          #+#    #+#             */
/*   Updated: 2020/10/14 23:27:11 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

// LIBS ========================================================================
# include <fstream>

# include "Form.hpp"
// =============================================================================

// PROTOTYPES ==================================================================
class ShrubberyCreationForm;
// =============================================================================

// CLASS DEFINITIONS ===========================================================
class ShrubberyCreationForm : public Form
{
    private:
        void        beExecuted() const;

    public:
        // Coplien
        ShrubberyCreationForm(std::string const & target);
        ShrubberyCreationForm(const ShrubberyCreationForm&);
        virtual ~ShrubberyCreationForm();
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm& op);

        // Getter - Setter

        // Additionnal

        // Exceptions
};
// =============================================================================

// FUNCTIONS SUP PROTOYPES =====================================================
// =============================================================================

#endif