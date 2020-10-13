/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:31:43 by rchallie          #+#    #+#             */
/*   Updated: 2020/10/12 21:20:18 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/*
** Typedef for array of pointers on functions.
*/
typedef void(ScavTrap::* attacks) (std::string const & target);

/*
** @brief Print the name and the hit point of the
** Sc4V-TP.
*/
static void _print_suffix(std::string& name, unsigned int hp)
{
	std::cout << "SC4V-TP \033[1;31m" << name << "\033[0m(\033[1;32m" << hp << "\033[0m) : ";
}

/*
** @brief Default contructor:
** The "ScavTrap".
*/
ScavTrap::ScavTrap()
{
	srand(time(NULL));
	_print_suffix(this->_name, this->_hit_points);
	std::cout << "Le champion fait son apparition." << std::endl;
}

/*
** @brief Init contrcutor:
** The "ScavTrap".
*/
ScavTrap::ScavTrap(std::string name)
:
	_hit_points(100),
	_max_hit_points(100),
	_energy_points(50),
	_max_energy_points(50),
	_level(1),
	_name(name),
	_melee_attack_damage(20),
	_ranged_attack_damage(15),
	_armor_damage_reduction(3)
{
	srand(time(NULL));
	_print_suffix(this->_name, this->_hit_points);
	std::cout << "Le champion fait son apparition." << std::endl;
}

/*
** @brief Copy:
** Copy the "ScavTrap".
** 
** @param copy the "ScavTrap" to copy.
*/
ScavTrap::ScavTrap(const ScavTrap& op)
:
	_hit_points(op._hit_points),
	_max_hit_points(op._max_hit_points),
	_energy_points(op._energy_points),
	_max_energy_points(op._max_energy_points),
	_level(op._level),
	_name(op._name),
	_melee_attack_damage(op._melee_attack_damage),
	_ranged_attack_damage(op._ranged_attack_damage),
	_armor_damage_reduction(op._armor_damage_reduction)
{
	srand(time(NULL));
	_print_suffix(this->_name, this->_hit_points);
	std::cout << "Copie de ScavTrap : " << op._name << " , faite!" << std::endl;
}

/*
** @brief Destructor:
** Called when the object "ScavTrap" is delete
*/
ScavTrap::~ScavTrap()
{
	_print_suffix(this->_name, this->_hit_points);
	std::cout << "Je suis mort? Puis-je fermer les yeux maintenant?" << std::endl;
}

ScavTrap & ScavTrap::operator=(const ScavTrap& op)
{
	if (this == &op)
		return (*this);
	this->_hit_points = op._hit_points;
	this->_max_hit_points = op._max_hit_points;
	this->_energy_points = op._energy_points;
	this->_max_energy_points = op._max_energy_points;
	this->_level = op._level;
	this->_name = op._name;
	this->_melee_attack_damage = op._melee_attack_damage;
	this->_ranged_attack_damage = op._ranged_attack_damage;
	this->_armor_damage_reduction = op._armor_damage_reduction;
	return (*this);
}

/*
** @brief Ranged attack of the ScavTrap.
*/
void		ScavTrap::rangedAttack(std::string const & target)
{
	_print_suffix(this->_name, this->_hit_points);
	std::cout << "Ratattattattatta! Powpowpowpow! Powpowpowpow! Pew-pew, pew-pew-pewpew! \033[1;34m" << target << "\033[0m, \033[1;33m" << this->_ranged_attack_damage << "\033[0m de dégats dans tes dents !" << std::endl;
}

/*
** @brief Melee attack of the ScavTrap.
*/
void		ScavTrap::meleeAttack(std::string const & target)
{
	_print_suffix(this->_name, this->_hit_points);
	std::cout << "Oh sacrément, oh garçon, oh merde, oh \033[1;34m" << target <<"\033[0m , oh sacrément désolé pour les \033[1;33m" << this->_melee_attack_damage << "\033[0m dégats de mon livre sacré dans ta gueule!" << std::endl;
}

/*
** @brief Used to remove hit points to the ScavTrap
*/
void		ScavTrap::takeDamage(unsigned int amount)
{
	amount -= this->_armor_damage_reduction;
	_print_suffix(this->_name, ((int)this->_hit_points - (int)amount >= 0) ? this->_hit_points - amount : 0);
	std::cout << "Oh bordel, ça fait un mal de truc à quattre pattes ! Ca fait \033[1;33m" << amount + this->_armor_damage_reduction << "\033[0m dans ma boite à bonbon ! Enfaite \033[1;33m" << amount << "\033[0m avec mon shield !" << std::endl;
	if (amount > this->_hit_points)
		amount = this->_hit_points;
	this->_hit_points -= amount;
}

/*
** @brief Used to repare the ScavTrap
*/
void		ScavTrap::beRepaired(unsigned int amount)
{
	if (amount + this->_hit_points > this->_max_hit_points)
		amount = this->_max_hit_points - this->_hit_points;
	_print_suffix(this->_name, this->_hit_points + amount);
	std::cout << "OH OUIIIIII, ça fait du bien! \033[1;33m" << amount << "\033[0m de vie supplémentaire pour la bg à roulettes !" << std::endl;
	this->_hit_points += amount;
}

/*
** @brief Challenge target randomly ! 
*/
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

	if (this->_energy_points < 25)
	{
		_print_suffix(this->_name, this->_hit_points);
		std::cout << "Oh je me sent faible... je vais peut-être faire une petite sieste nan ?" << std::endl;
		return;
	}
	
	_print_suffix(this->_name, this->_hit_points);
	std::cout << "\033[1;34m" << target << "\033[0m" << challenges_list[rand() % 9] << std::endl;
	this->_energy_points -= 25;
}