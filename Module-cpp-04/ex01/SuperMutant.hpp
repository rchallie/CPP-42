/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: excalibur <excalibur@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:33:03 by excalibur         #+#    #+#             */
/*   Updated: 2020/03/17 16:58:39 by excalibur        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include "Enemy.hpp"

class SuperMutant;

class SuperMutant : public Enemy
{
    public:
        SuperMutant();
        SuperMutant(const SuperMutant&);
        ~SuperMutant();
        SuperMutant &operator=(const SuperMutant& op);
        
        // Additionnal
        void        takeDamage(int amount);
};

#endif