/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: excalibur <excalibur@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:31:43 by excalibur         #+#    #+#             */
/*   Updated: 2020/03/19 21:49:30 by excalibur        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

typedef void(NinjaTrap::* attacks) (std::string const & target);

NinjaTrap::NinjaTrap()
:	ClapTrap(0,0,0,0,0,"",0,0,0)
{ srand(time(NULL)); }

NinjaTrap::NinjaTrap(std::string name)
:	ClapTrap(
	60,
	60,
	120,
	120,
	1,
	name,
	60,
	5,
	0
	)
{
	srand(time(NULL));
	_print_suffix(getName(), getHitPoints());
	std::cout << "Here come the boom ! Enfin pas vraiment ... Voir pas du tout.." << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap&) {}

NinjaTrap::~NinjaTrap()
{
	_print_suffix(getName(), getHitPoints());
	std::cout << "Je suis mort? Puis-je fermer les yeux maintenant?" << std::endl;	
}

NinjaTrap & NinjaTrap::operator=(NinjaTrap& op)
{
	if (this == &op)
		return (*this);
	ClapTrap::operator=(op);
	return (*this);
}

void		NinjaTrap::rangedAttack(std::string const & target)
{
	_print_suffix(getName(), getHitPoints());
	std::cout << "Attaque bulle d'eau sur \033[1;34m" << target << "\033[0m, ça lui inflige \033[1;33m" << getRangedAttackDamage() << "\033[0m de dégats ! Pas ouf ouf..." << std::endl;
}

void		NinjaTrap::meleeAttack(std::string const & target)
{
	_print_suffix(getName(), getHitPoints());
	std::cout << "Ninja ! Ninja ! NIIIIIIINJA, coup direct sur \033[1;34m" << target <<"\033[0m. Direct in the carotine pour un total de \033[1;33m" << getMeleeAttackDamage() << "\033[0m dégats ! " << std::endl;
}

void		NinjaTrap::ninjaShoebox(ClapTrap & claptrap)
{
	_print_suffix(getName(), getHitPoints());
	std::cout << "Je lis dessus \"" << claptrap.getName() <<"\". Humm... On dirais moi version sorti d'usine." << std::endl;
}

void		NinjaTrap::ninjaShoebox(NinjaTrap & ninjatrap)
{
	_print_suffix(getName(), getHitPoints());
	std::cout << "Psssst, " << ninjatrap.getName() << " , Seka..Seko..Sekiquelquechose c'est un genre de cousin éloigner qu'on a?" << std::endl;
}

void		NinjaTrap::ninjaShoebox(FragTrap & fragtrap)
{
	_print_suffix(getName(), getHitPoints());
	std::cout << "Oh ... " << fragtrap.getName() << " ... tu a un Nukem dans ta poche ou t'es juste content de me voir?" << std::endl;
}

void		NinjaTrap::ninjaShoebox(ScavTrap & scavtrap)
{
	_print_suffix(getName(), getHitPoints());
	std::cout << "Tu sais, " << scavtrap.getName() << ", tout ce que tu fabrique n'est que de la poudre de perlimpinpin.. pin pin PIN !" << std::endl;
}