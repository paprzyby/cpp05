/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paprzyby <paprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 18:10:55 by paprzyby          #+#    #+#             */
/*   Updated: 2025/03/28 15:37:31 by paprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()	{}

Intern::Intern(const Intern &other)
{
	*this = other;
}

Intern& Intern::operator=(const Intern &other)
{
	(void)other;
	return (*this);
}

Intern::~Intern()	{}

AForm	*createRobotomyRequestForm(std::string &target)
{
	return (new RobotomyRequestForm(target));
}

AForm	*createPresidentialPardonForm(std::string &target)
{
	return (new PresidentialPardonForm(target));
}

AForm	*createShrubberyCreationForm(std::string &target)
{
	return (new ShrubberyCreationForm(target));
}

AForm *Intern::makeForm(std::string name, std::string target)
{
	std::string formNames[] = {"RobotomyRequestForm", "PresidentialPardonForm",
		"ShrubberyCreationForm"};

	AForm *(*formCreators[])(std::string &) = {createRobotomyRequestForm,
		createPresidentialPardonForm, createShrubberyCreationForm};

	for (int i = 0; i < 3; i++)
	{
		if (name == formNames[i])
		{
			std::cout << "Intern creates the form: " << name << std::endl;
			return(formCreators[i](target));
		}
	}

	std::cout << "Intern cannot create form: " << name << std::endl;
	return (NULL);
}
