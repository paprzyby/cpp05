/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paprzyby <paprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 14:45:42 by paprzyby          #+#    #+#             */
/*   Updated: 2025/03/28 16:58:24 by paprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Default ShrubberyCreationForm name", 145, 137), target("default target")	{}

ShrubberyCreationForm::ShrubberyCreationForm(std::string &target) : AForm("Default ShrubberyCreationForm name", 145, 137), target(target)
{
	if (!random)
	{
		srand(time(NULL));
		random = true;
	}
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : AForm(other), target(other.target)	{}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	if (this != &other)
	{
		AForm::operator=(other);
		this->target = other.target;
	}
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()	{}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (getIs_signed() == "false")
		throw (NotSignedException());
	if (executor.getGrade() > getGrade_to_execute())
		throw (GradeTooLowException());

	std::string filename = target + "_shrubbery";
	std::ofstream file(filename.c_str());

	if (!file.is_open())
		throw (std::runtime_error("Could not open file"));
	file << "        ccee88oo" << std::endl;
	file << "     C8O8O8Q8PoOb o8oo" << std::endl;
	file << "  dOB69QO8PdUOpugoO9bD" << std::endl;
	file << "CgggbU8OU qOp qOdoUOdcb" << std::endl;
	file << "    6OuU  /p u gcoUodpP" << std::endl;
	file << "      \\\\//  /douUP" << std::endl;
	file << "        \\\\////" << std::endl;
	file << "         |||/\\ " << std::endl;
	file << "         |||\\/ " << std::endl;
	file << "         ||||| " << std::endl;
	file << "   .....//||||\\...." << std::endl;
	file.close();
}
