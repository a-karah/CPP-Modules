/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarahan <akarahan@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 17:43:00 by akarahan          #+#    #+#             */
/*   Updated: 2022/06/07 14:35:10 by akarahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main(void)
{
	// AAnimal *dog = new AAnimal();
	// dog->makeSound();

	Dog	*dog = new Dog();
	dog->makeSound();
	std::cout << dog->getBrain()->getIdea(0) << std::endl;

	Cat	*cat = new Cat();
	cat->makeSound();
	std::cout << cat->getBrain()->getIdea(99) << std::endl;

	return (0);
}
