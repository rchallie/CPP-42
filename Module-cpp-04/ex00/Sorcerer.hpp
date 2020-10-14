/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:33:03 by rchallie          #+#    #+#             */
/*   Updated: 2020/10/13 21:38:26 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

// LIBS ========================================================================
# include <iostream>
# include <string>
# include "Victim.hpp"
// =============================================================================

// PROTOTYPES ==================================================================
class Sorcerer;
// =============================================================================

// CLASSES DEFINITIONS =========================================================
class Sorcerer
{
    private:
        std::string _name;
        std::string _title;

    public:
        Sorcerer();
        Sorcerer(const std::string & name, const std::string & title);
        Sorcerer(const Sorcerer& copy);
        virtual ~Sorcerer();
        Sorcerer &operator=(const Sorcerer& op);

        // Getter / Setter
        std::string getName(void) const;
        std::string getTitle(void) const;

        // Additionnal
        void    polymorph(Victim const & victim);
};
// =============================================================================

// FUNCTIONS PROTOYPES =========================================================
std::ostream    &operator<<(std::ostream & out, const Sorcerer & sorcerer);
// =============================================================================

#endif