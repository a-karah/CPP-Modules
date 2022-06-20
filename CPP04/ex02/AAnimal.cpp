/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarahan <akarahan@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 17:44:53 by akarahan          #+#    #+#             */
/*   Updated: 2022/06/07 14:29:35 by akarahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	_type = "Animal";
	std::cout << "Animal: default constructor called" << std::endl;
}

AAnimal::AAnimal(std::string type)
{
	_type = type;
}

AAnimal::AAnimal(const AAnimal &copyObj)
{
	_type = copyObj._type;
}

AAnimal &AAnimal::operator = (const AAnimal &copyObj)
{
	this->_type = copyObj._type;
	return *this;
}

AAnimal::~AAnimal(void)
{
	std::cout << "Animal: destructor called" << std::endl;
}

const std::string	&AAnimal::getType(void) const
{
	return (this->_type);
}

void	AAnimal::makeSound(void) const
{
	std::cout << "Animal sound" << std::endl;
}
