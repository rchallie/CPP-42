/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:33:03 by rchallie          #+#    #+#             */
/*   Updated: 2020/10/12 17:37:09 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

// LIBS ========================================================================
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
// =============================================================================

// PROTOTYPES ==================================================================
class FragTrap;
// =============================================================================

// CLASSES DEFINITIONS =========================================================
class FragTrap
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
		void			mathAttack(std::string const & target);
		void			questionAttack(std::string const & target);
		void			danseAttack(std::string const & target);
		void			lostAttack(std::string const & target);
		void			monologueAttack(std::string const & target);

	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap&);
		virtual ~FragTrap();
		FragTrap &operator=(const FragTrap& op);
		void			rangedAttack(std::string const & target);
		void			meleeAttack(std::string const & target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		void			vaulthunter_dot_exe(std::string const & target);
};
// =============================================================================

// FUNCTIONS PROTOYPES =========================================================
// =============================================================================

#endif