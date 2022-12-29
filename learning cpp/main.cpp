/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42Lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 16:41:13 by tpereira          #+#    #+#             */
/*   Updated: 2022/12/28 20:10:35 by tpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class AbstractEmployee {
	virtual void	AskForPromotion() = 0;
};

class Contact:AbstractEmployee {
private:
	int			index;
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string	phoneNumber;
	std::string	darkestSecret;
	
public:
	void	setIndex(int i) {
		if (i < 9)
			index = i;
	}
	int	getIndex() {
		return (index);
	}
	void	setFirstName(std::string first) {
		firstName = first;
	}
	std::string	getFirstName() {
		return (firstName);
	}
	void	setLastName(std::string last) {
		lastName = last;
	}
	std::string	getLastName() {
		return (lastName);
	}
	void	setNickName(std::string nick) {
		nickName = nick;
	}
	std::string	getNickName() {
		return (nickName);
	}
	void	setPhoneNumber(std::string phone) {
		phoneNumber = phone;
	}
	std::string	getPhoneNumber() {
		return (phoneNumber);
	}
	void	setDarkestSecret(std::string secret) {
		darkestSecret = secret;
	}
	std::string	getDarkestSecret() {
		return (darkestSecret);
	}

	void	IntroduceYourself() {
		std::cout << "Index: " << index << std::endl;
		std::cout << "First name: " << firstName << std::endl;
		std::cout << "Last name: " << lastName << std::endl;
		std::cout << "Nick name: " << nickName << std::endl;
		std::cout << "Darkest Secret: " << darkestSecret << std::endl;
		std::cout << "Phone number: " << phoneNumber << std::endl << std::endl;
	}

	void	AskForPromotion() {
		if (index < 1)
			std::cout << firstName << " got promoted!" << std::endl;
		else
			std::cout << "Sorry " << firstName << ", no promotion for you!" << std::endl;
	}

	Contact(
		int i,
		std::string first,
		std::string last,
		std::string nick,
		std::string number,
		std::string secret) {
		firstName = first;
		lastName = last;
		nickName = nick;
		phoneNumber = number;
		index = i;
		darkestSecret = secret;
	}
};

int	main(void)
{
	Contact employee1 = Contact(0, "Bart", "Simpson", "El Barto", "+351 962589631", "Afraid of spiders!!");
	Contact employee2 = Contact(1, "Lisa", "Simpson", "Dork", "+351 91000555888", "Doesn't like music :(");

	employee1.AskForPromotion();
	employee2.AskForPromotion();

	return (0);
}
