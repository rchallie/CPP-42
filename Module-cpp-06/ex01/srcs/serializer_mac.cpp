/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serializer_linux.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/29 13:03:32 by rchallie          #+#    #+#             */
/*   Updated: 2020/10/16 23:42:34 by rchallie         ###   ########.fr       */
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
	Data *data = new Data;
	char	alphabet[] = "abcdefghijklmnopqrstuvwxyz";

	srand(time(NULL));
	for (int i = 0; i < 8; i++)
		data->s1 += alphabet[rand() % 25];
	data->n = rand() % 20000;
	for (int i = 0; i < 8; i++)
		data->s2 += alphabet[rand() % 25];
	return (reinterpret_cast<void*>(data));
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

	rtn->s1 = std::string(reinterpret_cast<char *>(raw) + 1, 8);
	rtn->n = *(reinterpret_cast<int *>(raw) + 8);
	rtn->s2 = std::string(reinterpret_cast<char *>(raw) + 33, 8);
	return (rtn);
}
