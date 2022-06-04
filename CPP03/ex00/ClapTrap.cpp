/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarahan <akarahan@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 23:05:32 by akarahan          #+#    #+#             */
/*   Updated: 2022/06/04 11:43:33 by akarahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() :
	_name(""),
	_hitPts(0),
	_energyPts(0),
	_attackDmg(0)
{
	std::cout << "Default constructor is called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) :
	_name(name),
	_hitPts(10),
	_energyPts(10),
	_attackDmg(0)
{
	std::cout << "Name constructor is called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copyObj)
{
	std::cout << "Copy constructor is called" << std::endl;
	*this = copyObj;
}

ClapTrap	&ClapTrap::operator = (const ClapTrap &copyObj)
{
	std::cout << "Copy assignment constructor is called" << std::endl;
	if (this != &copyObj)
	{
		_name = copyObj._name;
		_hitPts = copyObj._hitPts;
		_energyPts = copyObj._energyPts;
		_attackDmg = copyObj._attackDmg;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor is called" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (_energyPts == 0)
	{
		std::cout << "ClapTrap " << this->_name;
		std::cout << "don't have enough energy to attack" << std::endl;
	}
	else
	{
		--this->_energyPts;	
		std::cout << "ClapTrap " << this->_name << " attacks " << target;
		std::cout << ", causing " << this->_attackDmg << " points of damage!" << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if ((int)(this->_hitPts - amount) <= 0)
	{
		this->_hitPts = 0;
		std::cout << "ClapTrap " << this->_name << " is dead!" << std::endl;
	}
	else
	{
		this->_hitPts -= amount;
		std::cout << "ClapTrap " << this->_name << " takes " << amount;
		std::cout << " damage; ";
		std::cout << this->_hitPts << " HP and ";
		std::cout << this->_energyPts << " EP left!" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPts == 0)
	{
		std::cout << "ClapTrap " << this->_name;
		std::cout << " don't have enough energy to repair" << std::endl;
	}
	else
	{
		--this->_energyPts;
		this->_hitPts += amount;
		std::cout << "ClapTrap " << this->_name << " heals " << amount;
		std::cout << " of hit points; ";
		std::cout << this->_hitPts << " HP and ";
		std::cout << this->_energyPts << " EP left!" << std::endl;
	}
}
