/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: excalibur <excalibur@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:33:03 by excalibur         #+#    #+#             */
/*   Updated: 2020/03/17 16:58:39 by excalibur        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include <iostream>
# include <string>

# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap;

class SuperTrap : public FragTrap, public NinjaTrap
{
    public:
        SuperTrap();
        SuperTrap(std::string name);            
        SuperTrap(const SuperTrap&);             
        ~SuperTrap();                         
        SuperTrap &operator=(SuperTrap& op);
        void rangedAttack(std::string const & target);
        void meleeAttack(std::string const & target);
};

#endif