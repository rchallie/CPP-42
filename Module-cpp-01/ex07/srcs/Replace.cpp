/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/16 08:24:32 by rchallie          #+#    #+#             */
/*   Updated: 2020/10/03 12:27:13 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Replace.hpp"

/*
** @brief Open file, get is content, find and replace
** the s1 string by the s2 and set this output in
** file_name.replace.
**
** @param file_name.
** @param s1 the string to replace.
** @param s2 the string who will replace s1.
*/
static void    replace(const char *file_name, const char *s1, const char *s2)
{
    std::ostringstream  text;
    std::ifstream       file(file_name);
    std::string         str_search (s1);
    std::string         str_replace (s2);
    std::string         str;
    size_t              find_pos;

    text << file.rdbuf();
    str = text.str();
    while (42)
    {
        find_pos = str.find(str_search);
        if (find_pos == std::string::npos)
            break;
        str.replace(find_pos, std::string(str_search).length(), str_replace);
    }
    file.close();
    std::ofstream file2(std::string(file_name) + ".replace");
    file2 << str;
}

/*
** @brief Return an integer in function of the stat()
** of the file. If file is different than 0, then the
** file is conciderate like doesn't exist.
**
** @param file_name.
*/
static inline int file_exist(const std::string& file_name)
{
    struct stat buffer;
    return (stat(file_name.c_str(), &buffer) == 0);
}

/*
** @brief Check if the arguments are not empty and
** if the file exist.
**
** @param args the arguments of the command.
** @return ERROR_EMPTY_ARG if an argument is empty,
** ERROR_FILE_DOES_NOT_EXIST if the file doesn't exist,
** otherwise SUCCESS.
*/
static int      check_args_validity(const char **args)
{
    std::string string_to_check;

    for (int args_count = 1; args_count < 4; args_count++)
    {
        string_to_check.append(args[args_count]);
        if (!string_to_check.compare(""))
            return (ERROR_EMPTY_ARG);
        string_to_check.clear();
    }
    string_to_check.append(args[1]);
    if (file_exist(string_to_check) == 0)
        return (ERROR_FILE_DOES_NOT_EXIST); 
    return (SUCCESS);
}

int             main(int argc, char **argv)
{
    int         general_rtn;
    
    if(argc != 4)
        return (treat_error(ERROR_NBR_ARGS));
    else
    {
        if ((general_rtn = check_args_validity((const char **)argv)) != SUCCESS)
            return (treat_error(general_rtn));
        replace((const char *)argv[1], (const char *)argv[2], (const char *)argv[3]);
    }
    return (SUCCESS);
}
