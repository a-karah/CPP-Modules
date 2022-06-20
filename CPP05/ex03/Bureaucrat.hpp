/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarahan <akarahan@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 17:58:10 by akarahan          #+#    #+#             */
/*   Updated: 2022/06/09 12:47:31 by akarahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <stdexcept>
# include "AForm.hpp"

class AForm;

class Bureaucrat
{
	private:
		const std::string	_name;
		int					_grade;

	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &copyObj);
		Bureaucrat &operator = (const Bureaucrat &copyObj);
		~Bureaucrat();

		const std::string	&getName(void) const;
		const int			&getGrade(void) const;

		void				increaseGrade(void);
		void				decreaseGrade(void);
		void				signForm(AForm &form) const;
		void				executeForm(const AForm &form);

	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char	*what() const throw()
			{
				return ("Grade is too high!!!");
			}
	};

	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char	*what() const throw()
			{
				return ("Grade is too low!!!");
			}
	};
};

std::ostream	&operator<<(std::ostream &o, const Bureaucrat &obj);

#endif