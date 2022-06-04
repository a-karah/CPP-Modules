/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarahan <akarahan@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 11:19:23 by akarahan          #+#    #+#             */
/*   Updated: 2022/06/04 12:33:41 by akarahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("Unknown")
{
	_hitPts = 100;
	_energyPts = 50;
	_attackDmg = 20;
	std::cout << "ScavTrap: Default constructor is called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_hitPts = 100;
	_energyPts = 50;
	_attackDmg = 20;
	std::cout << "ScavTrap: Name constructor is called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copyObj)
{
	std::cout << "ScavTrap: Copy constructor is called" << std::endl;
	*this = copyObj;
}

ScavTrap	&ScavTrap::operator = (const ScavTrap &copyObj)
{
	std::cout << "ScavTrap: Copy assignment constructor is called" << std::endl;
	if (this != &copyObj)
	{
		_name = copyObj._name;
		_hitPts = copyObj._hitPts;
		_energyPts = copyObj._energyPts;
		_attackDmg = copyObj._attackDmg;
	}
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap: Destructor is called" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (_energyPts == 0)
	{
		this->_energyPts = 0;
		std::cout << "ScavTrap " << this->_name;
		std::cout << "don't have enough energy to attack" << std::endl;
	}
	else
	{
		--this->_energyPts;	
		std::cout << "ScavTrap " << this->_name << " attacks " << target;
		std::cout << ", causing " << this->_attackDmg << " points of damage!" << std::endl;
	}
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->_name << " is in Gate keeper mode" << std::endl;
}
