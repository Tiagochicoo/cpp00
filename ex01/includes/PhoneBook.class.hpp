/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42Lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 11:07:23 by tpereira          #+#    #+#             */
/*   Updated: 2022/12/29 11:54:55 by tpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include "./Contact.class.hpp"

class PhoneBook
{
	private:
		Contact	contacts[8];

	public:

		PhoneBook();
		~PhoneBook();


};

#endif /* ******************************************************* PHONEBOOK_H */