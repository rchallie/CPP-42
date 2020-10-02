/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 08:22:11 by excalibur         #+#    #+#             */
/*   Updated: 2020/10/02 02:23:45 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Phonebook.hpp"

/*
** @brief Ask for delete the first contact
** to add a new one at the end.
**
** @param list the list of contacts.
** @return 0 if error appear, 1 otherwise.
*/
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
		list[7].clear();
	}
    std::cout << "This entry has no meaning, return to the main menu." << std::endl;
    return (1);
}

/*
** @brief Add a new contact to the list.
**
** @param list the list of contact.
** @return 0 to define the next stage of
** the program.
*/
static int _add(Contact list[8])
{
    int j = 0;
    while (!list[j].empty() && j < 8)
        j++;
    if (j == 8)
        return (_full(list));
    list[j].setup();
    return (0);
}

/*
** @brief Wait for entry.
**
** @return the number of the next stage.
*/
static int _start_menu()
{
    std::string entry;
	std::cout << "So what do we do? > ";
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

/*
** @brief Print string to the search column
** format.
**
** @param the string to print.
*/
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

/*
** @brief Ask for the index of contact to print.
**
** @param list the list of contact.
** @param contact_amount.
** @return 0 if an error appear, 0 otherwise.
*/
static int _print_infos_by_index(Contact list[8], int contact_amount)
{
    std::string entry;
    std::cout << "Choose an index between 0 et " << contact_amount - 1 << " : ";
    std::getline(std::cin, entry);
    if (entry.length() != 1)
        return (0);
    int index = atoi(entry.c_str());
    if (index < 0 || index > 8 || list[index].empty())
        return (0);
    list[index].print_contact();
    return (1);
}

/*
** @brief Print contact list.
**
** @param list the contact list.
** @return 0 for set the next stage.
*/
static int _search(Contact list[8])
{
    std::cout << "     index|first name| last name|    pseudo" << std::endl;
    std::cout << "-------------------------------------------" << std::endl;
    int j = 0;
    while (!list[j].empty() && j < 8)
    {
        std::cout << "         " << j << "|";
        _print_to_format(list[j].getFirstName());
        std::cout << "|";
        _print_to_format(list[j].getLastName());
        std::cout << "|";
        _print_to_format(list[j].getNickname());
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

/*
** @brief Print end message and exit.
*/
static void _end()
{
    std::cout << "Bye bye !" << std::endl;
    exit(0);
}

/*
** @brief Print title and command list.
*/
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

/*
** @brief Phonebook is a program to add
** contact in it.
**
** @return 0.
*/
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