/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyaubry <kyaubry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 11:05:46 by kyaubry           #+#    #+#             */
/*   Updated: 2023/09/23 11:29:17 by kyaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Default Brain constructor called" << '\n';
	this->ideas = new std::string[100];
}

Brain::Brain(const Brain &other)
{
	std::cout << "Brain copy operator called" << '\n';
	if (this == &other || !other.ideas)
		return ;
	this->ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
}

Brain &Brain::operator=(const Brain &other)
{
	std::cout << "Brain copy assignment operator called" << '\n';
	*this = other;
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << '\n';
	if (this->ideas)
		delete[] ideas;
}

std::string Brain::getIdeas(int i) const
{
	if (i < 0 || i > 99)
		std::cout << "index :" << i << " does not fit between 0 and 99" << '\n';
	else
		return this->ideas[i];
	return "";
}

void Brain::setIdeas(int i, std::string ideas)
{
	if (i < 0 || i > 99)
		std::cout << "index :" << i << " does not fit between 0 and 99" << '\n';
	else
		this->ideas[i] = ideas;
}