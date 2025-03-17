/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paprzyby <paprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 12:16:45 by paprzyby          #+#    #+#             */
/*   Updated: 2025/03/17 14:17:42 by paprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	//try {
	//	Bureaucrat test("Test", 50);

	//	std::cout << test << std::endl;
	//	test.incrementGrade();
	//	std::cout << test << std::endl;
	//}
	//catch (std::exception & e) {
	//	std::cerr << "Exception caught: " << e.what() << std::endl;
	//}
	try {
		Form f1("Tax Form", 50, 25);
		std::cout << f1 << std::endl;

		Bureaucrat b1("John", 40);
		b1.signForm(f1);
		std::cout << f1 << std::endl;

		Bureaucrat b2("Mike", 100);
		b2.signForm(f1);

		Form f2("Invalid Form", 0, 25);
	}
	catch (const std::exception& e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}
	return (0);
}
