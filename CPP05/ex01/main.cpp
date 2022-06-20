/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarahan <akarahan@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 17:57:33 by akarahan          #+#    #+#             */
/*   Updated: 2022/06/09 12:21:03 by akarahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	// Test out of bounds exceptions
	try
	{
		Form	f1 = Form("B29", 0, 10);
	}
	catch (const std::exception &e)
	{
		std::cerr << "Test 1: " << e.what() << std::endl;
	}
	try
	{
		Form	f2 = Form("B30", 10, 0);
	}
	catch (const std::exception &e)
	{
		std::cerr << "Test 2: " << e.what() << std::endl;
	}
	try
	{
		Form	f3 = Form("B29", 151, 10);
	}
	catch (const std::exception &e)
	{
		std::cerr << "Test 3: " << e.what() << std::endl;
	}
	try
	{
		Form	f4 = Form("B30", 10, 151);
	}
	catch (const std::exception &e)
	{
		std::cerr << "Test 4: " << e.what() << std::endl;
	}
	std::cout << std::endl;

	// Test sign exception
	Bureaucrat	b1 = Bureaucrat("Anna", 26);
	Form		f5 = Form("B29", 25, 10);
	b1.signForm(f5);
	std::cout << b1 << std::endl;
	std::cout << f5 << std::endl;

	// Test sign operation
	b1.increaseGrade();
	b1.signForm(f5);
	std::cout << b1 << std::endl;
	std::cout << f5 << std::endl;

	return (0);
}
