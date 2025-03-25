/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paprzyby <paprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 12:16:45 by paprzyby          #+#    #+#             */
/*   Updated: 2025/03/25 17:30:13 by paprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main()
{
	try
	{
		Bureaucrat				bureaucrat("John", 1);
		ShrubberyCreationForm	form;

		bureaucrat.signForm(form);
		bureaucrat.executeForm(form);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "================================================" << std::endl;

	try
	{
		Bureaucrat				bureaucrat("John", 1);
		PresidentialPardonForm	form;

		bureaucrat.signForm(form);
		bureaucrat.executeForm(form);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "================================================" << std::endl;

	try
	{
		Bureaucrat				bureaucrat("John", 1);
		RobotomyRequestForm		form;

		bureaucrat.signForm(form);
		bureaucrat.executeForm(form);
		bureaucrat.executeForm(form);
		bureaucrat.executeForm(form);
		bureaucrat.executeForm(form);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
