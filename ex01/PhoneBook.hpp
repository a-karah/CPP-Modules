/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarahan <akarahan@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 21:39:12 by akarahan          #+#    #+#             */
/*   Updated: 2022/04/26 16:46:16 by akarahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <sstream>
# include "Contact.hpp"

class PhoneBook
{
	private:
		Contact list[8];

		void	printTable(void);

	public:
		void	addContact(int idx);
		void	searchContact(void);
};

#endif
