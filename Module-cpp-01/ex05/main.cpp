/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 21:21:38 by rchallie          #+#    #+#             */
/*   Updated: 2020/10/03 10:59:23 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int main()
{
    Human       bob;

    std::cout << bob.identify() << std::endl;
    std::cout << bob.getBrain()->identify() << std::endl;
}