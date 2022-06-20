/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarahan <akarahan@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 17:58:27 by akarahan          #+#    #+#             */
/*   Updated: 2022/05/17 18:31:40 by akarahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("John"), _grade(150)
{
	std::cout << "Bureaucrat: default constructor is called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	std::cout << "Bureaucrat: constructor is called" << std::endl;
	if (grade < 1)
		throw (GradeTooHighException());
	if (grade > 150)
		throw (GradeTooLowException());
	this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copyObj)
{
	*this = copyObj;
}

Bureaucrat	&Bureaucrat::operator = (const Bureaucrat &copyObj)
{
	if (this != &copyObj)
		_grade = copyObj._grade;

	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat: destructor is called" << std::endl;
}

const std::string	&Bureaucrat::getName(void) const
{
	return (_name);
}

const int	&Bureaucrat::getGrade(void) const
{
	return (_grade);
}

void	Bureaucrat::increaseGrade(void)
{
	if (this->_grade <= 1)
		throw (GradeTooHighException());
	--this->_grade;
}

void	Bureaucrat::decreaseGrade(void)
{
	if (this->_grade >= 150)
		throw (GradeTooLowException());
	++this->_grade;
}

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &obj)
{
	out << obj.getName() + ", bureaucrat grade " << obj.getGrade();

	return (out);
}
