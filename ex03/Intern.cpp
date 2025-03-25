/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paprzyby <paprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 18:10:55 by paprzyby          #+#    #+#             */
/*   Updated: 2025/03/25 18:32:43 by paprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()	{}

Intern::Intern(const Intern &other)
{
	(void)other;
}

Intern& Intern::operator=(const Intern &other)
{
	(void)other;
	return (*this);
}

Intern::~Intern()	{}

AForm	*Intern::makeForm(std::string name, std::string target)
{
	
}
