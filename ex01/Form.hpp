/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paprzyby <paprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 12:17:31 by paprzyby          #+#    #+#             */
/*   Updated: 2025/03/17 14:34:27 by paprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>

class Bureaucrat;

class	Form
{
	public:
		Form();
		Form(const std::string name, const int grade_to_sign, const int grade_to_execute);
		Form(const Form &other);
		Form &operator=(const Form &other);
		~Form();

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

		void				signForm(Form form);

	private:
		const std::string	name;
		bool				is_signed;
		const int			grade_to_sign;
		const int			grade_to_execute;
};

std::ostream	&operator<<(std::ostream& output, const Form &form);

#endif
