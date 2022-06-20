/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarahan <akarahan@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 21:32:53 by akarahan          #+#    #+#             */
/*   Updated: 2022/06/07 14:08:42 by akarahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain: default constructor called" << std::endl;
	for (int i = 0; i < 100; ++i)
		_ideas[i] = "Random Idea No: " + std::to_string(i);
}

Brain::Brain(const Brain &copyObj)
{
	std::cout << "Brain: copy constructor called" << std::endl;
	for (int i = 0; i < 100; ++i)
		_ideas[i] = "Random Idea No: " + std::to_string(i);
	*this = copyObj;
}

Brain	&Brain::operator = (const Brain &copyObj)
{
	if (this != &copyObj)
	{
		for (int i = 0; i < 100; ++i)
			this->_ideas[i] = copyObj._ideas[i];
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain: destructor is called" << std::endl;
}

const std::string	&Brain::getIdea(int idx) const
{
	return (this->_ideas[idx]);
}

void	Brain::setIdea(std::string str, int idx)
{
	this->_ideas[idx] = str;
}
