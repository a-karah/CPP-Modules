/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarahan <akarahan@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 18:35:59 by akarahan          #+#    #+#             */
/*   Updated: 2022/06/08 11:07:48 by akarahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("unknown"), _isSigned(false), _gradeSign(150), _gradeExecute(150)
{
	std::cout << "Form: default constructor is called" << std::endl;
}

Form::Form(std::string name, int gradeSign, int gradeExecute)
	: _name(name), _isSigned(false), _gradeSign(gradeSign), _gradeExecute(gradeExecute)
{
	if (_gradeSign < 1 || _gradeExecute < 1)
		throw (GradeTooHighException());
	if (_gradeSign > 150 || _gradeExecute > 150)
		throw (GradeTooLowException());
}

Form::Form(const Form &copyObj)
	: _name(copyObj._name), _isSigned(copyObj._isSigned), _gradeSign(copyObj._gradeSign), _gradeExecute(copyObj._gradeExecute)
{
	*this = copyObj;
}

Form	&Form::operator = (const Form &copyObj)
{
	if (this != &copyObj)
		_isSigned = copyObj._isSigned;

	return (*this);
}

Form::~Form()
{
	std::cout << "Form: destructor is called" << std::endl;
}

const std::string	&Form::getName(void) const
{
	return (this->_name);
}

const bool			&Form::getIsSigned(void) const
{
	return (this->_isSigned);
}

const int			&Form::getGradeSign(void) const
{
	return (this->_gradeSign);
}

const int			&Form::getGradeExecute(void) const
{
	return (this->_gradeExecute);
}

void	Form::beSigned(const Bureaucrat &bur)
{
	if (bur.getGrade() > _gradeSign)
		throw (GradeTooLowException());
	_isSigned = true;
}

std::ostream	&operator<<(std::ostream &out, const Form &obj)
{
	out << obj.getName() + " form is " << (obj.getIsSigned() ? "signed," : "not signed,");
	out << " requires grade " << obj.getGradeSign() << " to sign and grade ";
	out << obj.getGradeExecute() << " to execute";

	return (out);
}
