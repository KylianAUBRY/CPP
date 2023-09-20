/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook_class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyaubry <kyaubry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 11:59:20 by kyaubry           #+#    #+#             */
/*   Updated: 2023/08/26 14:09:08 by kyaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook_class.hpp"

void ft_print(int i)
{
	switch(i){
		case 0:
			std::cout << "Enter first Name\n";
			break;
		case 1:
			std::cout << "Enter last name\n";
			break;
		case 2:
			std::cout << "Enter nickname\n";
			break;
		case 3:
			std::cout << "Enter phone number\n";
			break;
		case 4:
			std::cout << "Enter darkest secret\n";
			break;
	}
}

void PhoneBook::func_add(int j)
{
	std::string str;
	int i = 0;

	while (i <= 4){
		ft_print(i);
		std::getline(std::cin, str);
		if (str.compare("") == 0)
			i--;
		else
		{
			if (i == 0)
				this->rep[j % 8].setFisrtName(str);
			else if (i == 1)
				this->rep[j % 8].setLastName(str);
			else if (i == 2)
				this->rep[j % 8].setNickName(str);
			else if (i == 3)
				this->rep[j % 8].setPhoneNumber(str);
			else if (i == 4)
				this->rep[j % 8].setDarkestSecret(str);
		}
		i++;
	}
	std::cout << "Directory add\n";
}

void print_str(std::string str){
	int count_space = str.size();
	int i = 0;

	if (count_space >= 10)
	{
		while (i < 9)
		{
			std::cout << str[i];
			i++;
		}
		if (count_space == 10)
			std::cout << str[i];
		else
			std::cout << '.'; 
		return ;
	}
	while (count_space < 10)
	{
		std::cout << ' ';
		count_space++;
	}
	std::cout << str;
}

bool check_number(const std::string str)
{
	for (int i = 0; str[i]; i++)
	{
		if (std::isdigit(str[i]) == 0)
			return false;
	}
	return true;
}

void PhoneBook::func_search(int j)
{
	int i = 0;
	std::string str;

	std::cout << "|     Index|First name| Last name|  Nickname|\n";
	while (i < j && i < 8)
	{
		std::cout << "|" << "         " << i << "|";
		print_str(this->rep[i % 8].getFirstName());
		std::cout << "|";
		print_str(this->rep[i % 8].getLastName());
		std::cout << "|";
		print_str(this->rep[i % 8].getNickName());
		std::cout << "|\n";
		i++;
	}
	if (i == 0)
		std::cout << "You do not have friends\n";
	else
	{
		std::cout << "Enter the index of the contact to display\n";
		std::getline(std::cin, str);
		if (check_number(str) == false || str.size() != 1){
			std::cout << "The index of the contact to display must be a number and positive\n" << "It must also be between 0 and 7\n";
			return ;
		}
		i = std::stoi(str);
		if (i >= j)
			std::cout << "The number written is not a directory number\n";
		else
		{
			std::cout << "First Name    : " << this->rep[i].getFirstName() << '\n';
			std::cout << "Last Name     : " << this->rep[i].getLastName() << '\n';
			std::cout << "Nick Name     : " << this->rep[i].getNickName() << '\n';
			std::cout << "Phone Number  : " << this->rep[i].getPhoneNumber() << '\n';
			std::cout << "Darkes Secret : " << this->rep[i].getDarkesSecret() << '\n';
		}
	}
}