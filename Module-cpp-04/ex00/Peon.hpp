/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: excalibur <excalibur@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:33:03 by excalibur         #+#    #+#             */
/*   Updated: 2020/03/17 16:58:39 by excalibur        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include "Victim.hpp"

class Peon;

class Peon : public Victim
{
    public:
        Peon(const std::string & name);
        Peon(const Peon & copy);
        ~Peon();
        Peon &operator=(const Peon& op);

        // Additionnal
        void    getPolymorphed(void) const;
};

#endif