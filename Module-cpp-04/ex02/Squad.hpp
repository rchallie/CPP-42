/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:33:03 by rchallie          #+#    #+#             */
/*   Updated: 2020/10/14 20:34:35 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

// LIBS ========================================================================
# include <iostream>
# include "ISpaceMarine.hpp"
# include "ISquad.hpp"
// =============================================================================

// PROTOTYPES ==================================================================
class Squad;
// =============================================================================

// CLASSES DEFINITIONS =========================================================
class Squad: public ISquad
{
    private:
        typedef struct  s_units
        {
            ISpaceMarine    *_unit;
            struct s_units  *_next;
        }               t_units;
        
        int         _units_count;
        t_units     *_units_list;

    public:
        Squad();
        Squad(const Squad&);
        virtual ~Squad();
        Squad &operator=(const Squad& op);

        // Getter / Setter
        int                     getCount() const;
        ISpaceMarine*           getUnit(int) const;

        int                     push(ISpaceMarine*);

};
// =============================================================================

// FUNCTIONS PROTOYPES =========================================================
// =============================================================================

#endif