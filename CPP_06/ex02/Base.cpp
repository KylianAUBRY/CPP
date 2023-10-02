/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kylian <kylian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 23:01:21 by kylian            #+#    #+#             */
/*   Updated: 2023/10/02 23:19:32 by kylian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base()
{}

int j = 0;

Base	*generate(void)
{
	srand(time(0) + j);
	j++;
	int i = rand() % 3;
	if (i == 0)
		return (new A);
	else if (i == 1)
		return (new B);
	else
		return (new C);
}

void	identify(Base *p)
{
	if (dynamic_cast<A *>(p) != NULL)
		std::cout << "type is A" << '\n';
	else if (dynamic_cast<B *>(p) != NULL)
		std::cout << "type is B" << '\n';
	else if (dynamic_cast<C *>(p) != NULL)
		std::cout << "type is C" << '\n';
	else
		std::cout << "Unknown type" << '\n';
}

void	identify(Base &p)
{
	try {
		static_cast<void>(dynamic_cast<const A &>(p));
		std::cout << "type is A" << '\n';
		return ;
	}
	catch (std::exception &e){}
	
	try {
		static_cast<void>(dynamic_cast<const B &>(p));
		std::cout << "type is B" << '\n';
		return ;
	}
	catch (std::exception &e){}

	try {
		static_cast<void>(dynamic_cast<const C &>(p));
		std::cout << "type is C" << '\n';
		return ;
	}
	catch (std::exception &e){}

	std::cout << "Unknown type" << '\n';
}