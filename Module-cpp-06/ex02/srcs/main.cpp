/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/29 18:43:53 by rchallie          #+#    #+#             */
/*   Updated: 2020/10/16 01:22:49 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include "../incs/incs.hpp"

int main()
{
    A a;
    B b;
    C c;

    std::cout << "Pointers :" << std::endl;
    identify_from_pointer(&b);
    identify_from_pointer(&a);
    identify_from_pointer(&c);

    std::cout << "References :" << std::endl;
    identify_from_reference(c);
    identify_from_reference(b);
    identify_from_reference(a);

}