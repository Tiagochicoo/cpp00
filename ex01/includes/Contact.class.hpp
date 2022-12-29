/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42Lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 11:06:44 by tpereira          #+#    #+#             */
/*   Updated: 2022/12/29 11:55:43 by tpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class Contact
{
	private:
		int			index;
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string darkestSecret;
		int			phoneNumber;
		int			age;

	public:
		Contact();
		~Contact();

	void	hello() {
		std::cout << "Index: " << index	<< std::endl;
		std::cout << "Phone number: " << phoneNumber << std::endl;
		std::cout << "Age: " << age	<< std::endl;
	}
};

#endif /* ********************************************************* CONTACT_H */