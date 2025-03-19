/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paprzyby <paprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 15:39:23 by paprzyby          #+#    #+#             */
/*   Updated: 2025/03/18 12:59:18 by paprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : name(""), is_signed(false), grade_to_sign(150), grade_to_execute(150)	{}

AForm::AForm(const std::string name, const int grade_to_sign, const int grade_to_execute) : name(name), grade_to_sign(grade_to_sign), grade_to_execute(grade_to_execute)
{
	if (grade_to_sign > 150)
		throw (GradeTooLowException());
	if (grade_to_sign < 1)
		throw (GradeTooHighException());
	if (grade_to_execute > 150)
		throw (GradeTooLowException());
	if (grade_to_execute < 1)
		throw (GradeTooHighException());
	is_signed = false;
}

AForm::AForm(const AForm &other) :
	name(other.name),
	is_signed(other.is_signed),
	grade_to_sign(other.grade_to_sign),
	grade_to_execute(other.grade_to_execute)	{}

AForm& AForm::operator=(const AForm &other)
{
	is_signed = other.is_signed;
	return (*this);
}

AForm::~AForm()	{}

const std::string	AForm::getName() const
{
	return (name);
}

int	AForm::getGrade_to_sign() const
{
	return (grade_to_sign);
}

int	AForm::getGrade_to_execute() const
{
	return (grade_to_execute);
}

std::string	AForm::getIs_signed() const
{
	if (is_signed)
		return ("true");
	return ("false");
}

const char	*AForm::GradeTooHighException:: what() const noexcept
{
	return ("The grade is too high!");
}

const char	*AForm::GradeTooLowException:: what() const noexcept
{
	return ("The grade is too low!");
}

std::ostream	&operator<<(std::ostream& output, const AForm &form)
{
	output << "AForm " << form.getName()
	<< ", sign grade " << form.getGrade_to_sign()
	<< ", exec grade " << form.getGrade_to_execute()
	<< ", signed: " << form.getIs_signed();
	return (output);
}

void	AForm::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > grade_to_sign)
		throw (GradeTooLowException());
	is_signed = true;
}
