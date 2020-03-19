/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: excalibur <excalibur@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 08:22:11 by excalibur         #+#    #+#             */
/*   Updated: 2020/03/14 11:36:03 by excalibur        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/phonebook.hpp"

static int	_full(Contact list[8])
{
	std::string rep;

	std::cout << "The contact list is full, add a new contact ";
    std::cout << "will remove the first one from the list.\nContinue? [yes - no] : ";
	std::getline(std::cin, rep);
	if (!rep.compare("no"))
    {
        std::cout << "Okay ! return to the main menu." << std::endl;
        return (0);
    }
	else if (!rep.compare("yes"))
	{
		for (int i = 1; i < 7; i++)
			list[i - 1] = list[i];
		list[7].infos[0][0].clear();
	}
    std::cout << "This entry has no meaning, return to the main menu." << std::endl;
    return (1);
}

static int _add(Contact list[8])
{
    int j = 0;
    while (!list[j].infos[0][0].empty() && j < 8)
        j++;
    if (j == 8)
        return (_full(list));
    Contact new_contact;
    std::string infos_name[11] = {
			"first name",
			"last name",
			"nickname",
			"login",
			"postal address",
			"email address",
			"phone number",
			"birthday date",
			"favorite meal",
			"underwear color",
			"darkest secret"
		};
    for (int i = 0; i < 11; i++)
	{
		new_contact.infos[i][0] = infos_name[i];
		std::cout << new_contact.infos[i][0] << " : ";
		std::getline(std::cin, new_contact.infos[i][1]);
	}
    list[j] = new_contact;
    return (0);
}

static int _start_menu()
{
    std::string entry;
	std::cout << "So what do we do? : ";
	std::getline(std::cin, entry);
	if (std::cin.eof())
		return (3);
	if (!entry.compare("ADD"))
		return (1);
	if (!entry.compare("SEARCH"))
		return (2);
	if (!entry.compare("EXIT"))
		return (3);
	return (0);
}

static void _print_to_format(std::string s)
{
    if (s.size() > 10)
    {
        s = s.insert(9, ".");
        s = s.substr(0, 10);
    }
    else
        while (s.length() < 10)
            s = s.insert(0, " ");
    std::cout << s;
}

static int _print_infos_by_index(Contact list[8], int contact_amount)
{
    std::string entry;
    std::cout << "Choose an index between 0 et " << contact_amount - 1 << " : ";
    std::getline(std::cin, entry);
    if (entry.length() != 1)
        return (0);
    int index = atoi(entry.c_str());
    if (index < 0 || index > 8 || list[index].infos[0][0].empty())
        return (0);
    for (int i = 0; i < 11; i++)
        std::cout << list[index].infos[i][0] << " : " << list[index].infos[i][1] << std::endl;
    return (1);
}

static int _search(Contact list[8])
{
    std::cout << "     index|first name| last name|    pseudo" << std::endl;
    std::cout << "-------------------------------------------" << std::endl;
    int j = 0;
    while (!list[j].infos[0][0].empty() && j < 8)
    {
        std::cout << "         " << j << "|";
        _print_to_format(list[j].infos[0][1]);
        std::cout << "|";
        _print_to_format(list[j].infos[1][1]);
        std::cout << "|";
        _print_to_format(list[j].infos[2][1]);
        std::cout << std::endl;
        j++;
    }
    if (j > 0)
    {
        if (_print_infos_by_index(list, j) == 0)
        {
            std::cout << "This entry has no meaning, return to the main menu." << std::endl;
            return (0);
        }
    }
    return (0);
}

static void _end()
{
    std::cout << "Bye bye !" << std::endl;
    exit(0);
}

static void	title(void)
{
	std::cout << std::endl;
	std::cout << "██████╗ ██╗  ██╗ ██████╗ ███╗   ██╗███████╗██████╗  ██████╗  ██████╗ ██╗  ██╗" << std::endl;
	std::cout << "██╔══██╗██║  ██║██╔═══██╗████╗  ██║██╔════╝██╔══██╗██╔═══██╗██╔═══██╗██║ ██╔╝" << std::endl;
	std::cout << "██████╔╝███████║██║   ██║██╔██╗ ██║█████╗  ██████╔╝██║   ██║██║   ██║█████╔╝ " << std::endl;
	std::cout << "██╔═══╝ ██╔══██║██║   ██║██║╚██╗██║██╔══╝  ██╔══██╗██║   ██║██║   ██║██╔═██╗ " << std::endl;
	std::cout << "██║     ██║  ██║╚██████╔╝██║ ╚████║███████╗██████╔╝╚██████╔╝╚██████╔╝██║  ██╗" << std::endl;
	std::cout << "╚═╝     ╚═╝  ╚═╝ ╚═════╝ ╚═╝  ╚═══╝╚══════╝╚═════╝  ╚═════╝  ╚═════╝ ╚═╝  ╚═╝" << std::endl;
	std::cout << std::endl;
	std::cout << "Welcome to your phonebook !\nThe available entries are : " << std::endl;
	std::cout << " - ADD \n - SEARCH \n - EXIT \n" << std::endl;
}

int main()
{
    int actual_state;
    Contact list[8];
    
    actual_state = 0;
    title();
    while (42)
    {
        if (actual_state == 0)
            actual_state = _start_menu();
        else if (actual_state == 1)
            actual_state = _add(list);
        else if (actual_state == 2)
            actual_state = _search(list);
        else if (actual_state == 3)
            _end();
    }
    return (0);
}