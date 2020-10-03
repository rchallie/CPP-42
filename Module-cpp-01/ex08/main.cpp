/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/03 13:27:35 by rchallie          #+#    #+#             */
/*   Updated: 2020/10/03 13:30:30 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int main()
{
    Human hum;

    hum.action("melee", "Karen");
    hum.action("ranged", "James");
    hum.action("intimidating", "Ork");
}