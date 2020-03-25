/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: excalibur <excalibur@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:33:03 by excalibur         #+#    #+#             */
/*   Updated: 2020/03/17 16:58:39 by excalibur        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

# include <iostream>

# include "ISpaceMarine.hpp"

class AssaultTerminator;

class AssaultTerminator : public ISpaceMarine
{
    public:
        AssaultTerminator();
        AssaultTerminator(const AssaultTerminator&);
        ~AssaultTerminator();
        AssaultTerminator &operator=(const AssaultTerminator& op);

        // Additionnal
        ISpaceMarine*   clone() const;
        void            battleCry() const;
        void            rangedAttack() const;
        void            meleeAttack() const;  
};

#endif