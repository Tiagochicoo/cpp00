/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42Lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 11:07:23 by tpereira          #+#    #+#             */
/*   Updated: 2022/12/29 17:30:49 by tpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "./main.hpp"
# include "./PhoneBook.hpp"
# include "./Contact.hpp"

class PhoneBook								// Class
{
	private:								// Private attributes
		Contact	*_contacts[8];
		int		_index;
		void	_setContact(Contact *contact);
		Contact	*_getContact(int index) const;
		void	_printPhoneBook(void) const;
		void	_printContact(Contact *contact, int index) const;

	public:									// Public attributes

		PhoneBook();						// Constructor
		~PhoneBook();						// Destructor

		void	addContact(void);			// Method
		void	searchContact(void) const;

};

#endif /* ******************************************************* PHONEBOOK_H */