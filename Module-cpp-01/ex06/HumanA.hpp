/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: excalibur <excalibur@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:33:03 by excalibur         #+#    #+#             */
/*   Updated: 2020/03/15 20:58:32 by excalibur        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

// From developpez : l'usage d'une référence indique alors que le paramètre est modifié par la fonction
// Passer en argument en référence permet de modifier directement la variable d'origine (celle passer en argument)
// et non une "copie" comme classiquement

#include "Weapon.hpp"

class HumanA;

class HumanA
{   
    private:
        std::string name;
        Weapon&     weapon;
    public:
        HumanA(std::string name, Weapon& weapon);
        ~HumanA();
        void        attack();
};

#endif