/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 12:01:11 by rchallie          #+#    #+#             */
/*   Updated: 2020/10/03 00:01:47 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

/*
** @brief Create a Pony on the heap.
*/
void    poneyOnTheHeap()
{
    Pony *pony_heap = new Pony("Sprinkles", "Purple", "Carrots", "Abigail A.", "Fat", "100");
    pony_heap->speech();
    std::cout << "Deleting pony on heap :" << std::endl;
    delete pony_heap;
}

/*
** @brief Create a Pony on the stack.
*/
void    poneyOnTheStack() 
{
    Pony poney_stack("Sucre d'orge", "Yellow", "Apple", "Romain C.", "Cute", "125");
    poney_stack.speech();
    std::cout << "Deleting pony on stack :" << std::endl;
}

int main()
{
    //  Heap
    std::cout << "### On Heap : ###" << std::endl;
    poneyOnTheHeap();
    std::cout << std::endl;

    //  Stack
    std::cout << "### On Stack : ###" << std::endl;
    poneyOnTheStack();
    std::cout << std::endl;
}