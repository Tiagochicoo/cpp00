/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42Lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 11:06:44 by tpereira          #+#    #+#             */
/*   Updated: 2022/12/29 17:42:16 by tpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include "./main.hpp"

class Contact											// Class
{
	private:											// Private attributes
		int			index;	
		std::string firstName;	
		std::string lastName;
		std::string nickName;
		std::string darkestSecret;
		std::string	phoneNumber;

	public:												// Public attributes
		// Contact();									// Constructor
		// ~Contact();									// Destructor

		void		setFirstName(std::string firstName);	// Methods
		void		setLastName(std::string lastName);
		void		setNickName(std::string nickName);
		void		setDarkestSecret(std::string darkestSecret);
		void		setPhoneNumber(std::string phoneNumber);
		void		setIndex(int index);
		std::string	getFirstName(void) const;
		std::string	getLastName(void) const;
		std::string	getNickName(void) const;
		std::string	getDarkestSecret(void) const;
		std::string	getPhoneNumber(void) const;
		int			getIndex(void) const;
		//void		showContact(void) const;
};

#endif /* ********************************************************* CONTACT_H */