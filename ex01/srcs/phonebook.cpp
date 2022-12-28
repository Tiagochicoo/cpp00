/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42Lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 12:36:45 by tpereira          #+#    #+#             */
/*   Updated: 2022/12/28 16:02:46 by tpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/phonebook.hpp"

PhoneBook::PhoneBook(void)
{
	Contact		contact;
	PhoneBook	phonebook;
	
	std::cout << "Please enter one of the following commands: ADD, SEARCH and EXIT" << std::endl;
	std::cin >> command;
	if (command == "ADD")
	{
		contact = phonebook.add();
	}
	else if (command == "SEARCH")
	{
		contact = phonebook.search();
	}
	else if (command == "EXIT")
	{
		contact = phonebook.exit();
	}
	else
	{
		std::cout << "Invalid command" << std::endl;
	}
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "PhoneBook destroyed" << std::endl;
}

Contact::Contact(void)
{
	std::cout << "Contact created" << std::endl;
}

Contact::~Contact(void)
{
	std::cout << "Contact destroyed" << std::endl;
}

Contact PhoneBook::add(void)
{
	std::cout << "add" << std::endl;
	return (Contact());
}

Contact PhoneBook::search(void)
{
	std::cout << "search" << std::endl;
	return (Contact());
}

Contact PhoneBook::exit(void)
{
	std::cout << "exit" << std::endl;
	return (Contact());
}

int	menu(void)
{
	char		*command;

	command = new char[5];
	std::cout << "Please enter one of the following commands: ADD, SEARCH and EXIT" << std::endl;
	std::cin >> command;
	if (command == "ADD")
		return (1);
	else if (command == "SEARCH")
		return (2);
	else if (command == "EXIT")
		return (3);
	else
		std::cout << "Invalid command" << std::endl;
	return (0);
}

int main(void)
{
	PhoneBook	phonebook;
	Contact		contact;
	int			option;

	option = 0;
	std::cout << "Welcome to my awesome PhoneBook!" << std::endl;
	while (option != 3)
	{
		option = menu();
		if (option == 1)
			contact = phonebook.add();
		else if (option == 2)
			contact = phonebook.search();
	}

	return (0);
}