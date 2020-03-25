/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: excalibur <excalibur@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/23 14:02:10 by excalibur         #+#    #+#             */
/*   Updated: 2020/03/23 16:22:04 by excalibur        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ISQUAD_HPP
# define ISQUAD_HPP

class ISquad;

class ISquad
{
    public:
            virtual ~ISquad() {}
            virtual int getCount() const = 0;
            virtual ISpaceMarine* getUnit(int) const = 0;
            virtual int push(ISpaceMarine*) = 0;
};

# endif