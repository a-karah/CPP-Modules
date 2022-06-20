/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarahan <akarahan@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 17:44:53 by akarahan          #+#    #+#             */
/*   Updated: 2022/06/07 14:23:16 by akarahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	_type = "Animal";
	std::cout << "Animal: default constructor called" << std::endl;
}

Animal::Animal(std::string type)
{
	_type = type;
}

Animal::Animal(const Animal &copyObj)
{
	_type = copyObj._type;
}

Animal &Animal::operator = (const Animal &copyObj)
{
	this->_type = copyObj._type;
	return (*this);
}

Animal::~Animal(void)
{
	std::cout << "Animal: destructor called" << std::endl;
}

const std::string	&Animal::getType(void) const
{
	return (this->_type);
}

void	Animal::makeSound(void) const
{
	std::cout << "Animal sound" << std::endl;
}
