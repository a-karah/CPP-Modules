/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarahan <akarahan@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 21:39:09 by akarahan          #+#    #+#             */
/*   Updated: 2022/04/26 16:46:23 by akarahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	PhoneBook::addContact(int idx)
{
	list[idx].addContact();
}

void	PhoneBook::searchContact(void)
{
	std::string	in;
	int			idx;
	
	printTable();
	std::cout << "Select contact to show: ";
	std::getline(std::cin, in);
	std::stringstream(in) >> idx;
	if (idx > 0 && idx < 9)
	{
		if (this->list[idx - 1].getName().empty())
			std::cout << "Contact is empty" << std::endl;
		else
			this->list[idx - 1].printContact(idx);
	}
	else
		std::cout << "Can't find contact" << std::endl;
}

void	PhoneBook::printTable(void)
{
	std::cout << std::setw(11) << "Index|";
	std::cout << std::setw(11) << "Name|";
	std::cout << std::setw(11) << "Last Name|";
	std::cout << std::setw(11) << "Nickname|";
	std::cout << std::endl;
	for (int idx = 0; idx < 8; idx++)
	{
		if (!this->list[idx].getName().empty())
		{
			for (int i = 0; i < 44; i++)
				std::cout << "-";
			std::cout << std::endl;
			std::cout << std::setw(10) << idx + 1 << "|";
			std::cout << std::setw(10) << truncate(this->list[idx].getName(), 10) << "|";
			std::cout << std::setw(10) << truncate(this->list[idx].getLastName(), 10) << "|";
			std::cout << std::setw(10) << truncate(this->list[idx].getNickname(), 10) << std::endl;
		}
	}
}
