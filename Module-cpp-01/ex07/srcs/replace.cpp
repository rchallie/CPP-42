/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: excalibur <excalibur@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/16 08:24:32 by excalibur         #+#    #+#             */
/*   Updated: 2020/03/16 12:28:01 by excalibur        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/replace.hpp"

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
    std::ofstream file2(file_name);
    file2 << str;
}

static inline int file_exist(const std::string& file_name)
{
    struct stat buffer;
    return (stat(file_name.c_str(), &buffer) == 0);
}

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