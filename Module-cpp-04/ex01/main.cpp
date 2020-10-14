/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/23 10:53:55 by rchallie          #+#    #+#             */
/*   Updated: 2020/10/14 01:07:52 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Character.hpp"
# include "Enemy.hpp"
# include "RadScorpion.hpp"
# include "PlasmaRifle.hpp"
# include "SuperMutant.hpp"
# include "PowerFist.hpp"
# include "LastRanger.hpp"

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
    
    if (b)
        std::cout << b->getType() << " has " << b->getHP() << " HP." << std::endl;
    moi->attack(b);
    if (b)
        std::cout << b->getType() << " has " << b->getHP() << " HP." << std::endl;
    std::cout << *moi;
    moi->equip(pr);
    std::cout << *moi;
    moi->attack(b);
    if (b)
        std::cout << b->getType() << " has " << b->getHP() << " HP." << std::endl;
    std::cout << *moi;
    moi->attack(b);
    std::cout << *moi;

    moi->equip(pf);
    std::cout << *moi;
    std::cout << super->getType() << " has " << super->getHP() << " HP." << std::endl;
    moi->attack(super);
    std::cout << super->getType() << " has " << super->getHP() << " HP." << std::endl;
    std::cout << *moi;
    moi->attack(super);
    std::cout << super->getType() << " has " << super->getHP() << " HP." << std::endl;
    std::cout << *moi;
    moi->attack(super);
    std::cout << super->getType() << " has " << super->getHP() << " HP." << std::endl;
    std::cout << *moi;

    Character *ranger = new LastRanger();

    std::cout << *ranger;
    ranger->equip(pf);
    std::cout << *ranger;
    std::cout << super->getType() << " has " << super->getHP() << " HP." << std::endl;
    ranger->attack(super);
    std::cout << super->getType() << " has " << super->getHP() << " HP." << std::endl;
    std::cout << *ranger;
    ranger->recoverAP();
    std::cout << *ranger;
    ranger->recoverAP();
    std::cout << *ranger;
    ranger->equip(pr);
    std::cout << *ranger;

    delete moi;
    delete super;
    delete pr;
    delete pf;
    delete ranger;
    return 0;
}