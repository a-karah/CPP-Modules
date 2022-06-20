/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarahan <akarahan@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 17:43:00 by akarahan          #+#    #+#             */
/*   Updated: 2022/06/07 14:25:19 by akarahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main(void)
{
	const Animal *zoo[10];

	for (int i = 0; i < 10; ++i)
	{
		if (i % 2)
			zoo[i] = new Dog();
		else
			zoo[i] = new Cat();
		std::cout << zoo[i]->getType() << std::endl;
	}

	for (int i = 0; i < 10; ++i)
		delete zoo[i];

	/* DEEP COPY TEST */
	std::cout << std::endl;
	std::cout << "Dog deep copy test" << std::endl;

	const Dog *dog = new Dog();
	dog->getBrain()->setIdea("I am dog!", 0);

	const Dog *copy_dog = new Dog(*dog);

	std::cout << &dog->getBrain()->getIdea(0) << " " + dog->getBrain()->getIdea(0) << std::endl;
	std::cout << &copy_dog->getBrain()->getIdea(0) << " " + copy_dog->getBrain()->getIdea(0) << std::endl;

	delete dog;
	delete copy_dog;

	std::cout << std::endl;
	std::cout << "Cat deep copy test" << std::endl;

	const Cat *cat = new Cat();
	cat->getBrain()->setIdea("I am cat!", 0);

	const Cat *copy_cat = new Cat(*cat);

	std::cout << &cat->getBrain()->getIdea(0) << " " + cat->getBrain()->getIdea(0) << std::endl;
	std::cout << &copy_cat->getBrain()->getIdea(0) << " " + copy_cat->getBrain()->getIdea(0) << std::endl;

	delete cat;
	delete copy_cat;

	return (0);
}
