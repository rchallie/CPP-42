/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: excalibur <excalibur@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/25 17:19:26 by excalibur         #+#    #+#             */
/*   Updated: 2020/03/26 13:22:59 by excalibur        ###   ########.fr       */
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
    
    AMateria* tmp;
    AMateria* tmp2;
    tmp = src->createMateria("ice");
    moi->equip(tmp);
    tmp2 = src->createMateria("cure");
    moi->equip(tmp2);
    tmp2 = src->createMateria("plop");
    std::cout << "[+] TMP2 = " << tmp2 << std::endl;
    
    ICharacter* bob = new Character("bob");
    
    moi->use(0, *bob);
    moi->use(1, *bob);

    std::cout << "[+] " << tmp->getType() << " xp = " << tmp->getXP() << std::endl;
    
    moi->use(0, *bob);
    std::cout << "[+] TMP xp = " << tmp->getXP() << std::endl;

    delete bob;
    delete moi;
    delete src;
    
    return 0;
}