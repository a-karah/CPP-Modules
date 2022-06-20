/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarahan <akarahan@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 22:30:50 by akarahan          #+#    #+#             */
/*   Updated: 2022/06/10 10:15:07 by akarahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(const Intern &copyObj)
{
    *this = copyObj;
}

Intern  &Intern::operator = (const Intern &copyObj)
{
    (void)copyObj;
    return (*this);
}

Intern::~Intern() {}

AForm   *Intern::makeShrubberyCreationForm(const std::string target)
{
    return (new ShrubberyCreationForm(target));
}

AForm   *Intern::makeRobotomyRequestForm(const std::string target)
{
    return (new RobotomyRequestForm(target));
}

AForm   *Intern::makePresidentialPardonForm(const std::string target)
{
    return (new PresidentialPardonForm(target));
}

AForm   *Intern::makeForm(const std::string formName, const std::string target)
{
    std::string forms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    AForm       *(Intern::*fnPtr[3])(const std::string);
    int         flag;
    int         i;

    i = -1;
    flag = 0;
    fnPtr[0] = &Intern::makeShrubberyCreationForm;
    fnPtr[1] = &Intern::makeRobotomyRequestForm;
    fnPtr[2] = &Intern::makePresidentialPardonForm;
    while (++i < 3)
    {
        if (formName == forms[i])
        {
            std::cout << "Intern creates " << formName << std::endl;
            flag = 1;
            break ;
        }
    }
    try
    {
        if (!flag)
            throw(FormNotFound());
        return (this->*fnPtr[i])(target);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
        return (NULL);
    }
}
