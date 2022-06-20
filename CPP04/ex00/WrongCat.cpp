/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarahan <akarahan@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 12:51:18 by akarahan          #+#    #+#             */
/*   Updated: 2022/05/16 21:38:26 by akarahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->_type = "WrongCat";
	std::cout << "WrongCat: default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copyObj) : WrongAnimal(copyObj)
{
	*this = copyObj;
}

WrongCat	&WrongCat::operator = (const WrongCat &copyObj)
{
	this->_type = copyObj._type;
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat: destructor is called" << std::endl;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Meow!!!" << std::endl;
}
