/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: excalibur <excalibur@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:33:03 by excalibur         #+#    #+#             */
/*   Updated: 2020/03/26 16:35:58 by excalibur        ###   ########.fr       */
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
    public:
        // Coplien
        ShrubberyCreationForm(std::string const & target);
        ShrubberyCreationForm(const ShrubberyCreationForm&);
        virtual ~ShrubberyCreationForm();
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm& op);

        // Getter - Setter

        // Additionnal
        void        beExecuted() const;

        // Exceptions
};
// =============================================================================

// FUNCTIONS SUP PROTOYPES =====================================================
// =============================================================================

#endif