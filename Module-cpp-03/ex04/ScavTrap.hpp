/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: excalibur <excalibur@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:33:03 by excalibur         #+#    #+#             */
/*   Updated: 2020/03/24 18:28:43 by excalibur        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include <string>
// #include <cstdlib>
#include <time.h>

#include "ClapTrap.hpp"

class ScavTrap;

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap&);
		~ScavTrap();
		ScavTrap &operator=(const ScavTrap& op);
		void			rangedAttack(std::string const & target);
		void			meleeAttack(std::string const & target);
		void			challengeNewcomer(std::string const & target);
};

#endif