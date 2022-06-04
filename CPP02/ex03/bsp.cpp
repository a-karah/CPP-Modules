/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarahan <akarahan@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 21:57:19 by akarahan          #+#    #+#             */
/*   Updated: 2022/04/30 23:01:18 by akarahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed	det;

	det = (b.getX() - a.getX()) * (c.getY() - a.getY()) - (b.getY()) * (c.getX() - a.getX());
	return det * ((b.getX() - a.getX()) * (point.getY() - a.getY()) - (b.getY() - a.getX()) * (point.getX() - a.getX())) >= 0 &&
			det * ((c.getX() - b.getX()) * (point.getY() - b.getY()) - (c.getY() - b.getX()) * (point.getX() - b.getX())) >= 0 &&
			det * ((a.getX() - c.getX()) * (point.getY() - c.getY()) - (a.getY() - c.getX()) * (point.getX() - c.getX())) >= 0;
}
