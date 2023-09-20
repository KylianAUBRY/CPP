/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyaubry <kyaubry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 11:54:05 by kyaubry           #+#    #+#             */
/*   Updated: 2023/08/26 13:02:56 by kyaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook_class.hpp"

int main(void)
{
	int j = 0;
	PhoneBook myPhoneBook;
	std::string str;

	while (1)
	{
		std::getline(std::cin, str);
		if (str.compare("ADD") == 0)
		{
			myPhoneBook.func_add(j);
			j++;
		}
		else if (str.compare("SEARCH") == 0)
			myPhoneBook.func_search(j);
		else if (str.compare("EXIT") == 0)
			break ;
	}
	return (0);
}