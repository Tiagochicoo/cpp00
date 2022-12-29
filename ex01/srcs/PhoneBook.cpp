/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42Lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 11:07:28 by tpereira          #+#    #+#             */
/*   Updated: 2022/12/29 19:28:37 by tpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PhoneBook::PhoneBook(void): _contacts(), _index(0) {}	// initialize _contacts to NULL and _index to 0

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PhoneBook::~PhoneBook(void)				// delete all contacts (free memory)
{
	for (int i = 0; i < 8; i++) {
		delete _contacts[i];
	}
}

/*
** --------------------------------- METHODS ----------------------------------
*/

// PRIVATE METHODS

void	PhoneBook::_setContact(Contact *contact)
{
	if (_index == 8)
	{
		delete _contacts[0];					// delete the oldest contact
		for (int i = 0; i < 7; i++) 			// shift all contacts to the left	
			_contacts[i] = _contacts[i + 1];
		_contacts[7] = contact;
	}
	else
	{
		_contacts[_index] = contact;
		_index++;
	}
}

Contact	*PhoneBook::_getContact(int index) const
{
	if (index < 0 || index >= 8)
		return (NULL);
	return (_contacts[index]);
}

void	PhoneBook::_printPhoneBook(void) const
{
	std::string input;

	system("clear");
	if (_index == 0) 
	{
		std::cout << "Your PhoneBook is empty!" << std::endl;
		return ;
	}
	else
	{
		std::cout << "\n\t*———————————————————————PHONEBOOK———————————————————————*" << std::endl;
		std::cout << "\t|                                                       |" << std::endl;
		std::cout << "\t|                                                       |" << std::endl;
		std::cout << "\t|     ┌——————————┬——————————┬——————————┬——————————┐     |" << std::endl;
		std::cout << "\t|     |     Index|First Name| Last Name|  Nickname|     |" << std::endl;
		std::cout << "\t|     ├——————————┼——————————┼——————————┼——————————┤     |" << std::endl;
		for (int i = 0; i < 8; i++) 
		{
			if (_contacts[i] != NULL) 
			{
				std::cout << "\t| ";
				std::cout << "    |" << std::setw(10) << (i + 1) << "|";
				_contacts[i]->getFirstName().length() > 10 ?
				std::cout << std::setw(10) << _contacts[i]->getFirstName().substr(0, 9) + ".|" :
				std::cout << std::setw(10) << _contacts[i]->getFirstName() << "|";
				_contacts[i]->getLastName().length() > 10 ?
				std::cout << std::setw(10) << _contacts[i]->getLastName().substr(0, 9) + ".|" :
				std::cout << std::setw(10) << _contacts[i]->getLastName() << "|";
				_contacts[i]->getNickName().length() > 10 ?
				std::cout << std::setw(10) << _contacts[i]->getNickName().substr(0, 9) + ".|" :
				std::cout << std::setw(10) << _contacts[i]->getNickName() << "|";
				std::cout << "     |"<< std::endl;
				if (i != (_index - 1))
					std::cout << "\t|     ├——————————┼——————————┼——————————┼——————————┤     |" << std::endl;
				else
					std::cout << "\t|     └——————————┴——————————┴——————————┴——————————┘     |" << std::endl;
			}
		}
		std::cout << "\t|                                                       |" << std::endl;
		std::cout << "\t*———————————————————————*********———————————————————————*" << std::endl;
	}
}

void	PhoneBook::_printContact(Contact *contact, int index) const
{
	std::string input;
	
	system("clear");
	std::cout << "\n\t*————————————————————————CONTACT————————————————————————*" << std::endl
			  << "\t|                                                       |" << std::endl
			  << "\t|                                                       |" << std::endl
			  << "\t|     ┌————————————————┬——————————————————————————┐     |" << std::endl
			  << "\t|     |  Field         |  Details                 |     |" << std::endl
			  << "\t|     ├————————————————┼——————————————————————————┤     |" << std::endl
			  << "\t|     |  Index         |  " << std::setw(23) << index << " |     |" << std::endl
			  << "\t|     ├————————————————┼——————————————————————————┤     |" << std::endl
			  << "\t|     |  First Name    |  " << std::setw(23) << contact->getFirstName() << " |     |" << std::endl
			  << "\t|     ├————————————————┼——————————————————————————┤     |" << std::endl
			  << "\t|     |  Last Name     |  " << std::setw(23) << contact->getLastName() << " |     |" << std::endl
			  << "\t|     ├————————————————┼——————————————————————————┤     |" << std::endl
			  << "\t|     |  Nickname      |  " << std::setw(23) << contact->getNickName() << " |     |" << std::endl
			  << "\t|     ├————————————————┼——————————————————————————┤     |" << std::endl
			  << "\t|     |  Phone Number  |  " << std::setw(23) << contact->getPhoneNumber() << " |     |" << std::endl
			  << "\t|     ├————————————————┼——————————————————————————┤     |" << std::endl
			  << "\t|     |  Darkest Secret|  " << std::setw(23) << contact->getDarkestSecret() << " |     |" << std::endl
			  << "\t|     └————————————————┴——————————————————————————┘     |" << std::endl
			  << "\t|                                                       |" << std::endl
			  << "\t|                                                       |" << std::endl
			  << "\t*———————————————————————*********———————————————————————*" << std::endl;
	std::cout << "\n\t\t Would you like to search again? (y/n): ";
	std::getline(std::cin, input);
	if (input == "y" || input == "Y")
		this->searchContact();
	else if (input != "n" && input != "N")
		std::cout << "\t Invalid input. Exiting..." << std::endl;	
}

// PUBLIC METHODS

void	PhoneBook::addContact() 
{
	std::string	input;
	Contact 	*contact = new Contact();

	system("clear");
	std::cout << std::endl
			  << "\t*——————————————————————————NEW——————————————————————————*" << std::endl
			  << "\t|                                                       |" << std::endl
			  << "\t|     ———————————————————————————————————————————       |" << std::endl;
	contact->setFirstName(getInput("First Name"));
	std::cout << "\t|     ———————————————————————————————————————————       |" << std::endl;
	contact->setLastName(getInput("Last Name"));
	std::cout << "\t|     ———————————————————————————————————————————       |" << std::endl;
	contact->setNickName(getInput("Nickname: "));
	std::cout << "\t|     ———————————————————————————————————————————       |" << std::endl;
	contact->setPhoneNumber(getInput("Phone Number"));
	std::cout << "\t|     ———————————————————————————————————————————       |" << std::endl;
	contact->setDarkestSecret(getInput("Darkest Secret"));
	std::cout << "\t|                                                       |" << std::endl
			  << "\t*———————————————————————*********———————————————————————*" << std::endl;
	
	_setContact(contact);

	std::cout << "\n\t\t\t\tContact added!" << std::endl << std::endl;
	
	while (input != "n" && input != "N" && input != "y" && input != "Y")
	{
		std::cout << "\t\tWould you like to add another one? (y/n): ";
		std::getline(std::cin, input);
		if (input == "y" || input == "Y")
			addContact();
		else if (input != "n" && input != "N")
		{
			system("clear");
			std::cout << "\t\t\tInvalid input!" << std::endl;
		}
		system("clear");
	}
	return ;
}

void	PhoneBook::searchContact() const
{
	std::string input;
	int			index;

	system("clear");
	if (_index == 0) 											// if the phonebook is empty
	{
		std::cout << "\t\t\t\t\tYour PhoneBook is empty!\n" << std::endl;
		std::cout << "\t\t\t\t    Would you like to add a contact?" << std::endl;
		std::cout << "\t\t\tEnter \"y\" to add a contact or anything else to exit: ";
		std::getline(std::cin, input);
		if (input == "y" || input == "Y")
			PhoneBook().addContact();
		return ;
	}
	_printPhoneBook();											// print the phonebook
	index = -1;
	std::cout << std::endl << "\n\t\t\t\tEnter index: ";		// ask for the index
	std::getline(std::cin, input);
	index = std::stoi(input) - 1;								// convert the input to int
	if (index >= 0 && index < 8 && _contacts[index] != NULL)
		_printContact(_contacts[index], index); 				// print the selected contact
	else
		std::cout << "Invalid index!" << std::endl;
}





/*
** --------------------------------- ACCESSOR ---------------------------------
*/





/* ************************************************************************** */