/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paprzyby <paprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 12:16:45 by paprzyby          #+#    #+#             */
/*   Updated: 2025/03/31 19:55:38 by paprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main()
{
	Intern	intern;
	AForm	*form;

	form  = intern.makeForm("RobotomyRequestForm", "Robot");
	if (form)
	{
		Bureaucrat bureaucrat("John", 1);
		bureaucrat.signForm(*form);
		bureaucrat.executeForm(*form);
		delete (form);
	}

	//Intern	intern;
	//AForm	*form;

	//form  = intern.makeForm("fafasf", "Robot");
	//if (form)
	//{
	//	Bureaucrat bureaucrat("John", 1);
	//	bureaucrat.signForm(*form);
	//	bureaucrat.executeForm(*form);
	//	delete (form);
	//}
}
