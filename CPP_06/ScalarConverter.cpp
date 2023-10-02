/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyaubry <kyaubry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 12:29:48 by kyaubry           #+#    #+#             */
/*   Updated: 2023/10/02 17:06:10 by kyaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

bool ScalarConverter::isChar(std::string const &str)
{
	if (str.length() == 1 && !std::isdigit(str[0]))
		return true;
	if (str[0] == '\'' && str[1] == '\'' && !str[2])
		return true;
	return false;
}

bool ScalarConverter::isCharQuot(std::string const &str)
{
	if (str[0] == '\'' && str[1] == '\'' && !str[2])
		return true;
	return false;
}

bool ScalarConverter::isInt(std::string const &str)
{
	int i = 0;

	if (str[i] == '-' || str[i] == '+')
		i++;
	for (; i < str.length(); i++)
		if (!std::isdigit(str[i]))
			return false;
	return true;
}

bool ScalarConverter::isDouble(std::string const &str)
{
	int i = 0;
	
	if (str.find('.') == std::string::npos || str.find('.') == 0
		|| str.find('.') == str.length() - 1)
		return false;
	for (char c : str)
	{
		if (c == '.')
			i++;
		else
			if (!std::isdigit(c))
				return false;
	}
	if (i != 1)
		return false;
	return true;
}

bool ScalarConverter::isFloat(std::string const &str)
{
	int i = 0;
	int f = 0;
	
	if (str.find('.') == std::string::npos || str[str.length() - 1] != 'f' || str.find('.') == 0
		|| str.find('.') == str.length() - 2)
		return false;
	for (char c : str)
	{
		if (c == '.')
			i++;
		else if (c == 'f')
			f++;
		else
			if (!std::isdigit(c))
				return false;
	}
	if (i != 1 || f != 1)
		return false;
	return true;
}

bool ScalarConverter::isLiteral(std::string const &str)
{
	if (!str.compare("-inff") || !str.compare("+inff") || !str.compare("nanf")
		|| !str.compare("-inf") || !str.compare("+inf") || !str.compare("nan"))
		return true;
	return false;
}

void ScalarConverter::setType(std::string const &chaine)
{
	if (chaine.length() == 0)
		_type = EMPTY;
	else if (isChar(chaine))
		_type = CHAR;
	else if (isCharQuot(chaine))
		_type = CHARQUOT;
	else if (isInt(chaine))
		_type = INT;
	else if (isDouble(chaine))
		_type = DOUBLE;
	else if (isFloat(chaine))
		_type = FLOAT;
	else if (isLiteral(chaine))
	{
		_type = LITERAL;
	}
	else
		_type = UNKNOWN;
}

ScalarConverter::ScalarConverter() {}

ScalarConverter::~ScalarConverter() {}

ScalarConverter::ScalarConverter(ScalarConverter const &other)
{
	*this = other;
}

ScalarConverter &ScalarConverter::operator=(ScalarConverter const &other)
{
	(void) other;
	return *this;
}

void ScalarConverter::convert(const std::string &chaine)
{
	setType(chaine);
	//erreur type
	this->_str = chaine;
}

void ScalarConverter::print_type()
{
	if (_type = UNKNOWN)
		std::cout <<"unkdown value" << '\n';
	std::cout << "TYPE: " << printType() << '\n';
	std::cout << "char: " << printChar() << '\n';
	std::cout << "int: " << printInt() << '\n';
	std::cout << "float: " << printFloat() << '\n';
	std::cout << "double: " << printDouble() << '\n';
}

std::string ScalarConverter::printType()
{
	switch (this->_type)
	{
		case CHAR:
			return "CHAR";
		case INT:
			return "INT";
		case FLOAT:
			return "FLOAT";
		case DOUBLE:
			return "DOUBLE";
		default:
			break ;
	}
	return NULL;
}

std::string ScalarConverter::printChar()
{
	if (this->_type = CHARQUOT)
		return this->_str[1] + '\0';
}