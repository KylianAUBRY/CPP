/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyaubry <kyaubry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 16:15:26 by kyaubry           #+#    #+#             */
/*   Updated: 2023/10/13 17:41:33 by kyaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

PolishNotation::PolishNotation() {}

PolishNotation::~PolishNotation() {}

PolishNotation::PolishNotation(const PolishNotation &other)
{
	*this = other;
}

PolishNotation &PolishNotation::operator=(const PolishNotation &other)
{
	this->_stack = other._stack;
	return *this;
}

void PolishNotation::calculator(char signe)
{
	if (this->_stack.size() < 2)
		throw std::runtime_error("Error : Not enough numbers in the stack to calculate");
	int second = this->_stack.top();
	this->_stack.pop();
	int first = this->_stack.top();
	this->_stack.pop();
	switch (signe)
	{
		case '+' :
			this->_stack.push(first + second);
			break ;
		case '-' :
			this->_stack.push(first - second);
			break ;
		case '*' :
			this->_stack.push(first * second);
			break ;
		case '/' :
			if (second == 0)
				throw std::runtime_error("Division by 0 is impossible");
			this->_stack.push(first / second);
			break ;
	}
}

void PolishNotation::add_stack(int number)
{
	this->_stack.push(number);
}
int PolishNotation::result()
{
	if (this->_stack.size() == 0)
		return 0;
	else if (this->_stack.size() != 1)
		throw std::runtime_error("there are numbers left in the stack");
	int value = this->_stack.top();
	this->_stack.pop();
	return value;
}


int CalculatorPolishNotation(std::string const &line)
{
	PolishNotation	stack;
	
	for (int i = 0; i < (int)line.size(); i++)
	{
		if (i % 2 == 1 && line[i] != ' ')
			throw std::runtime_error("Error : Invalid format there must be spaces between instructions or numbers\nExample of valid format: \"4 6 5 + - 9 / 8 +\"");
		else if (i % 2 == 0)
		{
			if (std::isdigit(line[i]))
				stack.add_stack(line[i] - '0');
			else if (line[i] == '+' || line[i] == '-' || line[i] == '*' ||line[i] == '/')
				stack.calculator(line[i]);
			else
				throw std::runtime_error("Error : Only numbers, and characters + - * / are allowed");
		}
	}
	return stack.result();
}