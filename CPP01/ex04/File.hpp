/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarahan <akarahan@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 21:39:23 by akarahan          #+#    #+#             */
/*   Updated: 2022/05/31 15:27:26 by akarahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_H
# define FILE_H

# include <iostream>
# include <fstream>
# include <string>

class File
{
	private:
		std::ifstream	_inFile;
		std::ofstream	_outFile;
		std::string		_text;

	public:
		File(char *fname);
		~File();
		
		void	readFile(void);
		void	writeFile(void);
		void	replace(std::string s1, std::string s2);
};

#endif
