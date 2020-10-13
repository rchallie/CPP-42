/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:33:03 by rchallie          #+#    #+#             */
/*   Updated: 2020/10/12 22:39:45 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

// LIBS ========================================================================
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
// =============================================================================

// PROTOTYPES ==================================================================
class ScavTrap;
// =============================================================================

// CLASSES DEFINITIONS =========================================================
class ScavTrap
{
	private:
		unsigned int	_hit_points;
		unsigned int	_max_hit_points;
		unsigned int	_energy_points;
		unsigned int	_max_energy_points;
		unsigned int	_level;
		std::string		_name;
		unsigned int	_melee_attack_damage;
		unsigned int	_ranged_attack_damage;
		unsigned int	_armor_damage_reduction;

	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap&);
		virtual ~ScavTrap();
		ScavTrap &operator=(const ScavTrap& op);
		void			rangedAttack(std::string const & target);
		void			meleeAttack(std::string const & target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		void			challengeNewcomer(std::string const & target);
};
// =============================================================================

// FUNCTIONS PROTOYPES =========================================================
// =============================================================================

#endif