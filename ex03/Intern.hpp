/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paprzyby <paprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 18:10:56 by paprzyby          #+#    #+#             */
/*   Updated: 2025/03/28 15:35:19 by paprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include "AForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class	Intern
{
	public:
		Intern();
		Intern(const Intern &other);
		Intern &operator=(const Intern &other);
		virtual ~Intern();

		AForm	*makeForm(std::string name, std::string target);
};

std::ostream	&operator<<(std::ostream& output, const Intern &form);
AForm			*createRobotomyRequestForm(std::string &target);
AForm			*createPresidentialPardonForm(std::string &target);
AForm			*createShrubberyCreationForm(std::string &target);

#endif
