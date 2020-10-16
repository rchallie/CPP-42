/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   explicit_serializer_linux.cpp                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/29 13:03:32 by rchallie          #+#    #+#             */
/*   Updated: 2020/10/16 23:43:18 by rchallie         ###   ########.fr       */
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
	std::cout << "=== SERIALIZE ===" << std::endl;
	for (int i = 0; i < 8; i++)
		data->s1 += alphabet[rand() % 25];
	std::cout << "S1    = " << data->s1 << std::endl;
	data->n = rand() % 20000;
	std::cout << "N     = " << data->n << std::endl;
	for (int i = 0; i < 8; i++)
		data->s2 += alphabet[rand() % 25];
	std::cout << "S1    = " << data->s2 << std::endl;

	std::cout << "Size of Data = " << sizeof(Data) << std::endl;
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

// /**
//  * @brief Generate two random strings
//  * and a random integer, and serialize them.
//  * 
//  * @return the pointer to serialized datas.
//  */
// void *      serialize(void)
// {

// 	srand(time(NULL));
// 	char *   rtn = new char[20];
// 	char	alphabet[] = "abcdefghijklmnopqrstuvwxyz";

// 	std::cout << "=== SERIALIZE ===" << std::endl;
// 	for (int i = 0; i < 8; i++)
// 		*(rtn + i) = alphabet[rand() % 25];
// 	std::cout << "S1    = " << std::string(rtn, 8) << std::endl;
	
// 	*reinterpret_cast<int *>(rtn + 8) = rand() % 20000;
// 	std::cout << "N     = " << *(reinterpret_cast<int *>(rtn) + 2) << std::endl;
	
// 	for (int i = 12; i < 20; i++)
// 		*(rtn + i) = alphabet[rand() % 25];
// 	std::cout << "S2    = " << std::string(rtn + 12, 8) << std::endl;
// 	std::cout << "=================" << std::endl;

// 	return (reinterpret_cast<void*>(rtn));
// }

// /**
//  * @brief Deserialize pointer, get two strings and
//  * one integer from it.
//  * 
//  * @param raw the pointer to deserialize
//  * (Need to be generate by previous serializer)
//  * @return the datas get.
//  */
// Data *      deserialize(void * raw)
// {
// 	Data *rtn = new Data;

// 	rtn->s1 = std::string(reinterpret_cast<char *>(raw), 8);
// 	rtn->n = *(reinterpret_cast<int *>(raw) + 2);
// 	rtn->s2 = std::string(reinterpret_cast<char *>(raw) + 12, 8);
// 	return (rtn);
// }
