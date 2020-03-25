/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: excalibur <excalibur@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:31:43 by excalibur         #+#    #+#             */
/*   Updated: 2020/03/24 18:14:44 by excalibur        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

typedef void(ScavTrap::* attacks) (std::string const & target);

ScavTrap::ScavTrap()
:	ClapTrap(0,0,0,0,0,"",0,0,0)
{ srand(time(NULL)); }

ScavTrap::ScavTrap(std::string name)
:	ClapTrap(
	100,
	100,
	50,
	50,
	1,
	name,
	20,
	15,
	3
	)
{
	srand(time(NULL));
	_print_suffix(getName(), getHitPoints());
	std::cout << "Le champion fait son apparition." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap&)
{
	srand(time(NULL));
	*this = op;
}

ScavTrap::~ScavTrap()
{
	_print_suffix(getName(), getHitPoints());
	std::cout << "Je suis mort? Puis-je fermer les yeux maintenant?" << std::endl;	
}

ScavTrap & ScavTrap::operator=(const ScavTrap& op)
{
	if (this == &op)
		return (*this);
	ClapTrap::operator=(op);
	return (*this);
}

void		ScavTrap::rangedAttack(std::string const & target)
{
	_print_suffix(getName(), getHitPoints());
	std::cout << "Ratattattattatta! Powpowpowpow! Powpowpowpow! Pew-pew, pew-pew-pewpew! \033[1;34m" << target << "\033[0m, \033[1;33m" << getRangedAttackDamage() << "\033[0m de dégats dans tes dents !" << std::endl;
}

void		ScavTrap::meleeAttack(std::string const & target)
{
	_print_suffix(getName(), getHitPoints());
	std::cout << "Oh sacrément, oh garçon, oh merde, oh \033[1;34m" << target <<"\033[0m , oh sacrément désolé pour les \033[1;33m" << getMeleeAttackDamage() << "\033[0m dégats de mon livre sacré dans ta gueule!" << std::endl;
}

void		ScavTrap::challengeNewcomer(std::string const & target)
{
	std::string challenges_list[] = {
		" je te défi de sauter contre cette vitre pas très solide !",
		" je te défi de prendre se baton de dynamite, de rentrer dans cette voiture, de l'allumer et d'essayer de le jetter par cette vitre bloqué pour ne pas pouvoir l'ouvrir !",
		" je te défi de regarder dans cette bouche d'égout un peu trop petite pour ta tête, histoire de retrouver tes clés de voiture qui ont accidentelement glisser de ma poche ...",
		" je te défi de prendre se bandeau, de le mettre sur tes yeux et de courir tout droit. Juste pour voir.",
		" je te défi de prendre se filet éléctrique, d'aller au milieu de se lac en nageant et d'aller nous chopper le diner !",
		" on vas t'attacher à 1000 ballons et tu essaie de battre le record de vol accroché à eux. Ca te vas?",
		" , tiens, prend cette torche et vas bruler les toiles d'arraigné dans cette petite pièce sans vitre. T'es chaud?",
		" , prend cette coque en kevlar et on vas voir si elle arrête les coups de couteau. Okay?",
		" , cap, tu construit un parachute avec tes boulons et tu saute du prochaine avion ?"
	};
	_print_suffix(getName(), getHitPoints());
	std::cout << "\033[1;34m" << target << "\033[0m" << challenges_list[rand() % 9] << std::endl;
}