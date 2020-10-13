/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:31:43 by rchallie          #+#    #+#             */
/*   Updated: 2020/10/12 22:11:21 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

/*
** @brief Default contructor:
** The "FragTrap".
*/
NinjaTrap::NinjaTrap()
:	ClapTrap(0,0,0,0,0,"",0,0,0)
{
	srand(time(NULL));
	_print_suffix(getName(), getHitPoints());
	std::cout << "Here come the boom ! Enfin pas vraiment ... Voir pas du tout.." << std::endl;
}

/*
** @brief Init contrcutor:
** The "FragTrap".
*/
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

/*
** @brief Copy:
** Copy the "FragTrap".
** 
** @param copy the "FragTrap" to copy.
*/
NinjaTrap::NinjaTrap(const NinjaTrap& op)
:
	ClapTrap(op)
{
	srand(time(NULL));
	_print_suffix(this->_name, this->_hit_points);
	std::cout << "Transformation ninja en : " << op._name << std::endl;
}

/*
** @brief Destructor:
** Called when the object "FragTrap" is delete
*/
NinjaTrap::~NinjaTrap()
{
	_print_suffix(getName(), getHitPoints());
	std::cout << "Je suis mort? Puis-je fermer les yeux maintenant?" << std::endl;	
}

NinjaTrap & NinjaTrap::operator=(const NinjaTrap& op)
{
	if (this == &op)
		return (*this);
	ClapTrap::operator=(op);
	return (*this);
}

/*
** @brief Shoebox attack for ClapTrap !
*/
void		NinjaTrap::ninjaShoebox(ClapTrap & claptrap)
{
	_print_suffix(getName(), getHitPoints());
	std::cout << "Je lis dessus \"" << claptrap.getName() <<"\". Humm... On dirais moi version sorti d'usine." << std::endl;
}

/*
** @brief Shoebox attack for NinjaTrap !
*/
void		NinjaTrap::ninjaShoebox(NinjaTrap & ninjatrap)
{
	_print_suffix(getName(), getHitPoints());
	std::cout << "Psssst, " << ninjatrap.getName() << " , Seka..Seko..Sekiquelquechose c'est un genre de cousin éloigner ?" << std::endl;
}

/*
** @brief Shoebox attack for FragTrap !
*/
void		NinjaTrap::ninjaShoebox(FragTrap & fragtrap)
{
	_print_suffix(getName(), getHitPoints());
	std::cout << "Oh ... " << fragtrap.getName() << " ... tu a un Nukem dans ta poche ou t'es juste content de me voir?" << std::endl;
}

/*
** @brief Shoebox attack for ScavTrap !
*/
void		NinjaTrap::ninjaShoebox(ScavTrap & scavtrap)
{
	_print_suffix(getName(), getHitPoints());
	std::cout << "Tu sais, " << scavtrap.getName() << ", tout ce que tu fabrique n'est que de la poudre de perlimpinpin.. pin pin PIN !" << std::endl;
}