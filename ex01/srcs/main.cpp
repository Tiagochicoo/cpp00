/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42Lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 16:16:59 by tpereira          #+#    #+#             */
/*   Updated: 2022/12/29 19:24:11 by tpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main.hpp"

std::string	getInput(std::string field)
{
	std::string input;
	
	while (input == "")
	{
		std::cout << "\t       "; std::cout << field << "        "; std::getline(std::cin, input);
		if (input == "")
			std::cout << "\n\t\t   Please enter a valid " << field << std::endl;
	}
	return (input);
}

void	showMenu() 
{
	system("clear");
	std::cout << std::endl
			  << "\t*——————————————————————————MENU—————————————————————————*" << std::endl
			  << "\t|                                                       |" << std::endl
			  << "\t|    Please enter one of the following commands:        |" << std::endl
			  << "\t|                                                       |" << std::endl
			  << "\t|     ┌——————————┬————————————————————————————————┐     |" << std::endl
			  << "\t|     | Command  |         Description            |     |" << std::endl
			  << "\t|     ├——————————┼————————————————————————————————┤     |" << std::endl
			  << "\t|     |   ADD    | Add new contact to PhoneBook   |     |" << std::endl
			  << "\t|     ├——————————┼————————————————————————————————┤     |" << std::endl
			  << "\t|     |  SEARCH  | Browse contacts on PhoneBook   |     |" << std::endl
			  << "\t|     ├——————————┼————————————————————————————————┤     |" << std::endl
			  << "\t|     |   EXIT   |Close PhoneBook (loose contacts)|     |" << std::endl
			  << "\t|     └——————————┴————————————————————————————————┘     |" << std::endl
			  << "\t|                                                       |" << std::endl
			  << "\t*———————————————————————*********———————————————————————*" << std::endl;
}

int	main(void)
{
	PhoneBook	phonebook;
	std::string cmd;

	system("clear");
	std::cout	<< "\n\n\t   Welcome to the best PhoneBook in the Universe!" << std::endl;
	while (cmd != "EXIT")
	{
		showMenu();
		std::cout << "\n\t\t\tEnter command: ";
		std::getline(std::cin, cmd);
		if (cmd == "ADD")
			phonebook.addContact();
		else if (cmd == "SEARCH")
			phonebook.searchContact();
		else if (cmd != "EXIT")
		{
			system("clear");
			std::cout << "\n\n\t   Invalid command. Please enter a valid command: " << std::endl;
		}
	}
	system("clear");
	std::cout << "\n\n\t Thanks for using the best PhoneBook in the Universe!\n\n" << std::endl;
	return (0);
}