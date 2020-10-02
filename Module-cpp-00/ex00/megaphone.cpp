/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 08:49:43 by rchallie          #+#    #+#             */
/*   Updated: 2020/10/01 22:44:07 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

/*
** @brief Computes the length of the string s.
** 
** @param s the string.
** @return the lenght of s.
*/
int		ft_strlen(char *s)
{
	int i;

	for (i = 0; s && s[i]; i++);
	return (i);
}

/*
** @brief Converts a lower-case letter to the corresponding
** upper-case letter.
**
** @param c the char to convert.
** @return the char uppered.
*/
char	ft_toupper(char c)
{
	return ((c >= 97 && c <= 122) ? c - 32 : c);
}

/*
** @brief Output a string with all letters are uppered.
**
** @param argc the number of arguments.
** @param argv the arguments.
** @return 0 in all case.
*/
int		main(int argc, char **argv)
{
	if (argc > 1)
	{
		for (int i = 1; i < argc; i++)
			for (int j = 0; j < ft_strlen(argv[i]); j++)
				std::cout << ft_toupper(argv[i][j]);
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}