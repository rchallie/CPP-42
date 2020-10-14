/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:33:03 by rchallie          #+#    #+#             */
/*   Updated: 2020/10/13 22:18:32 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIP_HPP
# define VICTIP_HPP

// LIBS ========================================================================
# include <iostream>
# include <string>
// =============================================================================

// PROTOTYPES ==================================================================
class Victim;
// =============================================================================

// CLASSES DEFINITIONS =========================================================
class Victim
{
    private:
        std::string _name;

    public:
        Victim();
        Victim(const std::string & name);
        Victim(const Victim&);
        virtual ~Victim();
        Victim &operator=(const Victim& op);

        // Getter / Setter
        std::string getName(void) const;

        // Additionnal
        void getPolymorphed(void) const;
};
// =============================================================================

// FUNCTIONS PROTOYPES =========================================================
std::ostream    &operator<<(std::ostream & out, Victim & Victim);
// =============================================================================

#endif