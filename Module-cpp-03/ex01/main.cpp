/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/18 15:38:34 by rchallie          #+#    #+#             */
/*   Updated: 2020/10/12 17:37:06 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	std::cout << std::endl;
    ScavTrap clap("P'titchou");
    ScavTrap trap("Pavlov");
    FragTrap frag("Michel");
    
	std::cout << std::endl;
    clap.rangedAttack("Pavlov");
    trap.takeDamage(15);
    clap.meleeAttack("Pavlov");
    trap.takeDamage(20);
    trap.beRepaired(35);
    frag.rangedAttack("P'titchou");
    trap.beRepaired(80);
    trap.takeDamage(120);
    frag.beRepaired(7);
    trap.beRepaired(33);
    
    frag.vaulthunter_dot_exe("P'titchou");
    clap.challengeNewcomer("Pavlov");
    clap.challengeNewcomer("Pavlov");
    clap.challengeNewcomer("Pavlov");
    clap.challengeNewcomer("Pavlov");
    clap.challengeNewcomer("Pavlov");
    
	std::cout << std::endl;
    return (0);
}