/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kylian <kylian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:28:12 by kylian            #+#    #+#             */
/*   Updated: 2023/10/03 14:37:53 by kylian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

void printInt(int i)
{
	std::cout << i << ' ';
}

void printChar(char c)
{
	std::cout << c ;
}

void plusTen(int &i)
{
	i += 10;
}

int main()
{
	int tab[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	::iter(tab, 10, printInt);
	std::cout << '\n';
	::iter(tab, 10, plusTen);
	::iter(tab, 10, printInt);
	std::cout << '\n';

	char tabC[] = {'s', 'a', 'l', 'u', 't', ' ', 'j', 'e', 'u', 'n', 'e', ' ', 'c', 'o', 'r', 'r', 'e', 'c', 't', 'e', 'u', 'r', '\n'};
	::iter(tabC, 23, printChar);
	return 0;
}