/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: excalibur <excalibur@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:33:03 by excalibur         #+#    #+#             */
/*   Updated: 2020/03/20 21:19:29 by excalibur        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <time.h>

# include "ClapTrap.hpp"

class FragTrap;

class FragTrap : virtual public ClapTrap
{
	private:
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
		FragTrap &operator=(FragTrap& op);
		void			rangedAttack(std::string const & target);
		void			meleeAttack(std::string const & target);
		void			vaulthunter_dot_exe(std::string const & target);
		void			mathAttack(std::string const & target);
		void			questionAttack(std::string const & target);
		void			danseAttack(std::string const & target);
		void			lostAttack(std::string const & target);
		void			monologueAttack(std::string const & target);
};

#endif