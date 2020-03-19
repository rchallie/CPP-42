/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: excalibur <excalibur@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 21:21:38 by excalibur         #+#    #+#             */
/*   Updated: 2020/03/15 22:17:48 by excalibur        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int main()
{
    Human       bob;

    std::cout << bob.identify() << std::endl;
    std::cout << bob.getBrain()->identify() << std::endl;
}