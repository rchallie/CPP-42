/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: excalibur <excalibur@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:33:03 by excalibur         #+#    #+#             */
/*   Updated: 2020/03/17 16:58:39 by excalibur        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

# include <iostream>

# include "ISpaceMarine.hpp"

class TacticalMarine;

class TacticalMarine : public ISpaceMarine
{
    public:
        TacticalMarine();
        TacticalMarine(const TacticalMarine&);
        ~TacticalMarine();
        TacticalMarine &operator=(const TacticalMarine& op);

        // Additionnal
        ISpaceMarine*   clone() const;
        void            battleCry() const;
        void            rangedAttack() const;
        void            meleeAttack() const;  
};

#endif