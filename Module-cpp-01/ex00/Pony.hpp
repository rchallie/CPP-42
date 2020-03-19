/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: excalibur <excalibur@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 12:01:17 by excalibur         #+#    #+#             */
/*   Updated: 2020/03/18 19:06:17 by excalibur        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>

class Pony
{
	private:
		std::string name;
		std::string color;
		std::string favorite_food;
		std::string owner;
		std::string size;
		std::string weight;
	public:
		Pony();
		Pony(std::string name, std::string color,
			std::string favorite_food, std::string owner,
			std::string size, std::string weight);
		~Pony();
		void set_Name(std::string name);
		void set_Color(std::string color);
		void set_Favorite_Food(std::string favorite_food);
		void set_Owner(std::string owner);
		void set_Size(std::string size);
		void set_Weight(std::string weight);
		void speech();
		std::string get_Color();
		std::string get_Name();
		std::string get_Favorite_Food();
		std::string get_Owner();
		std::string get_Size();
		std::string get_Weight();
};

void    poneyOnTheStack();
void    poneyOnTheHeap();

#endif