/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarahan <akarahan@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 20:55:37 by akarahan          #+#    #+#             */
/*   Updated: 2022/05/30 13:46:20 by akarahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
# include <iostream>
# include <iomanip>
# include "utils.hpp"

class Contact
{
	private:
		std::string	name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone;
		std::string	secret;

	public:
		Contact(void);
		~Contact(void);
		void		addContact(void);
		void		printContact(int idx);
		std::string	getName(void);
		std::string	getLastName(void);
		std::string	getNickname(void);
};

#endif
