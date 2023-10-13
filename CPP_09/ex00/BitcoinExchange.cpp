/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyaubry <kyaubry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 10:54:23 by kyaubry           #+#    #+#             */
/*   Updated: 2023/10/13 15:46:46 by kyaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

double	ft_stod(std::string const &str) {

	std::string			data = str;
	std::stringstream	ss(data);
	double				ret;
	ss >> ret;
	return ret;
}

BitExchange::BitExchange() {
	std::ifstream file("data.csv");
	std::string line;
	std::size_t size;
	
	std::getline(file, line);
	while (std::getline(file, line))
	{
		size = line.find(",");
		this->_data[line.substr(0, size)] = ft_stod(line.substr(size + 1));
	}
}

bool	isOverflow(std::string const &str) {
	if (std::string::npos != str.find("."))
		return false;
	double	num = stod(str);
	std::stringstream	stream;

	stream << num;
	std::string	converted;
	stream >> converted;
	return str.compare(converted);
}

double	BitExchange::findValue(std::string const &date, double value)
{
	if (this->_data[date])
		return (this->_data[date] * value);
	std::map<std::string, double>::iterator it = this->_data.upper_bound(date);
	it--;
	while (!it->second)
	{
		if (it == this->_data.begin())
			return 0;
		it--;
	}
	return it->second * value;
}

BitExchange::~BitExchange() {}

BitExchange::BitExchange(BitExchange const &other) {*this = other;}

BitExchange	&BitExchange::operator=(BitExchange const &other) {
	this->_data = other._data;
	return *this;
}

std::map<std::string, double> BitExchange::getData() const {return this->_data; }

void	bitExchange(std::string const &name)
{
	std::string line;
	std::ifstream file(name.c_str());
	BitExchange converter;

	try {
		std::getline(file, line);
		while (std::getline(file, line))
		{
			std::size_t size = line.find (" | "); if (size == std::string::npos) {
				std::cout << "Error : bad input => " << line << '\n';
				continue ;
			}
			std::string date = line.substr(0, size);
			std::string value = line.substr(size + 3);
			if (!date.size() || !value.size()) {
				std::cout << "Error : bad input => " << line << '\n';
				continue ;
			}
				if (isOverflow(value)){
				std::cout << "Error: too large a number." << '\n';
				continue ;
			}
			double val = ft_stod(value);
			if (val < 0) {
				std::cout << "Error: not a positive number." << '\n';
				continue ;
			}
			std::cout << date << " => " << val << " = " << converter.findValue(date, val) << '\n';
		}
	}
	catch (std::exception &e) {std::cout << "ERROR CRITICAL : " << e.what() << '\n';}
}