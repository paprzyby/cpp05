/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paprzyby <paprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 15:23:18 by paprzyby          #+#    #+#             */
/*   Updated: 2025/03/28 16:53:26 by paprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <unistd.h>

RobotomyRequestForm::RobotomyRequestForm() : AForm("Default RobotomyRequestForm name", 72, 45), target("default target")
{
	if (!random)
	{
		srand(time(NULL));
		random = true;
	}
}

RobotomyRequestForm::RobotomyRequestForm(std::string &target) : AForm("Default RobotomyRequestForm name", 72, 45), target(target)
{
	if (!random)
	{
		srand(time(NULL));
		random = true;
	}
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : AForm(other), target(other.target)
{
	if (!random)
	{
		srand(time(NULL));
		random = true;
	}
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	if (this != &other)
	{
		AForm::operator=(other);
		this->target = other.target;
		this->random = other.random;
	}
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()	{}

void	RobotomyRequestForm::execute(Bureaucrat const&executor) const
{
	if (getIs_signed() == "false")
		throw (NotSignedException());
	if (executor.getGrade() > getGrade_to_execute())
		throw (GradeTooLowException());
	std::cout << "Drilling..." << std::endl;
	sleep(1);
	if (rand() % 100 < 50)
		std::cout << target << " has been robotomized" << std::endl;
	else
		std::cout << "Robotomy failed" << std::endl;
}
