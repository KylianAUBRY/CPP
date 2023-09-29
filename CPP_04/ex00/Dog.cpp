/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyaubry <kyaubry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:42:33 by kyaubry           #+#    #+#             */
/*   Updated: 2023/09/25 16:06:26 by kyaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "Dog default constructor called" << '\n';
	this->type = "Dog";
}

Dog::Dog(const Dog &other) : Animal(other)
{
	std::cout << "Dog copy operator called" << '\n';
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << '\n';
}

Dog &Dog::operator=(const Dog &other)
{
	std::cout << "Cat copy assignment operator called" << '\n';
	*this = other;
	return *this;
}

void Dog::makeSound() const
{
	std::cout << this->type << " wouff" << '\n';
}