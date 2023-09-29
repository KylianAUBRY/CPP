/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyaubry <kyaubry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 13:31:12 by kyaubry           #+#    #+#             */
/*   Updated: 2023/09/29 17:57:29 by kyaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try {
		Bureaucrat test1("test1 ko", 1);
		std::cout << test1;
		test1.increment();
		std::cout << "message not displayed\n";
	}
	catch (std::exception& e)
	{
		std::cout << "Error\n" << e.what() << '\n';
	}

	try {
		Bureaucrat test2("test2 ko", 151);
		std::cout << "message not displayed\n";
	}
	catch (std::exception& e)
	{
		std::cout << "Error\n" << e.what() << '\n';
	}
	
	try {
		Bureaucrat test3("test3 ko", 0);
		std::cout << "message not displayed\n";
	}
	catch (std::exception& e)
	{
		std::cout << "Error\n" << e.what() << '\n';
	}

	try {
		Bureaucrat test4("test4 ok", 100);
		std::cout << test4;
		test4.increment();
		std::cout << test4;
		test4.decrement();
		std::cout << test4;
	}
	catch (std::exception& e)
	{
		std::cout << "Error\n" << e.what() << '\n';
	}
}