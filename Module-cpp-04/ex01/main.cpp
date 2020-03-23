/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: excalibur <excalibur@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/23 10:53:55 by excalibur         #+#    #+#             */
/*   Updated: 2020/03/23 13:56:50 by excalibur        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Character.hpp"
# include "Enemy.hpp"
# include "RadScorpion.hpp"
# include "PlasmaRifle.hpp"
# include "SuperMutant.hpp"
# include "PowerFist.hpp"

int main()
{
    Character* moi = new Character("moi");
    
    std::cout << *moi;
    
    Enemy* b = new RadScorpion();
    Enemy* super = new SuperMutant();

    AWeapon* pr = new PlasmaRifle();
    AWeapon* pf = new PowerFist();
    
    moi->equip(pr);
    std::cout << *moi;
    moi->equip(pf);
    
    moi->attack(b);
    std::cout << *moi;
    moi->equip(pr);
    std::cout << *moi;
    moi->attack(b);
    std::cout << *moi;
    moi->attack(b);
    std::cout << *moi;

    moi->equip(pf);
    std::cout << *moi;
    moi->attack(super);
    std::cout << *moi;
    moi->attack(super);
    std::cout << *moi;
    moi->attack(super);
    std::cout << *moi;

    return 0;
}