/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: excalibur <excalibur@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/18 15:38:34 by excalibur         #+#    #+#             */
/*   Updated: 2020/03/18 21:31:07 by excalibur        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	std::cout << std::endl;
    FragTrap clap("Clap");
    FragTrap trap("Trap");
    
	std::cout << std::endl;
    clap.rangedAttack("Trap");
    trap.takeDamage(20);
    clap.meleeAttack("Trap");
    trap.takeDamage(30);
    trap.beRepaired(35);
    trap.beRepaired(80);
    trap.takeDamage(120);
    trap.beRepaired(33);
    
    clap.vaulthunter_dot_exe("Trap");
    clap.vaulthunter_dot_exe("Trap");
    clap.vaulthunter_dot_exe("Trap");
    clap.vaulthunter_dot_exe("Trap");
    clap.vaulthunter_dot_exe("Trap");
    
	std::cout << std::endl;
    return (0);
}