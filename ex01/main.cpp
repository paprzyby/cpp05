/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paprzyby <paprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 12:16:45 by paprzyby          #+#    #+#             */
/*   Updated: 2025/03/31 19:34:37 by paprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	try
	{
		Form form("Form1", 50, 25);
		std::cout << form << std::endl;

		Bureaucrat bureaucrat("Bureaucrat1", 40);
		bureaucrat.signForm(form);
		std::cout << form << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}

	std::cout << "================================================" << std::endl;

	try
	{
		Form form("Form1", 1, 25);
		std::cout << form << std::endl;

		Bureaucrat bureaucrat("Bureaucrat1", 40);
		bureaucrat.signForm(form);
		std::cout << form << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}

	return (0);
}
