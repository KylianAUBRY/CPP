/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyaubry <kyaubry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:11:31 by kyaubry           #+#    #+#             */
/*   Updated: 2023/09/23 10:20:08 by kyaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal default constructor called" << '\n';
	this->type = "Default type Animal";
}

Animal::Animal(const Animal &other)
{
	std::cout << "Animal copy operator called" << '\n';
	*this = other;
}

Animal &Animal::operator=(const Animal& other)
{
	std::cout << "Animal copy assignment operator called" << '\n';
	if (this != &other)
		this->type = other.getType();
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << '\n';
}

std::string Animal::getType() const
{
	return this->type;
}

void Animal::setType(std::string name)
{
	this->type = name;
}

void Animal::makeSound() const
{
	std::cout << this->type << " Make sound" << '\n';
}