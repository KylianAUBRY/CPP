/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kylian <kylian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 11:35:31 by kylian            #+#    #+#             */
/*   Updated: 2023/08/27 11:45:30 by kylian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string* stringPTR = &str;
	std::string& stringREF = str;

	std::cout << "The address of the string in memory		:" << &str << '\n';
	std::cout << "The address stored in stringPTR			:" << &stringPTR << '\n';
	std::cout << "The address stored in stringREF			:" << &stringREF << "\n\n";

	std::cout << "The address where the pointer is pointing	:" << stringPTR << "\n\n";

	std::cout << "The value of the string				:" << str << '\n';
	std::cout << "The value pointed to by stringPTR		:" << *stringPTR << '\n';
	std::cout << "The value pointed to by stringREF		:" << stringREF << '\n';
}