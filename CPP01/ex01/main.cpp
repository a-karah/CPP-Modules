/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarahan <akarahan@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 17:07:08 by akarahan          #+#    #+#             */
/*   Updated: 2022/05/31 12:52:30 by akarahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *a = zombieHorde(10, "Shawn");
	for (int i = 0; i < 10; i++)
	{
		std::cout << i << ": ";
		a->announce();
	}
	delete[] a;
	return (0);
}
