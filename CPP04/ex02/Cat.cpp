/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarahan <akarahan@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 17:51:54 by akarahan          #+#    #+#             */
/*   Updated: 2022/06/07 14:32:49 by akarahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : AAnimal("Cat")
{
	this->_brain = new Brain();
	std::cout << "Cat: default constructor called" << std::endl;
}

Cat::Cat(const Cat &copyObj) : AAnimal(copyObj)
{
	std::cout << "Cat: copy constructor is called" << std::endl;
	*this = copyObj;
}

Cat	&Cat::operator = (const Cat &copyObj)
{
	if (this != &copyObj)
	{
		this->_type = copyObj._type;
		this->_brain = new Brain(*(copyObj._brain));
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat: destructor is called" << std::endl;
	delete _brain;
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow!!!" << std::endl;
}

Brain	*Cat::getBrain(void) const
{
	return (this->_brain);
}
