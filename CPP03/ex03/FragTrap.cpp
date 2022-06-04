/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarahan <akarahan@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 11:48:37 by akarahan          #+#    #+#             */
/*   Updated: 2022/06/04 12:33:28 by akarahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("Unknown")
{
	_hitPts = 100;
	_energyPts = 100;
	_attackDmg = 30;
	std::cout << "FragTrap: Default constructor is called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_hitPts = 100;
	this->_energyPts = 100;
	this->_attackDmg = 30;
	std::cout << "FragTrap: Name constructor is called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copyObj)
{
	std::cout << "FragTrap: Copy constructor is called" << std::endl;
	*this = copyObj;
}

FragTrap	&FragTrap::operator = (const FragTrap &copyObj)
{
	std::cout << "FragTrap: Copy assignment constructor is called" << std::endl;
	if (this != &copyObj)
	{
		_name = copyObj._name;
		_hitPts = copyObj._hitPts;
		_energyPts = copyObj._energyPts;
		_attackDmg = copyObj._attackDmg;
	}
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap: Destructor is called" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "Can we have a high five guys?" << std::endl;
}
