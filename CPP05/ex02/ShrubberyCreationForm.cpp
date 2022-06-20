/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarahan <akarahan@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 12:48:00 by akarahan          #+#    #+#             */
/*   Updated: 2022/06/12 18:34:58 by akarahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() :
    AForm("Shrubbery", 145, 137),
    _target("unknown")
{
    std::cout << "ShrubberyCreationForm: default constructor is called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
    AForm("Shrubbery", 145, 137),
    _target(target)
{
    std::cout << "ShrubberyCreationForm: constructor is called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copyObj) :
    AForm("Shrubbery", 145, 137)
{
    *this = copyObj;
}

ShrubberyCreationForm   &ShrubberyCreationForm::operator = (const ShrubberyCreationForm &copyObj)
{
    (void)copyObj;
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm: destructor is called" << std::endl;
}

void    ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
    std::ofstream   file;

    this->AForm::executeCheck(executor);
    file.open((_target + "_shrubbery").c_str());
    if (file.bad())
        throw FileError();
    file << "                                                         ." << std::endl;
    file << "                                              .         ;" << std::endl;
    file << "                 .              .              ;%     ;;" << std::endl;
    file << "                   ,           ,                :;%%  %;" << std::endl;
    file << "                    :         ;                   :;%;'     .," << std::endl;
    file << "           ,.        %;     %;            ;        %;'    ,;" << std::endl;
    file << "             ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl;
    file << "              %;       %;%;      ,  ;       %;  ;%;   ,%;'" << std::endl;
    file << "               ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl;
    file << "                `%;.     ;%;     %;'         `;%%;.%;'" << std::endl;
    file << "                 `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl;
    file << "                    `:%;.  :;bd%;          %;@%;'" << std::endl;
    file << "                      `@%:.  :;%.         ;@@%;'" << std::endl;
    file << "                        `@%.  `;@%.      ;@@%;" << std::endl;
    file << "                          `@%%. `@%%    ;@@%;" << std::endl;
    file << "                            ;@%. :@%%  %@@%;" << std::endl;
    file << "                              %@bd%%%bd%%:;" << std::endl;
    file << "                                #@%%%%%:;;" << std::endl;
    file << "                                %@@%%%::;" << std::endl;
    file << "                                %@@@%(o);  . '" << std::endl;
    file << "                                %@@@o%;:(.,'" << std::endl;
    file << "                            `.. %@@@o%::;" << std::endl;
    file << "                               `)@@@o%::;" << std::endl;
    file << "                                %@@(o)::;" << std::endl;
    file << "                               .%@@@@%::;" << std::endl;
    file << "                               ;%@@@@%::;." << std::endl;
    file << "                              ;%@@@@%%:;;;." << std::endl;
    file << "                          ...;%@@@@@%%:;;;;,.." << std::endl;
    file.close();
}
