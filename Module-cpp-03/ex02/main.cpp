/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/18 15:38:34 by rchallie          #+#    #+#             */
/*   Updated: 2020/10/12 21:20:47 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	std::cout << std::endl;
    ScavTrap clap("Michel");
    ScavTrap trap("Pavlov");
    FragTrap frag("Erneste");
    
	std::cout << std::endl;
    clap.rangedAttack("Pavlov");
    trap.takeDamage(20);
    clap.meleeAttack("Pavlov");
    trap.takeDamage(30);
    trap.beRepaired(35);
    frag.rangedAttack("Michel");
    trap.beRepaired(80);
    trap.takeDamage(120);
    frag.beRepaired(7);
    trap.beRepaired(33);
    frag.takeDamage(10);
    
    frag.vaulthunter_dot_exe("Michel");
    clap.challengeNewcomer("Pavlov");
    clap.challengeNewcomer("Pavlov");
    clap.challengeNewcomer("Pavlov");
    
	std::cout << std::endl;
    return (0);
}