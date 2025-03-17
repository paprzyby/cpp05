/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paprzyby <paprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 15:39:23 by paprzyby          #+#    #+#             */
/*   Updated: 2025/03/17 14:34:10 by paprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name(""), is_signed(false), grade_to_sign(150), grade_to_execute(150)	{}

Form::Form(const std::string name, const int grade_to_sign, const int grade_to_execute) : name(name)
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

Form::Form(const Form &other) :
	name(other.name),
	is_signed(other.is_signed),
	grade_to_sign(other.grade_to_sign),
	grade_to_execute(other.grade_to_execute)	{}

Form& Form::operator=(const Form &other)
{
	is_signed = other.is_signed;
	return (*this);
}

Form::~Form()	{}

const std::string	Form::getName() const
{
	return (name);
}

int	Form::getGrade_to_sign() const
{
	return (grade_to_sign);
}

int	Form::getGrade_to_execute() const
{
	return (grade_to_execute);
}

const char	*Form::GradeTooHighException:: what() const noexcept
{
	return ("The grade is too high!");
}

const char	*Form::GradeTooLowException:: what() const noexcept
{
	return ("The grade is too low!");
}

//std::ostream	&operator<<(std::ostream& output, const Form &bureaucrat)
//{
//	output << ;
//	return (output);
//}

//void	Form::signForm(Form form)
//{

//}
