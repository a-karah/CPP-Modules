/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarahan <akarahan@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 23:05:38 by akarahan          #+#    #+#             */
/*   Updated: 2022/06/04 12:11:30 by akarahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	bot("Hasan");

	bot.attack("Mehmet");
	bot.takeDamage(2);
	bot.beRepaired(1);
	bot.takeDamage(25);
	bot.guardGate();
	return (0);
}
