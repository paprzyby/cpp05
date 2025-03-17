/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paprzyby <paprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 12:16:45 by paprzyby          #+#    #+#             */
/*   Updated: 2025/03/17 15:19:37 by paprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	try {
		Form f1("Form", 50, 25);
		std::cout << f1 << std::endl;

		Bureaucrat b1("1", 40);
		b1.signForm(f1);
		std::cout << f1 << std::endl;

		Bureaucrat b2("2", 100);
		b2.signForm(f1);
	}
	catch (const std::exception& e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}
	return (0);
}
