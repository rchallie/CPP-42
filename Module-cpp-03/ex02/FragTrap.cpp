/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:31:43 by rchallie          #+#    #+#             */
/*   Updated: 2020/10/12 17:54:16 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/*
** Typedef for array of pointers on functions.
*/
typedef void(FragTrap::* attacks) (std::string const & target);

/*
** @brief Default contructor:
** The "FragTrap".
*/
FragTrap::FragTrap()
:	ClapTrap(0,0,0,0,0,"",0,0,0)
{
	srand(time(NULL));
	_print_suffix(getName(), getHitPoints());
	std::cout << "Prêt pour assassiner des représentants du syndicat des techniciens de surfaces !" << std::endl;
}

/*
** @brief Init contrcutor:
** The "FragTrap".
*/
FragTrap::FragTrap(std::string name)
:	ClapTrap(
	100,
	100,
	100,
	100,
	1,
	name,
	30,
	20,
	5
	)
{
	srand(time(NULL));
	_print_suffix(getName(), getHitPoints());
	std::cout << "Prêt pour assassiner des représentants du syndicat des techniciens de surfaces !" << std::endl;
}

/*
** @brief Copy:
** Copy the "FragTrap".
** 
** @param copy the "FragTrap" to copy.
*/
FragTrap::FragTrap(const FragTrap& op)
:
	ClapTrap(op)
{
	srand(time(NULL));
	_print_suffix(this->_name, this->_hit_points);
	std::cout << "Je vais me cloner en FragTrap : " << op._name << std::endl;
}

/*
** @brief Destructor:
** Called when the object "FragTrap" is delete
*/
FragTrap::~FragTrap()
{
	_print_suffix(getName(), getHitPoints());
	std::cout << "Je suis mort, je suis mort. Oh mon dieu, je suis mort." << std::endl;
}

FragTrap & FragTrap::operator=(const FragTrap& op)
{
	if (this == &op)
		return (*this);
	ClapTrap::operator=(op);
	return (*this);
}

/*
** @brief Select randomly and attack.
** Remove 25 energy points.
*/
void		FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	attacks cmd[] = {
		&FragTrap::mathAttack,
		&FragTrap::questionAttack,
		&FragTrap::danseAttack,
		&FragTrap::lostAttack,
		&FragTrap::monologueAttack
	};
	
	if (getEnergyPoints() < 25)
	{
		_print_suffix(getName(), getHitPoints());
		std::cout << "Oh ! Comment ça j'ai pas énergie illimité ? Je vais te chopper se constructeur moi tu vas voir ! Enfin.. Quand je me serais reposé..." << std::endl;
		return;
	}
	(this->*cmd[rand() % 5])(target);
	setEnergyPoints(getEnergyPoints() - 25);
}

/*
** @brief Math Attack of the FlagTrap for
** vaulthunter_dot_exe.
*/
void		FragTrap::mathAttack(std::string const & target)
{
	_print_suffix(this->_name, this->_hit_points);
	std::cout << "Comment ça marche les maths ? Est-ce que j'ai l'air gros comme ça ? Si un car et une girafe se reproduisaient, ça ferait quoi ? Une carafe ? Ah ! Ca doit encore plus dur pour \033[1;34m" << target;
	std::cout << "\033[0m qui prend \033[1;33m666\033[0m de dégats ! " << std::endl;
}

/*
** @brief Question Attack of the FlagTrap for
** vaulthunter_dot_exe.
*/
void		FragTrap::questionAttack(std::string const & target)
{
	_print_suffix(this->_name, this->_hit_points);
	std::cout << "Dans ces moments là il m'arrive de me poser des questions sur le sens de ma vie et quelque chose me distrait… et et c'est quoi ça… \033[1;34m" << target;
	std::cout << "\033[0m qui prend \033[1;33m999\033[0m dégats... cool !" << std::endl;
}

/*
** @brief Dance Attack of the FlagTrap for
** vaulthunter_dot_exe.
*/
void		FragTrap::danseAttack(std::string const & target)
{
	_print_suffix(this->_name, this->_hit_points);
	std::cout << "Est-ce que ça veut dire que je peux danser ? Steuplaiiiiiit ! Yes, merci ! ... Merde, ma danse été si bonne que ça a brulé les capteurs de \033[1;34m" << target; 
	std::cout << "\033[0m qui prend \033[1;33m12345\033[0m dégats... Déso pas déso !" << std::endl;
}

/*
** @brief Lost Attack of the FlagTrap for
** vaulthunter_dot_exe.
*/
void		FragTrap::lostAttack(std::string const & target)
{
	_print_suffix(this->_name, this->_hit_points);
	std::cout << "Je peux tirer sur quelque chose, monter des escaliers, shooter \033[1;34m" << target << "\033[0m ? Inutile de répondre ... je viens déja de lui mettre \033[1;33m42\033[0m de dégats... Cheh !" << std::endl;
}

/*
** @brief Monologue Attack of the FlagTrap for
** vaulthunter_dot_exe.
*/
void		FragTrap::monologueAttack(std::string const & target)
{
	_print_suffix(this->_name, this->_hit_points);
	std::cout << "Avant j'avais pas le droit de jouer avec des flingues et puis ce bon vieux Jacky est arrivé et il était très en colère, « Il me faut un robot, qu'il a dit, un robot qui fera tout ce que je veux » ";
	std::cout << "et puis il m'a vu dans un coin et ça lui a donné une idée, il m'a bidouillé en peu pour que je puisse utiliser des armes et puis il m'a lâché dans la nature en me disant « Amuse-toi bien »…";
	std::cout << "Et me voilà, mercenaire de la mort et du chaos prêt à répondre aux ordres pour… oh mince comment je vais me dépêtrer de cette phrase, j'aurais jamais du m'embarquer là-dedans.";
	std::cout << "Comment t'a réussi à te prendre \033[1;33m11111111\033[0m dégats juste en m'écoutant ? Dit le si je t'ennuis \033[1;34m" << target << "\033[0m ?!" << std::endl;
}

