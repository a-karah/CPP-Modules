/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarahan <akarahan@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 13:30:26 by akarahan          #+#    #+#             */
/*   Updated: 2022/06/09 22:55:30 by akarahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() :
    AForm("Presidential pardon", 25, 5),
    _target("unknown")
{
    std::cout << "PresidentialPardonForm: default constructor is called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
    AForm("Presidential pardon", 25, 5),
    _target(target)
{
    std::cout << "PresidentialPardonForm: constructor is called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copyObj) :
    AForm("Presidential pardon", 25, 5)
{
    *this = copyObj;
}

PresidentialPardonForm   &PresidentialPardonForm::operator = (const PresidentialPardonForm &copyObj)
{
    (void)copyObj;
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm: destructor is called" << std::endl;
}

void    PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
    this->AForm::executeCheck(executor);
    std::cout << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
