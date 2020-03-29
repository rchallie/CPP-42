/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: excalibur <excalibur@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/28 10:34:16 by excalibur         #+#    #+#             */
/*   Updated: 2020/03/28 17:32:00 by excalibur        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../incs/inc.hpp"

int main(int argc, char **argv)
{
    std::string tmp_to_treat;
    float to_treat;
    
    if (argc == 2)
    {
        ConvSca conv;
        tmp_to_treat = argv[1];
        
        try
        {
            to_treat = conv.toTreatable(tmp_to_treat);
        }
        catch (std::exception & e)
        {
            std::cout << "Error : " << e.what() << std::endl;
            return (1);
        }
        
        try
        {
            char c = conv.toChar(to_treat);
            std::cout << "char : '" << c << "'" << std::endl;
        }
        catch (std::string & e) { std::cout << "char : " << e << std::endl; }
        
        try
        {
            std::cout << "int : " << conv.toInt(to_treat) << std::endl;
        }
        catch (std::string & e) { std::cout << e << std::endl; }
        
        float f = conv.toFloat(to_treat);
        if (f - (int)f != (float)0)
            std::cout << "float : " << conv.toFloat(to_treat) << "f" << std::endl;
        else
            std::cout << "float : " << conv.toFloat(to_treat) << ".0f" << std::endl;

        double d = conv.toDouble(to_treat);
        if (d - (int)d != (double)0)
            std::cout << "double : " << conv.toDouble(to_treat) << std::endl;
        else
            std::cout << "double : " << conv.toFloat(to_treat) << ".0" << std::endl;
    }
    else
        std::cout << "Number of arguments is invalid." << std::endl;
    
    return (0);
}