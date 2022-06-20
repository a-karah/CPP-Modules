/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarahan <akarahan@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 18:35:42 by akarahan          #+#    #+#             */
/*   Updated: 2022/06/08 11:14:26 by akarahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		const std::string	_name;
		bool				_isSigned;
		const int			_gradeSign;
		const int			_gradeExecute;

	public:
		AForm();
		AForm(std::string name, int gradeSign, int gradeExecute);
		AForm(const AForm &copyObj);
		AForm &operator = (const AForm &copyObj);
		virtual	~AForm();

		const std::string	&getName(void) const;
		const bool			&getIsSigned(void) const;
		const int			&getGradeSign(void) const;
		const int			&getGradeExecute(void) const;

		void				beSigned(const Bureaucrat &bur);
		virtual void		execute(const Bureaucrat &executor) const = 0;
		void				executeCheck(const Bureaucrat &executor) const;

	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char	*what() const throw()
			{
				return ("grade is too high!!!");
			}
	};

	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char	*what() const throw()
			{
				return ("grade is too low!!!");
			}
	};

	class NotSigned : public std::exception
	{
		public:
			virtual const char *what() const throw()
			{
				return ("form is not signed!!!");
			}
	};

	class FileError : public std::exception
	{
		public:
			virtual const char *what() const throw()
			{
				return ("can't open file!");
			}
	};
};

std::ostream	&operator<<(std::ostream &o, const AForm &obj);

#endif