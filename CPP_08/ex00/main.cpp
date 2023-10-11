/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyaubry <kyaubry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 11:05:34 by kyaubry           #+#    #+#             */
/*   Updated: 2023/10/09 13:41:58 by kyaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

#define SIZE 10

int main()
{
	std::vector<int>	tab;

	for (int i = 0; i < SIZE; i++)
		tab.push_back((i * 10) + i);
	std::vector<int>::const_iterator it;
	for(it = tab.begin(); it != tab.end(); it++)
		std::cout << *it << '\n';
	std::cout << "----------------" << '\n';
	if (easyfind(tab, 22) == 1)
		std::cout << "Message not display." << '\n';
	std::cout << "----------------" << '\n';
	if (easyfind(tab, 18) == 1)
		std::cout << "Message display." << '\n';
	return 0;
}