/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: excalibur <excalibur@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:33:03 by excalibur         #+#    #+#             */
/*   Updated: 2020/03/17 16:58:39 by excalibur        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>
# include <string>

class Enemy;

class Enemy
{
    private:
        int             _hp;
        std::string     _type;

    public:
        Enemy(int hp, std::string const & type);
        Enemy(const Enemy&);
        virtual ~Enemy();
        Enemy &operator=(Enemy& op);

        // Getter / Setter
        std::string     getType() const;
        int             getHP() const;

        // Additionnal
        virtual void    takeDamage(int amount);
};

#endif