/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyaubry <kyaubry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:07:35 by kyaubry           #+#    #+#             */
/*   Updated: 2023/09/23 13:54:08 by kyaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	Dog a1;
	Cat a2;

	std::cout << '\n';
	for (int i = 0; i < 100 ; i++)
	{
		a2.getBrain()->setIdeas(i, "a");
	}
	
	for (int i = 0; i < 100 ; i++)
	{
		std::cout << a2.getBrain()->getIdeas(i) << '\n';
	}
	Cat a3 = a2;
	std::cout << '\n';
	std::cout << '\n';
	std::cout << '\n';
	Animal *tab[100];
	for (int i = 0; i < 100 ; i++)
	{
		if (i < 50)
			tab[i] = new Cat;
		else
			tab[i] = new Dog;
	}
	for (int i = 0; i < 100; i++)
		tab[i]->makeSound();
	for (int i = 0; i < 100; i++)
		delete tab[i];
}
