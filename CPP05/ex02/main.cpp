/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarahan <akarahan@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 17:57:33 by akarahan          #+#    #+#             */
/*   Updated: 2022/06/12 19:37:05 by akarahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	// Test Shrubbery Form
	Bureaucrat	bur1("John", 4);
	Bureaucrat	bur2("Alice", 144);
	AForm		*form1 = new ShrubberyCreationForm("document");
	std::cout << *form1 << std::endl;
	std::cout << bur1 << std::endl;
	std::cout << bur2 << std::endl;
	std::cout << "Creating Shrubbery Form" << std::endl;
	bur2.executeForm(*form1);
	bur2.signForm(*form1);
	bur2.executeForm(*form1);
	bur1.executeForm(*form1);
	delete form1;
	std::cout << std::endl << std::endl;

	// Test Robotomy Form
	AForm		*form2 = new RobotomyRequestForm("Marie");
	Bureaucrat	bur3("Edgar", 70);

	std::cout << *form2 << std::endl;
	std::cout << bur3 << std::endl;
	bur3.executeForm(*form2);
	bur3.signForm(*form2);
	bur3.executeForm(*form2);
	bur1.executeForm(*form2);
	delete form2;
	std::cout << std::endl << std::endl;

	// Test Presidential Form
	AForm		*form3 = new PresidentialPardonForm("Lydia");
	Bureaucrat	bur4("Peter", 10);

	std::cout << *form2 << std::endl;
	std::cout << bur4 << std::endl;
	bur4.executeForm(*form3);
	bur4.signForm(*form3);
	bur4.executeForm(*form3);
	bur1.executeForm(*form3);
	delete form3;
	std::cout << std::endl << std::endl;

	return (0);
}