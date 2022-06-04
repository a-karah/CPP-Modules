/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarahan <akarahan@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 11:49:57 by akarahan          #+#    #+#             */
/*   Updated: 2022/05/31 17:42:14 by akarahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::_debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my "
		<< "7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!";
	std::cout << std::endl;
	std::cout << std::endl;
}

void	Harl::_info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. "
		<< "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!";
	std::cout << std::endl;
	std::cout << std::endl;
}

void	Harl::_warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. "
		<< "I’ve been coming for years whereas you started working here since last month.";
	std::cout << std::endl;
	std::cout << std::endl;
}

void	Harl::_error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now.";
	std::cout << std::endl;
	std::cout << std::endl;
}

void	Harl::complain(std::string level)
{
	void	(Harl::*fnPtr[4])(void);
	int		levelNum;

	fnPtr[0] = &Harl::_debug;
	fnPtr[1] = &Harl::_info;
	fnPtr[2] = &Harl::_warning;
	fnPtr[3] = &Harl::_error;
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
			levelNum = i;
	}
	switch (levelNum)
	{
	case 0:
		(this->*fnPtr[0])();
	case 1:
		(this->*fnPtr[1])();
	case 2:
		(this->*fnPtr[2])();
	case 3:
		(this->*fnPtr[3])();
		break;

	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}
