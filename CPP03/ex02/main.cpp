/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarahan <akarahan@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 23:05:38 by akarahan          #+#    #+#             */
/*   Updated: 2022/05/01 11:58:38 by akarahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	bot("Hasan");

	bot.attack("Mehmet");
	bot.takeDamage(2);
	bot.beRepaired(1);
	bot.takeDamage(25);
	bot.highFivesGuys();
	return (0);
}
