/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarahan <akarahan@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 13:56:28 by akarahan          #+#    #+#             */
/*   Updated: 2022/06/02 14:31:34 by akarahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _fixedNum(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int num)
{
	std::cout << "Int constructor called" << std::endl;
	this->_fixedNum = num << this->_fracBits;
}

Fixed::Fixed(const float num)
{
	std::cout << "Float constructor called" << std::endl;
	this->_fixedNum = roundf(num * (1 << this->_fracBits));
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

std::ostream &operator << (std::ostream &out, const Fixed &fx)
{
	out << fx.toFloat();
	return (out);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	return (this->_fixedNum);
}

void	Fixed::setRawBits(int const raw)
{
	this->_fixedNum = raw;
}

float	Fixed::toFloat(void) const
{
	return ((double)this->_fixedNum / (double)(1 << this->_fracBits));
}

int	Fixed::toInt(void) const
{
	return (this->_fixedNum >> this->_fracBits);
}
