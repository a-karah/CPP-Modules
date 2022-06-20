/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarahan <akarahan@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 14:02:53 by akarahan          #+#    #+#             */
/*   Updated: 2022/06/11 21:37:50 by lain             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
    private:
        AForm   *makeShrubberyCreationForm(const std::string target);
        AForm   *makeRobotomyRequestForm(const std::string target);
        AForm   *makePresidentialPardonForm(const std::string target);

    public:
        Intern();
        Intern(const Intern &copyObj);
        Intern  &operator = (const Intern &copyObj);
        ~Intern();

        AForm   *makeForm(const std::string formName, const std::string target);

        class FormNotFound : public std::exception
        {
            public:
                virtual const char	*what() const throw()
                {
                    return ("Form is not found.");
                }
        };
};

#endif
