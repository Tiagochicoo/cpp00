/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42Lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 14:42:41 by tpereira          #+#    #+#             */
/*   Updated: 2022/12/28 15:38:04 by tpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Contact {

	public:
		
		int		index;
		char	*firstname;
		char	*lastname;
		char	*nickname;

		Contact(void);
		~Contact(void);
};

class PhoneBook {

	public:
		
		char	*command;
		Contact	*entry[8];

		PhoneBook(void);
		~PhoneBook(void);

		Contact add(void);
		Contact search(void);
		Contact exit(void);
};
