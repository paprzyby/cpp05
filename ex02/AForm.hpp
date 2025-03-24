/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paprzyby <paprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 12:17:31 by paprzyby          #+#    #+#             */
/*   Updated: 2025/03/24 17:05:02 by paprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class	AForm
{
	public:
		AForm();
		AForm(const std::string name, const int grade_to_sign, const int grade_to_execute);
		AForm(const AForm &other);
		AForm &operator=(const AForm &other);
		virtual ~AForm();

		class GradeTooHighException : public std::exception {
			public:
				const char	*what() const noexcept;
		};
		class GradeTooLowException : public std::exception {
			public:
				const char	*what() const noexcept;
		};

		const std::string	getName() const;
		int					getGrade_to_sign() const;
		int					getGrade_to_execute() const;
		std::string			getIs_signed() const;
		void				beSigned(Bureaucrat &bureaucrat);
		virtual void		execute(Bureaucrat const &executor) const = 0;
		void				checkPermission(Bureaucrat &bureaucrat) const;

	private:
		const std::string	name;
		bool				is_signed;
		const int			grade_to_sign;
		const int			grade_to_execute;
};

std::ostream	&operator<<(std::ostream& output, const AForm &form);

#endif
