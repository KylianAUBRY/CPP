/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kylian <kylian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:13:44 by kylian            #+#    #+#             */
/*   Updated: 2023/10/03 14:22:17 by kylian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main(void)
{
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	
	return 0;
}

/*
int a = 42;
	int b = 21;

	std::cout << "Before swap :" << "a = " << a << ", b = " << b << '\n';
	::swap(a,b);
	std::cout << "After swap  :" << "a = " << a << ", b = " << b << '\n';
	std::cout << "result min(a,b) : " << ::min(a,b) << '\n';
	std::cout << "result max(a,b) : " << ::max(a,b) << '\n';
	
	std::cout << '\n';
	std::cout << "Before swap :" << "a = " << a << ", b = " << b << '\n';
	::swap(a,b);
	std::cout << "After swap  :" << "a = " << a << ", b = " << b << '\n';
	std::cout << "result min(a,b) : " << ::min(a,b) << '\n';
	std::cout << "result max(a,b) : " << ::max(a,b) << '\n';
*/