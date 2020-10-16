/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/29 13:03:32 by rchallie          #+#    #+#             */
/*   Updated: 2020/10/16 22:43:19 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../incs/incs.hpp"

/**
 * @brief Generate two random strings
 * and a random integer, and serialize them.
 * 
 * @return the pointer to serialized datas.
 */
void *      serialize(void)
{
	Data *plop = new Data;

	plop->s1 = std::string("abcdefg");
	
	srand(time(NULL));
	int *   rtn = new int[56];
	char	alphabet[] = "abcdefghijklmnopqrstuvwxyz";

	std::cout << "S1 const = ";
	for (int i = 0; i < 8; i++)
	{
		*(rtn + (i * 4)) = alphabet[rand() % 25];
		std::cout << (char)*(rtn + (i * 4));
	}
	std::cout << std::endl;
	*reinterpret_cast<int *>(rtn + 26) = rand() % 20000;
	for (int i = 12; i < 20; i++)
		*(rtn + i + 4) = alphabet[rand() % 25];

	std::cout << "SIZE OF TEST = " << plop->s1.capacity() << std::endl;
	return (reinterpret_cast<void*>(rtn));
}

/**
 * @brief Deserialize pointer, get two strings and
 * one integer from it.
 * 
 * @param raw the pointer to deserialize
 * (Need to be generate by previous serializer)
 * @return the datas get.
 */
Data *      deserialize(void * raw)
{
	Data *rtn = new Data;

	std::cout << "pLOP = " << reinterpret_cast<char *>(raw) << std::endl; 

	rtn->s1 = std::string(reinterpret_cast<char *>(raw), 26);
	std::cout << sizeof(rtn->s1) << std::endl;
	rtn->n = *(reinterpret_cast<int *>(raw) + 26);
	std::cout << sizeof(rtn->n) << std::endl;
	rtn->s2 = std::string(reinterpret_cast<char *>(raw) + 30, 26);
	std::cout << sizeof(rtn->s2) << std::endl;
	return (rtn);
}