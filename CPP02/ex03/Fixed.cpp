/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarahan <akarahan@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 21:53:36 by akarahan          #+#    #+#             */
/*   Updated: 2022/06/02 14:31:35 by akarahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _fixedNum(0) {}

Fixed::Fixed(const int num)
{
	this->_fixedNum = num << this->_fracBits;
}

Fixed::Fixed(const float num)
{
	this->_fixedNum = roundf(num * (1 << this->_fracBits));
}

Fixed::Fixed(const Fixed &fx)
{
	*this = fx;
}

Fixed &Fixed::operator = (const Fixed &fx)
{
	this->_fixedNum = fx.getRawBits();
	return (*this);
}

std::ostream &operator << (std::ostream &out, const Fixed &fx)
{
	out << fx.toFloat();
	return (out);
}

Fixed::~Fixed() {}

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


/* Comparison Operators */
bool Fixed::operator > (const Fixed &fx)
{
	if (this->_fixedNum > fx._fixedNum)
		return (true);
	return (false);
}

bool Fixed::operator < (const Fixed &fx)
{
	if (this->_fixedNum < fx._fixedNum)
		return (true);
	return (false);
}

bool Fixed::operator >= (const Fixed &fx)
{
	if (this->_fixedNum >= fx._fixedNum)
		return (true);
	return (false);
}

bool Fixed::operator <= (const Fixed &fx)
{
	if (this->_fixedNum <= fx._fixedNum)
		return (true);
	return (false);
}

bool Fixed::operator == (const Fixed &fx)
{
	if (this->_fixedNum == fx._fixedNum)
		return (true);
	return (false);
}

bool Fixed::operator != (const Fixed &fx)
{
	if (this->_fixedNum != fx._fixedNum)
		return (true);
	return (false);
}


/* Arithmetic Operators */
Fixed Fixed::operator + (const Fixed &fx)
{
	return (this->toFloat() + fx.toFloat());
}

Fixed Fixed::operator - (const Fixed &fx)
{
	return (this->toFloat() - fx.toFloat());
}

Fixed Fixed::operator * (const Fixed &fx)
{
	return (this->toFloat() * fx.toFloat());
}

Fixed Fixed::operator / (const Fixed &fx)
{
	return (this->toFloat() / fx.toFloat());
}


/* Increment/Decrement Operators */
Fixed &Fixed::operator ++ (void)
{
	this->_fixedNum++;
	return (*this);
}

Fixed &Fixed::operator -- (void)
{
	this->_fixedNum--;
	return (*this);
}

Fixed Fixed::operator ++ (int)
{
	Fixed	tmp(*this);

	this->operator++();
	return (tmp);
}

Fixed Fixed::operator -- (int)
{
	Fixed	tmp(*this);

	this->operator--();
	return (tmp);
}


/* Min & Max functions */
Fixed &Fixed::min(Fixed &fx1, Fixed &fx2)
{
	if (fx1._fixedNum > fx2._fixedNum)
		return (fx2);
	return (fx1);
}

Fixed &Fixed::max(Fixed &fx1, Fixed &fx2)
{
	if (fx1._fixedNum > fx2._fixedNum)
		return (fx1);
	return (fx2);
}

const Fixed &Fixed::min(const Fixed &fx1, const Fixed &fx2)
{
	if (fx1._fixedNum > fx2._fixedNum)
		return (fx2);
	return (fx1);
}

const Fixed &Fixed::max(const Fixed &fx1, const Fixed &fx2)
{
	if (fx1._fixedNum > fx2._fixedNum)
		return (fx1);
	return (fx2);
}
