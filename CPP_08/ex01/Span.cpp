/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyaubry <kyaubry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 13:44:38 by kyaubry           #+#    #+#             */
/*   Updated: 2023/10/11 11:25:01 by kyaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int nb)
{
	this->_nb = nb;
}

Span::~Span() {}

Span::Span(const Span &other)
{
	*this = other;
}

Span &Span::operator=(const Span &other)
{
	this->_nb = other._nb;
	this->_list = other._list;
	return *this;
}

void Span::addNumber(int nb)
{
	if (this->_list.size() >= this->_nb)
		throw std::out_of_range("List is full");
	this->_list.push_back(nb);
}

void Span::addnNumber(int nb_elem, ...)
{
	va_list		args;
	if (this->_list.size() + nb_elem > this->_nb)
		throw std::out_of_range("List is full");
	va_start(args, nb_elem);
	for (int i = 0; i < nb_elem; i++)
	{
		this->addNumber(va_arg(args, int));
	}
	va_end(args);
}

unsigned int Span::longestSpan()
{
	if (this->_list.size() < 2)
		throw std::out_of_range("not enough element");
	return *std::max_element(_list.begin(), _list.end()) - *std::min_element(_list.begin(), _list.end());
}

unsigned int Span::shortestSpan()
{
	if (this->_list.size() < 2)
		throw std::out_of_range("not enough element");
	unsigned int min = longestSpan();
	std::list<int>::const_iterator it;
	std::list<int>::const_iterator it2;
	for (it = _list.begin(); it != _list.end(); it++)
		for (it2 = _list.begin(); it2 != _list.end(); it2++)
			if (it != it2 && std::abs(*it - *it2) < (int)min)
				min = (unsigned) std::abs(*it - *it2);
	return min;
}