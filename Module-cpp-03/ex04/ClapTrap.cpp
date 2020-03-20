/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: excalibur <excalibur@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:31:43 by excalibur         #+#    #+#             */
/*   Updated: 2020/03/19 22:55:47 by excalibur        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() { srand(time(NULL)); }

ClapTrap::ClapTrap(
        unsigned int	hit_points,
        unsigned int	max_hit_points,
        unsigned int	energy_points,
        unsigned int	max_energy_points,
        unsigned int	level,
        std::string		name,
        unsigned int	melee_attack_damage,
        unsigned int	ranged_attack_damage,
        unsigned int	armor_damage_reduction
    ) :
        _hit_points(hit_points),
        _max_hit_points(max_hit_points),
        _energy_points(energy_points),
        _max_energy_points(max_energy_points),
        _level(level),
        _name(name),
        _melee_attack_damage(melee_attack_damage),
        _ranged_attack_damage(ranged_attack_damage),
        _armor_damage_reduction(armor_damage_reduction)
{
    srand(time(NULL));
    std::cout << "Un nouveau ClapTrap est né !" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap&) {}

ClapTrap::~ClapTrap()
{
    std::cout << "Un ClapTrap est mort !" << std::endl;
}

ClapTrap & ClapTrap::operator=(ClapTrap& op)
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

void		ClapTrap::takeDamage(unsigned int amount)
{
	amount -= this->_armor_damage_reduction;
	_print_suffix(this->_name, ((int)this->_hit_points - (int)amount >= 0) ? this->_hit_points - amount : 0);
	std::cout << "Ah sa maman l'.. Hyménoptère ! J'ai pris \033[1;33m" << amount + this->_armor_damage_reduction << "\033[0m dans les roulantes ! Non ... \033[1;33m" << amount << "\033[0m j'avais oublié ma coque ... héhé." << std::endl;
	if (amount > this->_hit_points)
		amount = this->_hit_points;
	this->_hit_points -= amount;
}

void		ClapTrap::beRepaired(unsigned int amount)
{
	if (amount + this->_hit_points > this->_max_hit_points)
		amount = this->_max_hit_points - this->_hit_points;
	_print_suffix(this->_name, this->_hit_points + amount);
	std::cout << "HUUUUUUMMM ! \033[1;33m" << amount << "\033[0m de santé ... Attend, le rouge c'est quel goût déja?" << std::endl;
	this->_hit_points += amount;
}

unsigned int	    ClapTrap::getHitPoints(void)                { return (this->_hit_points); }
unsigned int        ClapTrap::getMaxHitPoints(void)             { return (this->_max_hit_points); }
unsigned int        ClapTrap::getEnergyPoints(void)             { return (this->_energy_points); }
unsigned int        ClapTrap::getMaxEnergyPoints(void)          { return (this->_max_energy_points); }
unsigned int        ClapTrap::getLevel(void)                    { return (this->_level); }
std::string	        ClapTrap::getName(void)                     { return (this->_name); }
unsigned int	    ClapTrap::getMeleeAttackDamage(void)        { return (this->_melee_attack_damage); }
unsigned int	    ClapTrap::getRangedAttackDamage(void)       { return (this->_ranged_attack_damage); }
unsigned int	    ClapTrap::getArmorDamageReduction(void)     { return (this->_armor_damage_reduction); }

void		    	ClapTrap::setHitPoints(unsigned int hit_points)                         { this->_hit_points = hit_points; }
void			    ClapTrap::setMaxHitPoints(unsigned int max_hit_points)                  { this->_max_hit_points = max_hit_points; }
void			    ClapTrap::setEnergyPoints(unsigned int energy_points)                   { this->_energy_points = energy_points; }
void			    ClapTrap::setMaxEnergyPoints(unsigned int max_energy_points)            { this->_max_energy_points = max_energy_points; }
void		        ClapTrap::setLevel(unsigned int level)                                  { this->_level = level; }
void                ClapTrap::setName(std::string name)                                     { this->_name = name; }
void			    ClapTrap::setMeleeAttackDamage(unsigned int melee_attack_damage)        { this->_melee_attack_damage = melee_attack_damage; }
void		 	    ClapTrap::setRangedAttackDamage(unsigned int ranged_attack_damage)      { this->_ranged_attack_damage = ranged_attack_damage; }
void			    ClapTrap::setArmorDamageReduction(unsigned int armor_damage_reduction)  { this->_armor_damage_reduction = armor_damage_reduction; }

void _print_suffix(const std::string& name, unsigned int hp)
{
	std::cout << "XXXX-TP" <<" \033[1;31m" << name << "\033[0m(\033[1;32m" << hp << "\033[0m) : ";
}