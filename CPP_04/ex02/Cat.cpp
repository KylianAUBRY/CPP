/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyaubry <kyaubry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 19:09:44 by kyaubry           #+#    #+#             */
/*   Updated: 2023/09/25 16:04:43 by kyaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Cat default constructor called" << '\n';
	this->type = "Cat";
	this->_brain = new Brain();
}

Cat::Cat(const Cat &other) : Animal(other)
{
	std::cout << "Cat copy operator called" << '\n';
	this->type = other.getType();
	this->_brain = new Brain(*other._brain);
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
	delete this->_brain;
}

void Cat::makeSound() const
{
	std::cout << this->type << " miaou" << '\n';
}

Brain*	Cat::getBrain()
{
	return (_brain);
}