/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: excalibur <excalibur@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 17:06:32 by excalibur         #+#    #+#             */
/*   Updated: 2020/03/14 18:40:34 by excalibur        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie;

class Zombie
{
    private:
        std::string name;
        std::string type;
    public:
        Zombie();
        Zombie(std::string type, std::string name);
        ~Zombie();
        std::string getName();
        std::string getType();
        void setName(std::string name);
        void setType(std::string type);
        void announce();
};

#endif