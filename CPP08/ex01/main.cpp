/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarahan <akarahan@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 14:40:11 by akarahan          #+#    #+#             */
/*   Updated: 2022/06/23 16:48:00 by akarahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "Span.hpp"

int	main(void)
{
	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	Span	sp1 = Span(10000);
	int		arr[10000];

	srand(time(NULL));
	for (int i = 0; i < 10000; ++i)
		arr[i] = rand() % 1000;

	std::vector<int> vec(arr, arr + 10000);
	sp1.addNumber(vec.begin(), vec.end());
	std::cout << sp1.shortestSpan() << std::endl;
	std::cout << sp1.longestSpan() << std::endl;

	Span sp2 = Span(0);

	return (0);
}
