/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarahan <akarahan@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 20:56:15 by akarahan          #+#    #+#             */
/*   Updated: 2022/06/20 12:55:35 by akarahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <limits>
#include <cerrno>
#include <cstring>

void    print(double num)
{
    std::cout << "char: ";
    if (num < 0 || num > std::numeric_limits<char>::max())
        std::cout << "impossible" << std::endl;
    else if (!std::isprint(static_cast<char>(num)))
        std::cout << "Non displayable" << std::endl;
    else
        std::cout << "'" << static_cast<char>(num) << "'" << std::endl;

    std::cout << "int: ";
    if (num < std::numeric_limits<int>::min() || num > std::numeric_limits<int>::max())
        std::cout << "impossible" << std::endl;
    else
        std::cout << static_cast<int>(num) << std::endl;

    std::cout << "float: ";
    if (num && (num < -std::numeric_limits<float>::max() || num > std::numeric_limits<float>::max() ||
        (num > -std::numeric_limits<float>::min() && num < std::numeric_limits<float>::min())))
        std::cout << "impossible" << std::endl;
    else
        std::cout << std::setprecision(1) << std::fixed << static_cast<float>(num) << "f" << std::endl;

    std::cout << "double: " << std::setprecision(1) << std::fixed << num << std::endl;
}

void    printScience(std::string lit)
{
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    std::cout << "float: " << lit << "f" << std::endl;
    std::cout << "double: " << lit << std::endl;
}

int main(int argc, char *argv[])
{
    if (argc == 2)
    {
        std::string science[8] = {"-inf", "+inf", "inf", "nan"};
        std::string str(argv[1]);
        char        *end;

        for (size_t i = 0; i < str.length(); ++i)
            str[i] = std::tolower(str[i]);

        for (size_t i = 0; i < 8; ++i)
        {
            if (str == science[i] || str == (science[i] + 'f'))
            {
                printScience(science[i]);
                return (0);
            }
        }
        double  num = std::strtod(argv[1], &end);
        if (errno == ERANGE)
        {
            std::cout << "Error number is out of range." << std::endl;
            return (0);
        }
		if (num == 0 && isascii(end[0]) && strlen(end) < 2)
		{
			num = (int)end[0];
			print(num);
		}
        else if ((end[0] == 0 || end[0] == 'f') && strlen(end) < 2)
            print(num);
        else
            std::cout << "Error in argument." << std::endl;
    }
    else
        std::cout << "Usage ./convert [number]." << std::endl;
    return (0);
}
