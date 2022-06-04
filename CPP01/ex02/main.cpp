/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarahan <akarahan@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 18:03:50 by akarahan          #+#    #+#             */
/*   Updated: 2022/05/31 13:07:42 by akarahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

int	main(void)
{
	std::string	brian = "HI THIS IS BRAIN";
	std::string	*stringPTR = &brian;
	std::string	&stringREF = brian;

	std::cout << std::setw(39) << std::left << "string address" << &brian << std::endl;
	std::cout << std::setw(39) << std::left << "string address shown through pointer" << stringPTR << std::endl;
	std::cout << std::setw(39) << std::left << "string address shown through reference" << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << std::setw(39) << "string value: " << brian << std::endl;
	std::cout << std::setw(39) << "string value shown through pointer: " << *stringPTR << std::endl;
	std::cout << std::setw(39) << "string value shown through reference: " << stringREF << std::endl;

	return (0);
}
