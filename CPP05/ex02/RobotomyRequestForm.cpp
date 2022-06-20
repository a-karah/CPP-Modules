/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarahan <akarahan@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 13:34:24 by akarahan          #+#    #+#             */
/*   Updated: 2022/06/09 13:54:54 by akarahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() :
    AForm("Robotomy request", 72, 45),
    _target("unknown")
{
    std::cout << "RobotomyRequestForm: default constructor is called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
    AForm("Robotomy request", 72, 45),
    _target(target)
{
    std::cout << "RobotomyRequestForm: constructor is called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copyObj) :
    AForm("Robotomy request", 72, 45)
{
    *this = copyObj;
}

RobotomyRequestForm   &RobotomyRequestForm::operator = (const RobotomyRequestForm &copyObj)
{
    (void)copyObj;
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm: destructor is called" << std::endl;
}

void    RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
    this->AForm::executeCheck(executor);
    if (rand() % 2)
        std::cout << _target << " has been robotomized" << std::endl;
    else
        std::cout << "robotomy failed" << std::endl;
}
