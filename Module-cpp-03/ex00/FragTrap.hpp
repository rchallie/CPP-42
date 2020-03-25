/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: excalibur <excalibur@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:33:03 by excalibur         #+#    #+#             */
/*   Updated: 2020/03/24 17:55:41 by excalibur        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include <string>
// #include <cstdlib>
#include <time.h>

class FragTrap;

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
		unsigned int	_math_attack_damage;
		unsigned int	_question_attack_damage;
		unsigned int	_danse_attack_damage;
		unsigned int	_lost_attack_damage;
		unsigned int	_monologue_attack_damage;

	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap&);
		~FragTrap();
		FragTrap &operator=(const FragTrap& op);
		void			rangedAttack(std::string const & target);
		void			meleeAttack(std::string const & target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		void			vaulthunter_dot_exe(std::string const & target);
		void			mathAttack(std::string const & target);
		void			questionAttack(std::string const & target);
		void			danseAttack(std::string const & target);
		void			lostAttack(std::string const & target);
		void			monologueAttack(std::string const & target);
};

#endif