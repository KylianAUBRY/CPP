/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyaubry <kyaubry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 16:57:16 by kyaubry           #+#    #+#             */
/*   Updated: 2023/08/26 17:12:52 by kyaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
	std::string str="HI THIS IS BRAIN";
	std::string* stringPTR = &str;
	std::string& stringREF = str;

	std::cout << "Address of the string : " << &str << '\n';
	std::cout << "Address stored in stringPTR : " << stringPTR << '\n';
	std::cout << "Address stored in stringREF : " << &stringREF << "\n\n";

	std::cout << "Address of the stringPTR : " << &stringPTR << "\n\n";
	
	std::cout << "String value : " << str << '\n';
	std::cout << "Value pointed to by stringPTR : " << *stringPTR << '\n';
	std::cout << "Value pointed to by stringREF : " << stringREF << '\n';
}