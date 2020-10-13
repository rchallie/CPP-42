/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/18 15:38:34 by rchallie          #+#    #+#             */
/*   Updated: 2020/10/10 22:52:17 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	std::cout << std::endl;
    FragTrap clap("Pierrot");
    FragTrap trap("Michel");
    
	std::cout << std::endl;
    clap.rangedAttack("Michel");
    trap.takeDamage(20);
    clap.meleeAttack("Michel");
    trap.takeDamage(30);
    trap.beRepaired(35);
    trap.beRepaired(80);
    trap.takeDamage(120);
    trap.beRepaired(33);
    
    clap.vaulthunter_dot_exe("Michel");
    clap.vaulthunter_dot_exe("Michel");
    clap.vaulthunter_dot_exe("Michel");
    clap.vaulthunter_dot_exe("Michel");
    clap.vaulthunter_dot_exe("Michel");
    
	std::cout << std::endl;
    return (0);
}