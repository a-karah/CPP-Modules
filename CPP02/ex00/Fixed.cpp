/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarahan <akarahan@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 12:47:35 by akarahan          #+#    #+#             */
/*   Updated: 2022/06/02 14:40:58 by akarahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _fixedNum(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fx)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fx;
}

Fixed &Fixed::operator = (const Fixed &fx)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_fixedNum = fx.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function" << std::endl;
	return (this->_fixedNum);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function" << std::endl;
	this->_fixedNum = raw;
}
