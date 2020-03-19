/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 08:49:43 by rchallie          #+#    #+#             */
/*   Updated: 2020/03/12 10:19:24 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

/*
** Function: ft_strlen
** ------------
** 		Computes the length of the string s.
**
**		(char *)s : string whose length we want
**
**		returns: return lenght of the string, 0 if s is NULL
*/

int		ft_strlen(char *s)
{
	int i;

	if (!s) return 0;
	for (i = 0; s[i]; i++);
	return (i);
}

/*
** Function: ft_toupper
** ------------
** 		The toupper() function converts a lower-case letter to the corresponding
**		upper-case letter.
**
**		(char)c : char to up
**
**		returns: return char upped if it is in 'a' ... 'z'
*/

char	ft_toupper(char c)
{
	return ((c >= 97 && c <= 122) ? c - 32 : c);
}

/*
** Function: megaphone
** ------------
** 		Out the arguments in capital letters
**
**		(int)argc     : number of arguments
**		(char **)argv : arguments tu up
**
**		returns: return 0 
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