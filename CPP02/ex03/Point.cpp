/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarahan <akarahan@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 21:57:39 by akarahan          #+#    #+#             */
/*   Updated: 2022/06/02 14:59:11 by akarahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0) {}

Point::~Point() {}

Point::Point(const float x, const float y) : _x(x), _y(y) {}

Point::Point(const Point &pt) : _x(pt._x), _y(pt._y) {}

Point &Point::operator = (const Point &pt)
{
	(void)pt;

	return (*this);
}

Fixed	Point::getX(void) const
{
	return (this->_x);
}

Fixed	Point::getY(void) const
{
	return (this->_y);
}

std::ostream &operator << (std::ostream &out, const Point &pt)
{
	out << "(" << pt.getX() << ", " << pt.getY() << ")";
	return (out);
}
