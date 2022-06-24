/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarahan <akarahan@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 13:18:52 by akarahan          #+#    #+#             */
/*   Updated: 2022/06/24 14:23:23 by akarahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>
#include <iostream>
#include <iomanip>
#include <vector>
#include <deque>
#include <list>
#include <cstdlib>
#include "easyfind.hpp"

int	main(void)
{
	int arr[20];
	srand(time(NULL));

	std::cout << "Array: " << std::endl;
	for (int i = 0; i < 20; ++i)
		std::cout << std::setw(4) << i;
	std::cout << std::endl;
	for (int i = 0; i < 20; ++i)
	{
		arr[i] = rand() % 1000;
		std::cout << std::setw(4) << arr[i];
	}
	std::cout << std::endl;

	std::cout << "Vector: " << std::endl;
	std::vector<int> vec(arr, arr + 20);
	for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it)
		std::cout << std::setw(4) << *it;
	std::cout << std::endl;

	std::cout << "Deque: " << std::endl;
	std::deque<int>	deq(arr, arr + 20);
	for (std::deque<int>::iterator it = deq.begin(); it != deq.end(); ++it)
		std::cout << std::setw(4) << *it;
	std::cout << std::endl;

	std::cout << "List: " << std::endl;
	std::list<int>	lst(arr, arr + 20);
	for (std::list<int>::iterator it = lst.begin(); it != lst.end(); ++it)
		std::cout << std::setw(4) << *it;
	std::cout << std::endl;

	// Test finding number
	std::cout << std::endl;
	std::cout << *(easyfind(vec, arr[10])) << std::endl;
	std::cout << *(easyfind(deq, arr[10])) << std::endl;
	std::cout << *(easyfind(lst, arr[10])) << std::endl;
	std::cout << std::endl;

	// Test find exception
	try
	{
		std::cout << *(easyfind(vec, 2000)) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << *(easyfind(deq, 2000)) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << *(easyfind(lst, 2000)) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return (0);
}
