/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/25 17:19:26 by rchallie          #+#    #+#             */
/*   Updated: 2020/10/14 21:30:27 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    
    ICharacter* moi = new Character("moi");
    
    AMateria* tmp = NULL;
    AMateria* tmp2 = NULL;
    tmp = src->createMateria("ice");
    moi->equip(tmp);
    std::cout << "[+] ICE = " << tmp->getType() << std::endl;
    
    tmp2 = src->createMateria("cure");
    moi->equip(tmp2);
    std::cout << "[+] CURE = " << tmp2->getType() << std::endl;
    
    ICharacter* bob = new Character("bob");
    
    moi->use(0, *bob);
    moi->use(1, *bob);
    std::cout << "[+] " << tmp->getType() << " xp = " << tmp->getXP() << std::endl;
    std::cout << "[+] " << tmp2->getType() << " xp = " << tmp2->getXP() << std::endl;

    
    moi->use(0, *bob);
    std::cout << "[+] " << tmp->getType() << " xp = " << tmp->getXP() << std::endl;
    std::cout << "[+] " << tmp2->getType() << " xp = " << tmp2->getXP() << std::endl;

    delete bob;
    delete moi;
    delete src;
    
    return 0;
}