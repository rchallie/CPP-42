/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: excalibur <excalibur@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/26 21:57:15 by excalibur         #+#    #+#             */
/*   Updated: 2020/03/27 10:44:29 by excalibur        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ShrubberyCreationForm.hpp"
# include "RobotmyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

int main()
{
    ShrubberyCreationForm* shrub = new ShrubberyCreationForm("Patrick");
    RobotmyRequestForm* robot = new RobotmyRequestForm("Bob");
    PresidentialPardonForm* pardon = new PresidentialPardonForm("Pef");

    Bureaucrat* bob = new Bureaucrat("Bob", 120);
    Bureaucrat* james = new Bureaucrat("James", 33);
    Bureaucrat* meg = new Bureaucrat("Meg", 1);

    bob->signForm(*shrub);
    bob->executeForm(*shrub);

    james->signForm(*robot);
    james->executeForm(*robot);

    meg->signForm(*pardon);
    meg->executeForm(*pardon);
    
    delete shrub;
    delete robot;
    delete pardon;

    delete bob;
    delete james;
    delete meg;
    
    return (0);
}