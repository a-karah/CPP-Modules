/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarahan <akarahan@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 22:44:24 by akarahan          #+#    #+#             */
/*   Updated: 2022/06/20 13:02:53 by akarahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base    *generate(void)
{
    switch ((rand() % 3) + 1)
    {
        case 1:
            return (new A());
        case 2:
            return (new B());
        case 3:
            return (new C());
    }
    return (NULL);
}

void    identify(Base *p)
{
    A   *a = dynamic_cast<A *>(p);
    B   *b = dynamic_cast<B *>(p);
    C   *c = dynamic_cast<C *>(p);
    if (a)
        std::cout << "A: " << p << std::endl;
    else if (b)
        std::cout << "B: " << p << std::endl;
    else if (c)
        std::cout << "C: " << p << std::endl;
}

void    identify(Base &p)
{
    try
    {
        (void)dynamic_cast<A &>(p);
        std::cout << "A: " << &p << std::endl;
    }
    catch (const std::exception &e) {}
    try
    {
        (void)dynamic_cast<B &>(p);
        std::cout << "B: " << &p << std::endl;
    }
    catch (const std::exception &e) {}
    try
    {
        (void)dynamic_cast<C &>(p);
        std::cout << "C: " << &p << std::endl;
    }
    catch (const std::exception &e) {}
}

int main(void)
{
    srand(time(NULL));
	Base * random1 = generate();
	Base * random2 = generate();
	Base * random3 = generate();

	identify(random1);
	identify(random2);
	identify(random3);

	std::cout << std::endl;

	identify(*random1);
	identify(*random2);
	identify(*random3);

	delete random1;
	delete random2;
	delete random3;
    return (0);
}
