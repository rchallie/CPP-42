/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/29 16:38:15 by rchallie          #+#    #+#             */
/*   Updated: 2020/10/16 23:23:59 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../incs/incs.hpp"

int main()
{
	void* raw = serialize();
	Data* data = deserialize(raw);
	
	std::cout << "S1    = " << data->s1 << std::endl;
	std::cout << "N     = " << data->n << std::endl;
 	std::cout << "S2    = " << data->s2 << std::endl;

    delete reinterpret_cast<Data *>(raw);
	delete data;
}