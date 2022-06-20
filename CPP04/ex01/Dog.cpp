/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarahan <akarahan@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 17:50:32 by akarahan          #+#    #+#             */
/*   Updated: 2022/06/07 14:21:21 by akarahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	this->_brain = new Brain();
	std::cout << "Dog: default constructor is called" << std::endl;
}

Dog::Dog(const Dog &copyObj) : Animal(copyObj)
{
	std::cout << "Dog: copy constructor is called" << std::endl;
	this->_brain = new Brain();
	*this = copyObj;
}

Dog	&Dog::operator = (const Dog &copyObj)
{
	if (this != &copyObj)
	{
		this->_type = copyObj._type;
		*(this->_brain) = *(copyObj._brain);
	}
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog: destructor is called" << std::endl;
	delete this->_brain;
}

void	Dog::makeSound(void) const
{
	std::cout << "Bark!!!" << std::endl;
}

Brain	*Dog::getBrain(void) const
{
	return (this->_brain);
}
