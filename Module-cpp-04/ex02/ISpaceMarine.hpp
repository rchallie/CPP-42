/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISpaceMarine.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: excalibur <excalibur@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/23 15:44:58 by excalibur         #+#    #+#             */
/*   Updated: 2020/03/24 10:01:38 by excalibur        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISPACEMARINE_HPP
# define ISPACEMARINE_HPP

class ISpaceMarine;

class ISpaceMarine
{
    public:
            virtual ~ISpaceMarine() {};
            virtual ISpaceMarine* clone() const = 0;
            virtual void battleCry() const = 0;
            virtual void rangedAttack() const = 0;
            virtual void meleeAttack() const = 0;
};

# endif