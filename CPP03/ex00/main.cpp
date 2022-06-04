/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarahan <akarahan@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 23:05:38 by akarahan          #+#    #+#             */
/*   Updated: 2022/06/04 11:32:59 by akarahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	bot("Hasan");

	bot.attack("Mehmet");
	bot.takeDamage(2);
	bot.beRepaired(1);
	bot.takeDamage(25);
	for (int i = 0; i < 10; ++i)
		bot.beRepaired(3);
	for (int i = 0; i < 10; ++i)
		bot.takeDamage(4);
	return (0);
}
