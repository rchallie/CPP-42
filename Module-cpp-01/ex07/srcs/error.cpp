/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: excalibur <excalibur@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/16 08:59:00 by excalibur         #+#    #+#             */
/*   Updated: 2020/03/16 09:56:22 by excalibur        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/replace.hpp"

/*
**  treat_error :
**  -------------
**      Print error message in fucntion of error number gived in arguments
**
**      (int) err_num : error number
**
**      returns : return err_num
**
*/

int treat_error(int err_num)
{
    std::string error_msgs_list[] = {
        "Is not an error.",                 // SUCCESS
        "Error.",                           // ERROR
        "Number of arguments is invalid.",  // ERROR_NBR_ARGS
        "An argument is empty.",            // ERROR_EMPTY_ARG
        "File does not exist."               // ERROR_FILE_DOES_NOT_EXIST
    };

    std::cout << "Error : " << error_msgs_list[err_num] << std::endl;
    return (err_num);
}