/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: excalibur <excalibur@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 11:11:15 by excalibur         #+#    #+#             */
/*   Updated: 2020/03/21 16:03:33 by excalibur        ###   ########.fr       */
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