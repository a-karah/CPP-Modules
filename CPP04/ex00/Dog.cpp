/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarahan <akarahan@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 17:50:32 by akarahan          #+#    #+#             */
/*   Updated: 2022/06/07 14:23:31 by akarahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog: default constructor is called" << std::endl;
}

Dog::Dog(const Dog &copyObj) : Animal(copyObj)
{
	this->_type = copyObj._type;
}

Dog	&Dog::operator = (const Dog &copyObj)
{
	this->_type = copyObj._type;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog: destructor is called" << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "Bark!!!" << std::endl;
}
