/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/26 18:41:46 by rchallie          #+#    #+#             */
/*   Updated: 2020/10/14 22:28:11 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Form.hpp"

int main()
{
    Form* constitution = new Form("Constitution", 10, 30);
    Form* toHigh;
    Form* toLow;
    
    std::cout << *constitution;
    
    try
    {
       toHigh = new Form("ToHigh", 0, 20);
    }
    catch(std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }

    try
    {
       toLow = new Form("ToHigh", 10, 199);
    }
    catch(std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }

    Bureaucrat* bob = new Bureaucrat("Bob", 5);
    
    std::cout << *bob;

    bob->signForm(*constitution);

    std::cout << *constitution;

    bob->signForm(*constitution);

    Form* nop = new Form("Constitution", 1, 1);
    Bureaucrat* nopper = new Bureaucrat("Nopper", 12);

    nopper->signForm(*nop);
    
    delete constitution;
    delete bob;
    delete nop;
    delete nopper;
}