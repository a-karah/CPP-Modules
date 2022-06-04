/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarahan <akarahan@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 21:39:36 by akarahan          #+#    #+#             */
/*   Updated: 2022/04/26 16:42:51 by akarahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	book;
	int			idx;
	std::string	in;

	idx = 0;
	while (in.compare("EXIT"))
	{
		std::cout << "Choose one of this (ADD, SEARCH, EXIT): ";
		std::getline(std::cin, in);
		if (!in.compare("ADD"))
		{
			book.addContact(idx);
			++idx;
			if (idx == 8)
				idx = 0;
		}
		else if (!in.compare("SEARCH"))
			book.searchContact();
	}
	return (0);
}
