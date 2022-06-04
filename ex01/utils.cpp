/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarahan <akarahan@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 15:18:31 by akarahan          #+#    #+#             */
/*   Updated: 2022/04/26 16:54:41 by akarahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

std::string	truncate(std::string s, size_t width)
{
	if (s.length() > width)
		return (s.substr(0, width - 1) + ".");
	else
		return (s);
}

std::string	takeInput(void)
{
	std::string	in;

	while (in.empty())
	{
		std::getline(std::cin, in);
		if (in.empty())
			std::cout << "Input is empty, try again: ";
	}
	return (in);
}
