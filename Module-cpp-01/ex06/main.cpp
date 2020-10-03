/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 22:31:51 by rchallie          #+#    #+#             */
/*   Updated: 2020/10/03 11:16:33 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanA.hpp"
# include "HumanB.hpp"

int main()
{
    {
        //Ici on nous demande d'utiliser l'objet weapon et pas un nouveau
        //Donc on vas avoir besoin de modifier le type de (THE !) objet Weapon club et pas celui d'un weapon
        //Quand on file club a bob, club vas avoir "crude spiked club" en type, si plus loin on
        //modifier club sans avoir passer une ref sur Weapon alors la weapon de bob n'aura pas la modif
        Weapon      club = Weapon("crude spiked club");
        
        HumanA  bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }
    {
        // Ici plot twist HumanB ne prend pas en argument de constructor "weapon"
        // Donc si on définit que HumanB a besoin d'une reférence sur weapon
        // Ca vas pas être content. Du coup HumanB stock un pointer sur un objet Weapon;
        // Et set Weapon prend, lui, prend en argument une référence sur Weapon parce-que
        // l'on veux tout de même que les modification apporter a club soit tout de même
        // faites sur la variable pointer (Weapon) dans HumanB
        // (setWeapon donne un pointeur sur la référence passer en argument à la variable *Weapon
        // stocker dans HumanB)
        Weapon      club = Weapon("crude spiked club");

        HumanB  jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }
}