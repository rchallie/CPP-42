/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: excalibur <excalibur@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 08:49:43 by rchallie          #+#    #+#             */
/*   Updated: 2020/03/25 15:40:58 by excalibur        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

/**
 * @brief Computes the length of the string s.
 * 
 * @return the lenght of s.
 */
int		ft_strlen(char *s)
{
	int i;

	if (!s) return 0;
	for (i = 0; s[i]; i++);
	return (i);
}

/**
 *  	Converts a lower-case letter to the corresponding
 * 		upper-case letter.
 */
char	ft_toupper(char c)
{
	return ((c >= 97 && c <= 122) ? c - 32 : c);
}

/**
 * 		Out the arguments in capital letters
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