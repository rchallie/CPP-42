/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:33:03 by rchallie          #+#    #+#             */
/*   Updated: 2020/10/12 22:38:58 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

// LIBS ========================================================================
# include "ClapTrap.hpp"
// =============================================================================

// PROTOTYPES ==================================================================
class FragTrap;
// =============================================================================

// CLASSES DEFINITIONS =========================================================
class FragTrap : public ClapTrap
{
	private:
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
		void			vaulthunter_dot_exe(std::string const & target);
};
// =============================================================================

// FUNCTIONS PROTOYPES =========================================================
// =============================================================================

#endif