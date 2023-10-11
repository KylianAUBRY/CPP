/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyaubry <kyaubry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 13:44:26 by kyaubry           #+#    #+#             */
/*   Updated: 2023/10/11 11:29:56 by kyaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	try {
		sp.addNumber(12);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << "Message not display" << '\n';
	} catch (std::exception &error) {
		std::cerr << error.what() << std::endl;
	}
	
	std::cout << "----------------------------------------" << '\n';
	Span list = Span(10);
	try {
		list.addnNumber(11, 5, 42, 97, 15, 35, 19, 78, 13, 12, 2, 64); //list too big
		std::cout << "Message not display" << '\n';
	} catch (std::exception &error) {
		std::cerr << error.what() << std::endl;
	}
	
	std::cout << "----------------------------------------" << '\n';
	Span list2 = Span(11);
	try {
		list2.addnNumber(11, 5, 42, 97, 15, 35, 19, 78, 13, 12, 2, 64); //list ok
		std::cout << list2.shortestSpan() << std::endl;
		std::cout << list2.longestSpan() << std::endl;
	} catch (std::exception &error) {
		std::cerr << error.what() << std::endl;
		std::cout << "Message not display" << '\n';
	}
	std::cout << "----------------------------------------" << '\n';
	Span list3 = Span(1);
	list3.addNumber(42);
	try {
		std::cout << list3.shortestSpan() << std::endl;
		std::cout << "Message not display" << '\n';
		std::cout << list3.longestSpan() << std::endl;
	} catch (std::exception &error) {
		std::cerr << error.what() << std::endl;
	}
	return 0;
}