/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarahan <akarahan@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 12:04:43 by akarahan          #+#    #+#             */
/*   Updated: 2022/06/04 12:34:32 by akarahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() :
	ClapTrap(),
	ScavTrap(),
	FragTrap()
{
	std::cout << "DiamondTrap: Default constructor is called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
{
	this->_name = name;
	ClapTrap::_name = name + "_clap_name";
	this->_hitPts = FragTrap::_hitPts;
	this->_energyPts = ScavTrap::_energyPts;
	this->_attackDmg = FragTrap::_attackDmg;
	std::cout << "DiamondTrap: Name constructor is called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copyObj)
{
	std::cout << "DiamondTrap: Copy constructor is called" << std::endl;
	*this = copyObj;
}

DiamondTrap	&DiamondTrap::operator = (const DiamondTrap &copyObj)
{
	std::cout << "DiamondTrap: Copy assignment constructor is called" << std::endl;
	if (this != &copyObj)
	{
		_name = copyObj._name;
		_hitPts = copyObj._hitPts;
		_energyPts = copyObj._energyPts;
		_attackDmg = copyObj._attackDmg;
	}
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap: Destructor is called" << std::endl;
}

void	DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "Am I " << this->_name << " or " << ClapTrap::_name << std::endl;
}
