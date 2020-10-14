/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 11:11:15 by rchallie          #+#    #+#             */
/*   Updated: 2020/10/13 22:09:49 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Sorcerer.hpp"
# include "Victim.hpp"
# include "Peon.hpp"
# include "Minion.hpp"

int main()
{
    Sorcerer    robert("Robert", "the Magnificent");

    Victim      jim("Jimmy");
    Peon        joe("Joe");
    Minion      mini("Mimi");

    std::cout << robert << jim << joe << mini;

    robert.polymorph(jim);
    robert.polymorph(joe);
    robert.polymorph(mini);
    
    return (0);
}