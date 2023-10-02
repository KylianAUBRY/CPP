/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kylian <kylian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 23:00:30 by kylian            #+#    #+#             */
/*   Updated: 2023/10/02 23:19:05 by kylian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main()
{
	int str;
	std::cout << "Enter number test (max 20):" << '\n';
	std::cin >> str;
	if (str <= 0 || str > 20)
	{
		std::cout << "Error\n";
		return 0;
	}
	for (int i = 0; i < str ; i++)
	{
		Base *test;
		test = generate();
		identify(test);
		identify(*test);
		std::cout << '\n';
		delete test;
	}
}