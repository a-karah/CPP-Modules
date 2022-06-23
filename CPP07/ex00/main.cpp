/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarahan <akarahan@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 21:38:57 by akarahan          #+#    #+#             */
/*   Updated: 2022/06/20 18:57:26 by akarahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "whatever.hpp"

int	main(void)
{
	int	x = 0;
	int	y = 20;
	float	a = 2.4f;
	float	b = 2.3f;
	char	c = 'c';
	char	d = 'f';

	std::cout << "x: " << x << " y: " << y << std::endl;
	swap(x, y);
	std::cout << "x: " << x << " y: " << y << std::endl;
	std::cout << "min: " << min<int>(x, y) << std::endl;
	std::cout << "max: " << max<int>(x, y) << std::endl;

	std::cout << "a: " << a << " b: " << b << std::endl;
	swap(a, b);
	std::cout << "a: " << a << " b: " << b << std::endl;
	std::cout << "min: " << min<float>(a, b) << std::endl;
	std::cout << "max: " << max<float>(a, b) << std::endl;

	std::cout << "c: " << c << " d: " << d << std::endl;
	swap(c, d);
	std::cout << "c: " << c << " d: " << d << std::endl;
	std::cout << "min: " << min<char>(c, d) << std::endl;
	std::cout << "max: " << max<char>(c, d) << std::endl;

	return (0);
}
