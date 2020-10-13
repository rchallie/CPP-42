/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/18 15:38:34 by rchallie          #+#    #+#             */
/*   Updated: 2020/10/12 22:47:42 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

#include <typeinfo>
int main()
{
	std::cout << std::endl;

    SuperTrap super("Super");
    ScavTrap scav("Scav");
    NinjaTrap ninj("Ninja");

    super.ninjaShoebox(scav);
    super.ninjaShoebox(ninj);
    super.vaulthunter_dot_exe(ninj.getName());

	std::cout << std::endl;
    return (0);
}