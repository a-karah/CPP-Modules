/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarahan <akarahan@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 17:57:33 by akarahan          #+#    #+#             */
/*   Updated: 2022/06/13 11:52:12 by akarahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat	chad("Chad", 5);
	Intern		virgin;
	AForm		*forms[5];

	forms[0] = virgin.makeForm("shrubbery creation", "document");
	forms[1] = virgin.makeForm("robotomy request", "Marie");
	forms[2] = virgin.makeForm("presidential pardon", "Marie");
	forms[3] = virgin.makeForm("random request", "random");
	forms[4] = virgin.makeForm("robotomomy request", "random");

	for (int i = 0; i < 5; ++i)
	{
		if (forms[i])
		{
			std::cout << std::endl << *(forms[i]) << std::endl;
			chad.signForm(*(forms[i]));
			chad.executeForm(*(forms[i]));
		}
	}

	for (int i = 0; i < 5; i++)
		delete forms[i];
	return (0);
}