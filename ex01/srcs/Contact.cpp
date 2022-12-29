/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42Lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 11:06:40 by tpereira          #+#    #+#             */
/*   Updated: 2022/12/29 17:42:10 by tpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

// Contact::Contact()
// {
// 	std::cout << "Contact created!" << std::endl;
// }

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

// Contact::~Contact()
// {
// 	std::cout << "Contact destroyed!" << std::endl;
// }

/*
** --------------------------------- METHODS ----------------------------------
*/



/*
** --------------------------------- ACCESSOR ---------------------------------
*/

// SETTERS

void	Contact::setFirstName(std::string firstName)
{
	this->firstName = firstName;
}

void	Contact::setLastName(std::string lastName)
{
	this->lastName = lastName;
}

void	Contact::setNickName(std::string nickName)
{
	this->nickName = nickName;
}

void	Contact::setDarkestSecret(std::string darkestSecret)
{
	this->darkestSecret = darkestSecret;
}

void	Contact::setPhoneNumber(std::string phoneNumber)
{
	this->phoneNumber = phoneNumber;
}

void	Contact::setIndex(int index)
{
	this->index = index;
}

// GETTERS

std::string	Contact::getFirstName() const
{
	return (this->firstName);
}

std::string	Contact::getLastName() const
{
	return (this->lastName);
}

std::string	Contact::getNickName() const
{
	return (this->nickName);
}

std::string	Contact::getDarkestSecret() const
{
	return (this->darkestSecret);
}

std::string	Contact::getPhoneNumber() const
{
	return (this->phoneNumber);
}

int	Contact::getIndex() const
{
	return (this->index);
}

/* ************************************************************************** */