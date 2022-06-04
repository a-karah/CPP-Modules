/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarahan <akarahan@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 11:51:27 by akarahan          #+#    #+#             */
/*   Updated: 2022/04/27 12:43:12 by akarahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	Harl	test;

	if (ac != 2)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return (0);
	}
	test.complain(std::string(av[1]));
	return (0);
}
