/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarahan <akarahan@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 17:51:54 by akarahan          #+#    #+#             */
/*   Updated: 2022/06/07 14:23:42 by akarahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat: default constructor called" << std::endl;
}

Cat::Cat(const Cat &copyObj) : Animal(copyObj)
{
	*this = copyObj;
}

Cat	&Cat::operator = (const Cat &copyObj)
{
	this->_type = copyObj._type;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat: destructor is called" << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow!!!" << std::endl;
}
