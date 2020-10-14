/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/24 10:33:52 by rchallie          #+#    #+#             */
/*   Updated: 2020/10/14 21:04:35 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Squad.hpp"
# include "ISquad.hpp"
# include "ISpaceMarine.hpp"
# include "TacticalMarine.hpp"
# include "AssaultTerminator.hpp"

int main()
{
    ISpaceMarine* bob = new TacticalMarine;
    ISpaceMarine* jim = new AssaultTerminator;
    
	std::cout << std::endl;

    ISquad* vlc = new Squad;
    vlc->push(bob);
    vlc->push(jim);

    for (int i = 0; i < vlc->getCount(); ++i)
    {
        ISpaceMarine* cur = vlc->getUnit(i);
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
		std::cout << std::endl;
    }

    delete vlc;

    std::cout << std::endl << std::endl << "Custom Testing, copying a marine :" << std::endl << std::endl;

	AssaultTerminator	*Gracia = new AssaultTerminator;
	ISpaceMarine		*Poppuri = new AssaultTerminator(*Gracia);

	TacticalMarine		*Ally = new TacticalMarine;
	ISpaceMarine		*Bella = new TacticalMarine(*Ally);

	ISquad				*Team = new Squad;

	Team->push(Poppuri);
	Team->push(Bella);

	std::cout << std::endl;

	std::cout << "Delete primary Assault & Tactical:" << std::endl << std::endl;
	delete Gracia;
	delete Ally;

	std::cout << std::endl << "Delete Team:" << std::endl << std::endl;
	delete Team;
	

    return 0;
}