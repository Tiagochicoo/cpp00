/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42Lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 16:16:59 by tpereira          #+#    #+#             */
/*   Updated: 2022/12/29 10:46:37 by tpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>



// class PhoneBook {
// 	private:
// 		Contact entry[8];

// 	PhoneBook
// };

void	showMenu() {
	std::cout << std::endl
			  << "\t\t\t*-----------------------Menu------------------------*" << std::endl
			  << "\t\t\t|                                                   |" << std::endl
			  << "\t\t\t| Please enter one of the following commands:       |" << std::endl
			  << "\t\t\t|                                                   |" << std::endl
			  << "\t\t\t| ADD\t : Add a new contact                        |" << std::endl
			  << "\t\t\t| SEARCH : Search contact list                      |" << std::endl
			  << "\t\t\t| EXIT\t : Exit PhoneBook (contacts will be lost)   |" << std::endl
			  << "\t\t\t|                                                   |" << std::endl
			  << "\t\t\t*---------------------------------------------------*" << std::endl;
}

int	main(void)
{
	// PhoneBook	phonebook;
	std::string option;

	// check/search/show contacts
	// ADD contact
	// DELETE contact
	// Show menu

	std::cout	<< "\n\n\t\t\t   Welcome to the best PhoneBook in the Universe!" << std::endl;
	while (1)
	{
		showMenu();
		std::cin >> option;
		if (option == "EXIT")
			break ;
		else if (option == "ADD") {
			// if (!phonebook.addContact())
				break ;
		}
		else if (option == "SEARCH")
			// if (!phonebook.searchContact())
				break ;
		else
		{
			system("clear");
			std::cout << "\n\n\t\t\t   Invalid command. Please enter a valid command: " << std::endl;
		}
	}
	system("clear");
	std::cout << "Thanks for using the best PhoneBook in the Universe!" << std::endl;
	return (0);
}