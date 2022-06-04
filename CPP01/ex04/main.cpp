/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarahan <akarahan@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 21:30:38 by akarahan          #+#    #+#             */
/*   Updated: 2022/05/31 16:52:01 by akarahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"

int	main(int ac, char **av)
{
	if (ac == 4)
	{
		std::ifstream	in;
		std::ofstream	out;
		std::string		fname(av[1]);

		in.open(av[1]);
		if (!in.is_open())
		{
			std::cerr << strerror(errno) << std::endl;
			return (1);
		}
		fname.append(".replace");
		out.open(fname);
		if (!out.is_open())
		{
			std::cerr << strerror(errno) << std::endl;
			return (1);
		}
		File	file(av[1]);
		file.readFile();
		file.replace(std::string(av[2]), std::string(av[3]));
		file.writeFile();
	}
	else
		std::cerr << "Wrong number of arguments, should be 4." << std::endl;
	return (0);
}
