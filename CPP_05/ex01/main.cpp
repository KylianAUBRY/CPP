/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyaubry <kyaubry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 13:31:12 by kyaubry           #+#    #+#             */
/*   Updated: 2023/09/29 18:07:57 by kyaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try {
		Form form1("form1", 151, 12);
		std::cout << "message not displayed" << '\n';
	}
	catch (std::exception& e)
	{
		std::cout << "Error\n" << e.what() << '\n';
	}
	std::cout << '\n';
	try {
		Form form1("form1", 50, 12);
		try {
			Bureaucrat test1("test1 ok", 1);
			std::cout << test1;
			test1.signForm(form1);
		}
		catch (std::exception& e)
		{
			std::cout << "Error\n" << e.what() << '\n';
		}
	}
	catch (std::exception& e)
	{
		std::cout << "Error\n" << e.what() << '\n';
	}
	
	std::cout << '\n';
	try {
		Form form2("form2", 50, 12);
		try {
			Bureaucrat test2("test2 ko form", 100);
			std::cout << test2;
			test2.signForm(form2);
		}
		catch (std::exception& e)
		{
			std::cout << "Error\n" << e.what() << '\n';
		}
	}
	catch (std::exception& e)
	{
		std::cout << "Error\n" << e.what() << '\n';
	}

	std::cout << '\n';
	try {
		Form form3("form2", 50, 12);
		try {
			Bureaucrat test3("test3 ko form and ok", 51);
			std::cout << test3;
			test3.signForm(form3);
			test3.increment();
			std::cout << test3;
			test3.signForm(form3);
		}
		catch (std::exception& e)
		{
			std::cout << "Error\n" << e.what() << '\n';
		}
	}
	catch (std::exception& e)
	{
		std::cout << "Error\n" << e.what() << '\n';
	}
}