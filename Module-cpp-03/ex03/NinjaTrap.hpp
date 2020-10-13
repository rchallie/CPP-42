/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:33:03 by rchallie          #+#    #+#             */
/*   Updated: 2020/10/12 22:38:21 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

// LIBS ========================================================================
# include <iostream>
# include <string>
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"
// =============================================================================

// PROTOTYPES ==================================================================
class NinjaTrap;
// =============================================================================

// CLASSES DEFINITIONS =========================================================
class NinjaTrap : public ClapTrap
{
	public:
		NinjaTrap();
		NinjaTrap(std::string name);
		NinjaTrap(const NinjaTrap&);
		virtual ~NinjaTrap();
		NinjaTrap &operator=(const NinjaTrap& op);
		void			rangedAttack(std::string const & target);
		void			meleeAttack(std::string const & target);
		void			ninjaShoebox(ClapTrap & claptrap);
		void			ninjaShoebox(NinjaTrap & claptrap);
		void			ninjaShoebox(ScavTrap & claptrap);
		void			ninjaShoebox(FragTrap & claptrap);
};

// =============================================================================

// FUNCTIONS PROTOYPES =========================================================
// =============================================================================

#endif