/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarahan <akarahan@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 21:40:27 by akarahan          #+#    #+#             */
/*   Updated: 2022/05/31 16:48:39 by akarahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"

File::File(char *fname)
{
	std::cout << "Opening the file..." << std::endl;
	_inFile.open(fname);
	std::string	localFile(fname);
	localFile.append(".replace");
	_outFile.open(localFile.c_str());
}

File::~File()
{
	std::cout << "Closing the file..." << std::endl;
	_inFile.close();
	_outFile.close();
}

void	File::readFile(void)
{
	std::string	str;

	while (std::getline(this->_inFile, str))
	{
		_text.append(str);
		if (!_inFile.eof())
			_text.append("\n");
	}
}

void	File::writeFile(void)
{
	std::cout << "Writing output..." << std::endl;
	_outFile << _text;
}

void	File::replace(std::string s1, std::string s2)
{
	size_t	idx;

	std::cout << "Replacing contents..." << std::endl;
	while ((idx = _text.find(s1)) != std::string::npos)
	{
		_text.erase(idx, s1.length());
		_text.insert(idx, s2);
	}
}
