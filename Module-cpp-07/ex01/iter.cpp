/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: excalibur <excalibur@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/30 11:14:29 by excalibur         #+#    #+#             */
/*   Updated: 2020/03/30 14:29:53 by excalibur        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>

/**
 * @brief Apply a function to an array.
 * 
 * @param array the array where the function
 * will be applied.
 * @param size the size of the array.
 * @param func the function.
 */
template<typename T>
void    iter(T (*array), int size, void (*func)(T &))
{
    for (int i = 0; i < size; i++)
        func(array[i]);
}

/**
 * @brief print passed argument.
 * 
 * @param t object to print.
 */
template<typename T>
void print(T const &t)
{
    std::cout << t << std::endl;
}

/**
 * @brief increment passed argument.
 * 
 * @param t the object to increase.
 */
template<typename T>
void addOne(T &t)
{
    t++;
}

int main()
{
    int plop[] {0,1,2,3,4,5,6,7,8,9};
    std::string strs[] = { "Salut", "Comment" , "Tu", "Vas", "?"};

    std::cout << "Print integer array : " << std::endl;
    iter<const int>(plop, 10, print);
    std::cout << std::endl;
    iter<int>(plop, 10, addOne);
    std::cout << "Print integer array after addOne: " << std::endl;
    iter<const int>(plop, 10, print);
    std::cout << std::endl;
    std::cout << "Print std::string array :" << std::endl;
    iter<const std::string>(strs, 5, print);
}