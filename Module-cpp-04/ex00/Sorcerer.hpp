/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: excalibur <excalibur@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:33:03 by excalibur         #+#    #+#             */
/*   Updated: 2020/03/26 16:58:18 by excalibur        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include <string>

# include "Victim.hpp"

class Sorcerer;

class Sorcerer
{
    private:
        std::string _name;
        std::string _title;
    public:
        Sorcerer(const std::string & name, const std::string & title);
        Sorcerer(const Sorcerer& copy);
        ~Sorcerer();
        Sorcerer &operator=(const Sorcerer& op);

        // Getter / Setter
        std::string getName(void) const;
        std::string getTitle(void) const;

        // Additionnal
        void    polymorph(Victim const & victim);
};

// FUNCTIONS SUP PROTOYPES =====================================================

std::ostream    &operator<<(std::ostream & out, const Sorcerer & sorcerer);

// =============================================================================

#endif