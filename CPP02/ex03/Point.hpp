/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarahan <akarahan@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 21:56:39 by akarahan          #+#    #+#             */
/*   Updated: 2022/04/30 22:48:15 by akarahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
	private:
		Fixed const	_x;
		Fixed const _y;

	public:
		Point();
		Point(const float x, const float y);
		Point(const Point &pt);
		Point &operator = (const Point &pt);
		~Point();

		Fixed	getX(void) const;
		Fixed	getY(void) const;
};

std::ostream &operator << (std::ostream &out, const Point &pt);
bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif
