/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: excalibur <excalibur@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/29 18:43:53 by excalibur         #+#    #+#             */
/*   Updated: 2020/03/29 19:06:52 by excalibur        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../incs/Base.hpp"
# include "../incs/A.hpp"
# include "../incs/B.hpp"
# include "../incs/C.hpp"
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