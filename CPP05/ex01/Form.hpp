/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarahan <akarahan@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 18:35:42 by akarahan          #+#    #+#             */
/*   Updated: 2022/06/08 11:14:26 by akarahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string	_name;
		bool				_isSigned;
		const int			_gradeSign;
		const int			_gradeExecute;

	public:
		Form();
		Form(std::string name, int gradeSign, int gradeExecute);
		Form(const Form &copyObj);
		Form &operator = (const Form &copyObj);
		~Form();

		const std::string	&getName(void) const;
		const bool			&getIsSigned(void) const;
		const int			&getGradeSign(void) const;
		const int			&getGradeExecute(void) const;

		void				beSigned(const Bureaucrat &bur);

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
};

std::ostream	&operator<<(std::ostream &o, const Form &obj);

#endif