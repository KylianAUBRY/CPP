/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyaubry <kyaubry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 19:09:44 by kyaubry           #+#    #+#             */
/*   Updated: 2023/09/25 16:06:53 by kyaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Cat default constructor called" << '\n';
	this->type = "Cat";
}

Cat::Cat(const Cat &other) : Animal(other)
{
	std::cout << "Cat copy operator called" << '\n';
}

Cat &Cat::operator=(Cat other)
{
	std::cout << "Cat copy assignment operator called" << '\n';
	*this = other;
	return *this;
}

Cat::~Cat ()
{
	std::cout << "Cat destructor called" << '\n';
}

void Cat::makeSound() const
{
	std::cout << this->type << " miaou" << '\n';
}