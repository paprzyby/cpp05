/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paprzyby <paprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 12:16:45 by paprzyby          #+#    #+#             */
/*   Updated: 2025/03/31 19:28:02 by paprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	try
	{
		Bureaucrat test("Test", 50);

		std::cout << test << std::endl;
		test.incrementGrade();
		std::cout << test << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	std::cout << "================================================" << std::endl;

	try
	{
		Bureaucrat test("Test", 1);

		std::cout << test << std::endl;
		test.incrementGrade();
		std::cout << test << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	std::cout << "================================================" << std::endl;

	try
	{
		Bureaucrat test("Test", 150);

		std::cout << test << std::endl;
		test.decrementGrade();
		std::cout << test << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	return (0);
}
