/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   explicit_serializer.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: excalibur <excalibur@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/29 13:03:32 by excalibur         #+#    #+#             */
/*   Updated: 2020/03/29 18:41:09 by excalibur        ###   ########.fr       */
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
	srand(time(NULL));

	Data*	data = new Data;
	char	alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	int		s1_len = 1 + rand() % 30;
	int		s2_len = 1 + rand() % 30;

	std::cout << "=== SERIALIZE ===" << std::endl;
	for (int i = 0; i < s1_len; i++)
		data->s1 = alphabet[rand() % 25];
	std::cout << "S1    = " << data->s1 << std::endl;
		
	data->n = rand() % 20000;
	std::cout << "N     = " << data->n << std::endl;

	for (int i = 0; i < s2_len; i++)
		data->s2 += alphabet[rand() % 25];
	std::cout << "S2    = " << data->s2 << std::endl;
	std::cout << "=================" << std::endl;
	return (data);
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
	return (reinterpret_cast<Data*>(raw));
}