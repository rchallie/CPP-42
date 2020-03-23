/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Minion.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: excalibur <excalibur@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:33:03 by excalibur         #+#    #+#             */
/*   Updated: 2020/03/17 16:58:39 by excalibur        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Minion_HPP
# define Minion_HPP

# include "Victim.hpp"

class Minion;

class Minion : public Victim
{
    public:
        Minion(const std::string & name);
        Minion(const Minion & copy);
        ~Minion();
        Minion &operator=(Minion& op);

        // Additionnal
        void    getPolymorphed(void) const;
};

#endif