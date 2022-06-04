/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarahan <akarahan@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 23:05:38 by akarahan          #+#    #+#             */
/*   Updated: 2022/06/04 12:36:04 by akarahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap	bot("Hasan");

	bot.attack("Mehmet");
	bot.takeDamage(2);
	bot.beRepaired(1);
	bot.takeDamage(25);
	bot.guardGate();
	bot.highFivesGuys();
	bot.whoAmI();
	return (0);
}
