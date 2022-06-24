/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarahan <akarahan@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 14:40:58 by akarahan          #+#    #+#             */
/*   Updated: 2022/06/23 16:38:21 by akarahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _N(0) {}

Span::Span(unsigned int N) : _N(N) {}

Span::Span(const Span &copyObj)
{
	*this = copyObj;
}

Span	&Span::operator = (const Span &copyObj)
{
	if (this != &copyObj)
	{
		_N = copyObj._N;
		_vec.clear();
		_vec = copyObj._vec;
	}
	return (*this);
}

Span::~Span()
{
	_vec.clear();
}

void	Span::addNumber(int num)
{
	if (_vec.size() > _N)
		throw (NotEnoughSpace());
	_vec.push_back(num);
}

void	Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	while (begin != end)
	{
		if (_vec.size() == _N)
			throw (NotEnoughSpace());
		_vec.push_back(*begin);
		++begin;
	}
}

int	Span::longestSpan(void)
{
	if (_N < 2)
		throw (SpanNotFound());
	return (std::abs(*std::max_element(_vec.begin(), _vec.end()) - *std::min_element(_vec.begin(), _vec.end())));
}

int	Span::shortestSpan(void)
{
	int	min_dist = std::numeric_limits<int>::max();
	std::vector<int> copy = _vec;

	if (_N < 2)
		throw (SpanNotFound());
	std::sort(copy.begin(), copy.end());
	for (std::vector<int>::iterator it = copy.begin(); it != copy.end(); ++it)
	{
		if (std::abs(*it - *(it + 1)) < min_dist)
			min_dist = std::abs(*it - *(it + 1));
	}
	return (min_dist);
}
