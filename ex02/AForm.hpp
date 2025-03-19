/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paprzyby <paprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 12:17:31 by paprzyby          #+#    #+#             */
/*   Updated: 2025/03/18 12:58:39 by paprzyby         ###   ########.fr       */
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
		~AForm();

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

	private:
		const std::string	name;
		bool				is_signed;
		const int			grade_to_sign;
		const int			grade_to_execute;
};

std::ostream	&operator<<(std::ostream& output, const AForm &form);

#endif
