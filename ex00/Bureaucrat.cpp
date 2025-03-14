/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paprzyby <paprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 12:17:33 by paprzyby          #+#    #+#             */
/*   Updated: 2025/03/14 14:11:43 by paprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name(""), grade(150) {}

Bureaucrat::Bureaucrat(const std::string name, int grade) : name(name)
{
	if (grade > 150)
		throw (GradeTooLowException());
	if (grade < 1)
		throw (GradeTooHighException());
	this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : name(other.name), grade(other.grade)	{}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &other)
{
	grade = other.grade;
	return (*this);
}

Bureaucrat::~Bureaucrat()	{}

const std::string	Bureaucrat::getName() const
{
	return (name);
}

int	Bureaucrat::getGrade() const
{
	return (grade);
}

void	Bureaucrat::incrementGrade()
{
	if (grade <= 1)
		throw (GradeTooHighException());
	grade--;
}

void	Bureaucrat::decrementGrade()
{
	if (grade >= 150)
		throw (GradeTooLowException());
	grade++;
}

const char	*Bureaucrat::GradeTooHighException:: what() const noexcept
{
	return ("The grade too high!");
}

const char	*Bureaucrat::GradeTooLowException:: what() const noexcept
{
	return ("The grade too low!");
}

std::ostream	&operator<<(std::ostream& output, const Bureaucrat &bureaucrat)
{
	output << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return (output);
}
