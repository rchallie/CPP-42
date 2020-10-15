/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotmyRequestForm.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:33:03 by rchallie          #+#    #+#             */
/*   Updated: 2020/10/14 23:27:42 by rchallie         ###   ########.fr       */
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
    private:
        void        beExecuted() const;

    public:
        // Coplien
        RobotmyRequestForm(std::string const & target);
        RobotmyRequestForm(const RobotmyRequestForm&);
        virtual ~RobotmyRequestForm();
        RobotmyRequestForm &operator=(const RobotmyRequestForm& op);

        // Getter - Setter

        // Additionnal

        // Exceptions
};
// =============================================================================

// FUNCTIONS SUP PROTOYPES =====================================================
// =============================================================================

#endif