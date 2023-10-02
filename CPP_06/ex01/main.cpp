/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kylian <kylian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 22:52:55 by kylian            #+#    #+#             */
/*   Updated: 2023/10/02 22:59:29 by kylian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main ()
{
	Data	*test1 = new Data;
	uintptr_t	uptr;
	
	test1->name = "test";
	test1->number = 42;

	uptr = Serializer::serialize(test1);
	Data	*newDest = new Data;
	newDest = Serializer::deserialize(uptr);
	
	std::cout << newDest->name << " number : " << newDest->number << '\n';
	delete test1;
}