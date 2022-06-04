/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarahan <akarahan@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 21:53:29 by akarahan          #+#    #+#             */
/*   Updated: 2022/04/30 23:01:50 by akarahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"

int	main( void )
{
	Point	a(0, 0);
	Point	b(1, 2);
	Point	c(2, -2);
	Point	p1(2, 1);
	Point	p2(1, 1);
	Point	p3(0.5, 1);

	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;
	std::cout << p1 << std::endl;
	std::cout << p2 << std::endl;
	std::cout << p3 << std::endl;

	std::cout << "p1 is " << (bsp(a, b, c, p1) ? "inside" : "outside") << std::endl;
	std::cout << "p2 is " << (bsp(a, b, c, p2) ? "inside" : "outside") << std::endl;
	std::cout << "p3 is " << (bsp(a, b, c, p3) ? "inside" : "outside") << std::endl;

	return 0;
}
