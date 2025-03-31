/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paprzyby <paprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 15:52:18 by paprzyby          #+#    #+#             */
/*   Updated: 2025/03/28 16:57:10 by paprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("Default PresidentialPardonForm name", 25, 5), target("default target")	{}

PresidentialPardonForm::PresidentialPardonForm(std::string &target) : AForm("Default PresidentialPardonForm name", 25, 5), target(target)
{
	if (!random)
	{
		srand(time(NULL));
		random = true;
	}
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : AForm(other), target(other.target)	{}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
	if (this != &other)
	{
		AForm::operator=(other);
		this->target = other.target;
	}
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()	{}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (getIs_signed() == "false")
		throw (NotSignedException());
	if (executor.getGrade() > getGrade_to_execute())
		throw (GradeTooLowException());
	std::cout << target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
