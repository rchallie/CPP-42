/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Error.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/16 08:59:00 by rchallie          #+#    #+#             */
/*   Updated: 2020/10/03 12:40:55 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Replace.hpp"

/*
** @brief Print error message in fucntion of error
** number gived in arguments.
**
** @param err_num the error number.
** @return err_num.
*/
int treat_error(int err_num)
{
    std::string error_msgs_list[] = {
        "Is not an error.",                 // SUCCESS
        "Error.",                           // ERROR
        "Number of arguments is invalid.",  // ERROR_NBR_ARGS
        "An argument is empty.",            // ERROR_EMPTY_ARG
        "File does not exist."              // ERROR_FILE_DOES_NOT_EXIST
    };

    std::cout << "Error : " << error_msgs_list[err_num] << std::endl;
    return (err_num);
}