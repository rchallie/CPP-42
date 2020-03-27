/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: excalibur <excalibur@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/26 21:57:15 by excalibur         #+#    #+#             */
/*   Updated: 2020/03/27 15:26:55 by excalibur        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ShrubberyCreationForm.hpp"
# include "RobotmyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "Intern.hpp"

int main()
{
    Intern someRandomIntern;
    Form* rrf;

    rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
    // rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    // rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");

    delete rrf;

    return (0);
}