/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: excalibur <excalibur@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:31:43 by excalibur         #+#    #+#             */
/*   Updated: 2020/03/15 21:09:11 by excalibur        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

typedef void(Human::* func_member) (std::string const &);

void        Human::meleeAttack(std::string const & target)
{
    std::cout << "An human try to attack " << target << " with his sword !" << std::endl;
}

void        Human::rangedAttack(std::string const & target)
{
    std::cout << "An human think he can attack " << target << "like Robin Hood !" << std::endl;
}

void        Human::intimidatingShout(std::string const & target)
{
    std::cout << "An human shout after " << target << std::endl; 
}

void        Human::action(std::string const & action_name, std::string const & target)
{
    std::string func_names[3] = {
        "melee",
        "ranged",
        "intimidating"
    };

    func_member member[3] = {
        &Human::meleeAttack,
        &Human::rangedAttack,
        &Human::intimidatingShout
    };

    for (int ac_count = 0; ac_count < 3; ac_count++)
        if (func_names[ac_count].compare(action_name))
            (this->*member[ac_count])(target);
}