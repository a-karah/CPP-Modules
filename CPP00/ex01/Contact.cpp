/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarahan <akarahan@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 20:55:33 by akarahan          #+#    #+#             */
/*   Updated: 2022/04/26 16:51:57 by akarahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{}

Contact::~Contact(void)
{}

void	Contact::addContact(void)
{
	std::string	in;
	std::cout << "Enter name: ";
	name = takeInput();
	std::cout << "Enter last name: ";
	last_name = takeInput();
	std::cout << "Enter nickname: ";
	nickname = takeInput();
	std::cout << "Enter phone number: ";
	phone = takeInput();
	std::cout << "Enter your darkest secret: ";
	secret = takeInput();
}

void	Contact::printContact(int idx)
{
	std::cout << std::setw(11) << "Contact: " << idx << std::endl;
	std::cout << std::setw(11) << "Name: " << name << std::endl;
	std::cout << std::setw(11) << "Last Name: " << last_name << std::endl;
	std::cout << std::setw(11) << "Nickname: " << nickname << std::endl;
	std::cout << std::setw(11) << "Phone: " << phone << std::endl;
	std::cout << std::setw(11) << "Secret: " << secret << std::endl;
}

std::string	Contact::getName(void)
{
	return (this->name);
}

std::string	Contact::getLastName(void)
{
	return (this->last_name);
}

std::string	Contact::getNickname(void)
{
	return (this->nickname);
}
