/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarahan <akarahan@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 17:57:33 by akarahan          #+#    #+#             */
/*   Updated: 2022/06/08 11:02:24 by akarahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	std::cout << "Impossible grade test" << std::endl;
	try
	{
		Bureaucrat	*b1 = new Bureaucrat("Mike", 0);
		(void)b1;
	}
	catch (std::exception &e)
	{
		std::cerr << "Test 1: " << e.what() << std::endl;
	}

	try
	{
		Bureaucrat b2 = Bureaucrat("Oleg", 200);
		(void)b2;
	}
	catch (std::exception &e)
	{
		std::cerr << "Test 2: " << e.what() << std::endl;
		std::cerr << std::endl;
	}

	std::cout << "Increasing grade till exception hit" << std::endl;
	try
	{
		Bureaucrat b3 = Bureaucrat("Anna", 10);
		for (int i = 0; i < 10; ++i)
		{
			b3.increaseGrade();
			std::cout << b3 << std::endl;
		}
	}
	catch (std::exception &e)
	{
		std::cerr << "Test 3: " << e.what() << std::endl;
		std::cerr << std::endl;
	}

	std::cout << "Decreasing grade till exception hit" << std::endl;
	try
	{
		Bureaucrat b4 = Bureaucrat("Yuki", 140);
		for (int i = 10; i > -1; --i)
		{
			b4.decreaseGrade();
			std::cout << b4 << std::endl;
		}
	}
	catch (std::exception &e)
	{
		std::cerr << "Test 4: " << e.what() << std::endl;
		std::cerr << std::endl;
	}

	return (0);
}
