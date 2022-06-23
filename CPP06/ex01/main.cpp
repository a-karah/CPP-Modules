/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarahan <akarahan@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 23:00:42 by akarahan          #+#    #+#             */
/*   Updated: 2022/06/15 21:29:03 by akarahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include <stdint.h>
#include "Data.hpp"

uintptr_t   serialize(Data *ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data    *deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data *>(raw));
}

int main(void)
{
    Data 	data;

	data.num = 42;
	data.s = (char *) "Hello, ";
	std::cout << data.s << data.num << std::endl;

	uintptr_t raw = serialize(&data);

	std::cout << std::setw(25) << "Original Data address: " << &data << std::endl;
	std::cout << std::setw(25) << "uintptr_t pointer: " << std::hex << "0x" << raw << std::dec << std::endl;

	Data *ptr = deserialize(raw);

	std::cout << std::setw(25) << "Converted Data address: " << ptr << std::endl;
	std::cout << ptr->s << ptr->num << std::endl;
    return (0);
}
