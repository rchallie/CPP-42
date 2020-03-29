/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: excalibur <excalibur@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/29 16:38:15 by excalibur         #+#    #+#             */
/*   Updated: 2020/03/29 18:40:07 by excalibur        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../incs/incs.hpp"

int main()
{
	srand(time(NULL));

	void* raw = serialize();
	Data* data = deserialize(raw);

	std::cout << "S1    = " << data->s1 << std::endl;
	std::cout << "N     = " << data->n << std::endl;
 	std::cout << "S2    = " << data->s2 << std::endl;

    delete data;
}