/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:31:43 by rchallie          #+#    #+#             */
/*   Updated: 2020/10/12 21:20:34 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/*
** Typedef for array of pointers on functions.
*/
typedef void(ScavTrap::* attacks) (std::string const & target);

/*
** @brief Default contructor:
** The "ScavTrap".
*/
ScavTrap::ScavTrap()
:	ClapTrap(0,0,0,0,0,"",0,0,0)
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

/*
** @brief Copy:
** Copy the "ScavTrap".
** 
** @param copy the "ScavTrap" to copy.
*/
ScavTrap::ScavTrap(const ScavTrap& op)
:
	ClapTrap(op)
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

	if (getEnergyPoints() < 25)
	{
		_print_suffix(getName(), getHitPoints());
		std::cout << "Oh je me sent faible... je vais peut-être faire une petite sieste nan ?" << std::endl;
		return;
	}
	_print_suffix(getName(), getHitPoints());
	std::cout << "\033[1;34m" << target << "\033[0m" << challenges_list[rand() % 9] << std::endl;
	this->_energy_points -= 25;
}