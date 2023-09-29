/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyaubry <kyaubry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:42:33 by kyaubry           #+#    #+#             */
/*   Updated: 2023/09/25 16:03:08 by kyaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "Dog default constructor called" << '\n';
	this->type = "Dog";
	this->_brain = new Brain();
}

Dog::Dog(const Dog &other) : Animal(other)
{
	std::cout << "Dog copy operator called" << '\n';
	this->type = other.getType();
	this->_brain = new Brain(*other._brain);
}

Dog &Dog::operator=(const Dog &other)
{
	std::cout << "Cat copy assignment operator called" << '\n';
	*this = other;
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << '\n';
	delete _brain;
}

void Dog::makeSound() const
{
	std::cout << this->type << " wouff" << '\n';
}

Brain*	Dog::getBrain()
{
	return (_brain);
}