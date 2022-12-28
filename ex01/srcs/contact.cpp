/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42Lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 16:03:08 by tpereira          #+#    #+#             */
/*   Updated: 2022/12/28 16:06:34 by tpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

class Contact {

	public:
		
		int		index;
		char	*firstname;
		char	*lastname;
		char	*nickname;

		Contact(void);
		~Contact(void);
};

#endif