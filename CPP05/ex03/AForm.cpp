/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarahan <akarahan@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 18:35:59 by akarahan          #+#    #+#             */
/*   Updated: 2022/06/08 11:07:48 by akarahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("unknown"), _isSigned(false), _gradeSign(150), _gradeExecute(150)
{
	std::cout << "AForm: default constructor is called" << std::endl;
}

AForm::AForm(std::string name, int gradeSign, int gradeExecute) : 
	_name(name),
	_isSigned(false),
	_gradeSign(gradeSign),
	_gradeExecute(gradeExecute)
{
	if (_gradeSign < 1 || _gradeExecute < 1)
		throw (GradeTooHighException());
	if (_gradeSign > 150 || _gradeExecute > 150)
		throw (GradeTooLowException());
}

AForm::AForm(const AForm &copyObj) : 
	_name(copyObj._name),
	_isSigned(copyObj._isSigned),
	_gradeSign(copyObj._gradeSign),
	_gradeExecute(copyObj._gradeExecute)
{
	*this = copyObj;
}

AForm	&AForm::operator = (const AForm &copyObj)
{
	if (this != &copyObj)
		_isSigned = copyObj._isSigned;

	return (*this);
}

AForm::~AForm()
{
	std::cout << "AForm: destructor is called" << std::endl;
}

const std::string	&AForm::getName(void) const
{
	return (this->_name);
}

const bool			&AForm::getIsSigned(void) const
{
	return (this->_isSigned);
}

const int			&AForm::getGradeSign(void) const
{
	return (this->_gradeSign);
}

const int			&AForm::getGradeExecute(void) const
{
	return (this->_gradeExecute);
}

void	AForm::beSigned(const Bureaucrat &bur)
{
	if (bur.getGrade() > _gradeSign)
		throw (GradeTooLowException());
	_isSigned = true;
}

void	AForm::executeCheck(const Bureaucrat &executor) const
{
	if (!_isSigned)
		throw (NotSigned());
	if (_gradeExecute < executor.getGrade())
		throw (GradeTooLowException());
}

std::ostream	&operator<<(std::ostream &out, const AForm &obj)
{
	out << obj.getName() + " form is " << (obj.getIsSigned() ? "signed," : "not signed,");
	out << " requires grade " << obj.getGradeSign() << " to sign and grade ";
	out << obj.getGradeExecute() << " to execute";

	return (out);
}
