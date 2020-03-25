/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: excalibur <excalibur@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:31:43 by excalibur         #+#    #+#             */
/*   Updated: 2020/03/19 19:22:00 by excalibur        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad()
:
    _units_count(0),
    _units_list(NULL)
{}

Squad::Squad(const Squad& op)
{
    t_units *units;
    t_units *units_next;
    t_units *start_units;
    t_units *op_units;

    units = this->_units_list;
    units_next = units->_next;
    start_units = units;
    op_units = op._units_list;
    for(int i = 0; i < this->getCount(); i++)
    {
        delete units->_unit;
        units = units_next;
        units_next = units->_next;
    }
    units = start_units;

    for (int i = 0; i < op.getCount(); i++)
    {
        ISpaceMarine *copy = op_units->_unit->clone();
        this->push(copy);
        op_units = op_units->_next;
    }
}

Squad::~Squad()
{
    t_units *next;
    
    for(int i = 0; i < this->getCount(); i++)
    {
        next = this->_units_list->_next;
        std::cout << "unit battle cry = "; this->_units_list->_unit->battleCry();
        delete this->_units_list->_unit;
        delete this->_units_list;
        this->_units_list = next;
    }
}

Squad & Squad::operator=(const Squad& op)
{
    if (this == &op)
        return (*this);
    return (*this);
}

// Getter / Setter

/**
 * Return number of units was in squad.
 */
int                 Squad::getCount() const { return (_units_count); }

ISpaceMarine*       Squad::getUnit(int index) const
{
    t_units         *units;
    ISpaceMarine    *rtn;

    units = this->_units_list;
    if (index >= 0 && getCount() > index)
    {
        while(index--)
            units = units->_next;
        if (units)
            rtn = units->_unit;
        else
            rtn = NULL;
        return (rtn);
    }
    return (NULL);
}

int                 Squad::push(ISpaceMarine* spacemarine)
{
    int             i;
    t_units         *units;

    units = this->_units_list;
    if (!spacemarine)
        return (1);
    if (this->_units_list == NULL)
    {
        this->_units_list = new t_units;
        this->_units_list->_next = NULL;
        this->_units_list->_unit = spacemarine;
        this->_units_count += 1;
        return (0);
    }
    int count = getCount();
    for(i = 0; i < count; i++)
        if(this->getUnit(i) == NULL)
            break;
    
    if (i >= getCount())
    {
        while (units->_next)
            units = units->_next;
        units->_next = new t_units;
        units->_next->_unit = spacemarine;
        units->_next->_next = NULL;
        this->_units_count += 1;
    }
    return (0);
}