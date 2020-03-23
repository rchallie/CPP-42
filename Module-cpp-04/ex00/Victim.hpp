/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: excalibur <excalibur@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:33:03 by excalibur         #+#    #+#             */
/*   Updated: 2020/03/21 11:30:14 by excalibur        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIP_HPP
# define VICTIP_HPP

# include <iostream>
# include <string>

class Victim;

class Victim
{
    private:
        std::string _name;
    public:
        Victim(const std::string & name);
        Victim(const Victim&);
        ~Victim();
        Victim &operator=(Victim& op);

        // Getter / Setter
        std::string getName(void) const;

        // Additionnal
        virtual void getPolymorphed(void) const;
};

std::ostream    &operator<<(std::ostream & out, Victim & Victim);

#endif