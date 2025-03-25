/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paprzyby <paprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 15:23:18 by paprzyby          #+#    #+#             */
/*   Updated: 2025/03/25 15:51:54 by paprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

int RobotomyRequestForm::num = 0;

RobotomyRequestForm::RobotomyRequestForm() : AForm("", 72, 45), target("default target")	{}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : AForm(other), target(other.target)	{}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	if (this != &other)
	{
		AForm::operator=(other);
		this->target = other.target;
		this->num = other.num;
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
	if (num % 2 == 0)
	{
		std::cout << target << "has been robotomized" << std::endl;
		num = num + 1;
	}
	else
	{
		std::cout << "Robotomy failed" << std::endl;
		num = num + 1;
	}
}
