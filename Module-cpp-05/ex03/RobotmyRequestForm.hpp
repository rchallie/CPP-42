/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotmyRequestForm.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: excalibur <excalibur@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:33:03 by excalibur         #+#    #+#             */
/*   Updated: 2020/03/26 16:35:58 by excalibur        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTMYREQUESTFORM_HPP
# define ROBOTMYREQUESTFORM_HPP

// LIBS ========================================================================
# include <cstdlib>

# include "Form.hpp"
// =============================================================================

// PROTOTYPES ==================================================================
class RobotmyRequestForm;
// =============================================================================

// CLASS DEFINITIONS ===========================================================
class RobotmyRequestForm : public Form
{
    public:
        // Coplien
        RobotmyRequestForm(std::string const & target);
        RobotmyRequestForm(const RobotmyRequestForm&);
        virtual ~RobotmyRequestForm();
        RobotmyRequestForm &operator=(const RobotmyRequestForm& op);

        // Getter - Setter

        // Additionnal
        void        beExecuted() const;

        // Exceptions
};
// =============================================================================

// FUNCTIONS SUP PROTOYPES =====================================================
// =============================================================================

#endif