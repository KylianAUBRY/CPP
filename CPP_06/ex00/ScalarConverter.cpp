/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kylian <kylian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 12:29:48 by kyaubry           #+#    #+#             */
/*   Updated: 2023/10/02 22:42:47 by kylian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int				ScalarConverter::_int = 0;
char			ScalarConverter::_char = 0;
float			ScalarConverter::_float = 0.0f;
double			ScalarConverter::_double = 0.0;
int				ScalarConverter::_type = UNKNOWN;
bool 			ScalarConverter::_isLiteral = false;
std::string		ScalarConverter::_str = "";

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
	if (str[0] == '\'' && str[2] == '\'' && !str[3])
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
	if (!str.compare("-inff") || !str.compare("+inff") || !str.compare("nanf"))
	{
		_type = FLOAT;
		return true;
	}
	else if (!str.compare("-inf") || !str.compare("+inf") || !str.compare("nan"))
	{
		_type = DOUBLE;
		return true;
	}
	_isLiteral = false;
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
		_isLiteral = true;
		return ;
	}
	else
	{
		_type = UNKNOWN;
	}
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
	_str = chaine;
	switch (_type) 
	{
		case CHAR:
			_char = chaine[0];
			_int = static_cast<int>(_char);
			_float = static_cast<float>(_char);
			_double = static_cast<double>(_char);
			break ;
		case CHARQUOT :
			_char = chaine[1];
			_int = static_cast<int>(_char);
			_float = static_cast<float>(_char);
			_double = static_cast<double>(_char);
			break ;
		case INT:
			std::istringstream(chaine) >> _int;
			_char = static_cast<char>(_int);
			_float = static_cast<float>(_int);
			_double = static_cast<double>(_int);
			break ;
		case FLOAT:
			_float = atof(chaine.c_str());
			_int = static_cast<int>(_float);
			_char = static_cast<char>(_float);
			_double = static_cast<double>(_float);
			break ;
		case DOUBLE:
			_double = strtod(chaine.c_str(), NULL);
			_int = static_cast<int>(_double);
			_char = static_cast<char>(_double);
			_float = static_cast<float>(_double);
			break ;
		default:
			break ;
	}
	print_type();
}

void ScalarConverter::print_type()
{
	if (_type == UNKNOWN || _type == EMPTY)
	{
		std::cout <<"unkdown value" << '\n';
		return ;
	}
	std::cout << "TYPE: " ; printType();
	std::cout << "char: " ; printChar();
	std::cout << "int: " ; printInt();
	std::cout << "float: " ; printFloat();
	std::cout << "double: " ; printDouble();
}

std::string ScalarConverter::printType()
{
	switch (_type)
	{
		case CHAR:
			return "CHAR";
		case CHARQUOT:
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

bool ScalarConverter::isOverflow()
{
	int i = 0;
	int count = 0;

	if (_str[i] == '+' || _str[i] == '-')
		i++;
	while (_str[i] == '0')
		i++;
	for (; _str[i]; i++)
		count ++;
	if (count > 10)
		return true;
	if (std::atol(_str.c_str()) > 2147483647 || std::atol(_str.c_str()) < -2147483648)
		return true;
	return false;
}

void ScalarConverter::printChar()
{
	if (_isLiteral == true || _int >= 127)
		std::cout << "Impossible" << '\n';
	else if (!std::isprint(_int) || !std::isprint(_char))
		std::cout << "Non Dipslayable" << '\n';
	else
		std::cout << '\'' << _char << "'\n";
}

void	ScalarConverter::printInt(void)
{
	if (_isLiteral == true)
		std::cout << "Impossible";
	else if (isOverflow())
		std::cout << "Overflow";
	else
		std::cout << _int;
	std::cout << '\n';
}

void	ScalarConverter::printFloat(void)
{
	if (!_str.compare("nan") || !_str.compare("nanf"))
		std::cout << "nanf";
	else if (!_str.compare("+inf") || !_str.compare("+inff"))
		std::cout << "+inff";
	else if (!_str.compare("-inf") || !_str.compare("-inff"))
		std::cout << "-inff";
	else {
		std::cout << _float;
		if (!(_float - static_cast<int>(_float)))
			std::cout << ".0";
		std::cout << "f";
	}
	std::cout << '\n';
}

void	ScalarConverter::printDouble(void) {
	if (!_str.compare("nan") || !_str.compare("nanf"))
		std::cout << "nan";
	else if (!_str.compare("+inf") || !_str.compare("+inff"))
		std::cout << "+inf";
	else if (!_str.compare("-inf") || !_str.compare("-inff"))
		std::cout << "-inf";
	else {
		std::cout << _double;
		if (!(_double - static_cast<int>(_double)))
			std::cout << ".0";
	}
	std::cout << '\n';
}