/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paprzyby <paprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 12:17:31 by paprzyby          #+#    #+#             */
/*   Updated: 2025/03/14 12:31:46 by paprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class	Bureaucrat
{
	public:
		Bureaucrat();
		Bureaucrat(Bureaucrat &other);
		Bureaucrat &operator=(Bureaucrat &other);
		~Bureaucrat();

		void				GradeTooHighException() const;
		void				GradeTooLowException() const;

		const std::string	getName() const;
		int					getGrade() const;

		void				incrementGrade();
		void				decrementGrade();

	private:
		const std::string	name;
		int					grade;
};

std::ostream	&operator<<(std::ostream& output, const Bureaucrat &bureaucrat);

#endif
