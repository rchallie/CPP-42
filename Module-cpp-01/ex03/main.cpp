/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 19:16:26 by rchallie          #+#    #+#             */
/*   Updated: 2020/10/05 20:49:46 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int main()
{
    ZombieHorde horde(6);
    horde.announce();

    ZombieHorde horde_invalid(-8);
    horde_invalid.announce();
}
