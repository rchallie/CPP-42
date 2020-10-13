/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/18 15:38:34 by rchallie          #+#    #+#             */
/*   Updated: 2020/10/12 21:49:25 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

#include <typeinfo>

int main()
{
	std::cout << std::endl;

    FragTrap frag("Frag");
    ScavTrap scav("Scav");
    NinjaTrap ninj("Ninj");
    ClapTrap clap;

    ninj.ninjaShoebox(frag);
    ninj.ninjaShoebox(scav);
    ninj.ninjaShoebox(ninj);
    ninj.ninjaShoebox(clap);
    
    // ScavTrap clap("Clap");
    // ScavTrap trap("Trap");
    // FragTrap frag("Frag");
    // FragTrap prap;

    // prap = frag;
    
	// std::cout << std::endl;
    // clap.rangedAttack("Trap");
    // trap.takeDamage(20);
    // clap.meleeAttack("Trap");
    // trap.takeDamage(30);
    // trap.beRepaired(35);
    // frag.rangedAttack("Clap");
    // trap.beRepaired(80);
    // trap.takeDamage(120);
    // frag.beRepaired(7);
    // trap.beRepaired(33);
    // frag.takeDamage(10);
    
    // frag.vaulthunter_dot_exe("Clap");
    // clap.challengeNewcomer("Trap");
    // clap.challengeNewcomer("Trap");
    // clap.challengeNewcomer("Trap");
    // clap.challengeNewcomer("Trap");

    
	std::cout << std::endl;
    return (0);
}