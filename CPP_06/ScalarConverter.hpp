/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyaubry <kyaubry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 12:29:47 by kyaubry           #+#    #+#             */
/*   Updated: 2023/10/02 17:05:37 by kyaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

# include <iostream>
# include <string>

# define EMPTY 0
# define CHAR 1
# define CHARQUOT 2
# define INT 3
# define DOUBLE 4
# define FLOAT 5
# define LITERAL 6
# define UNKNOWN 7

class ScalarConverter
{
	public :
		~ScalarConverter();
		ScalarConverter(ScalarConverter const &other);
		ScalarConverter &operator=(ScalarConverter const &other);
		static void convert(const std::string &chaine);
		static void print_type();
		static void setType(std::string const &chaine);

		static std::string printType();
		static std::string printChar();
		static bool isChar(std::string const &str);
		static bool isCharQuot(std::string const &str);
		static bool isInt(std::string const &str);
		static bool isDouble(std::string const &str);
		static bool isFloat(std::string const &str);
		static bool isLiteral(std::string const &str);
		
	private :
		static int _type = 6;
		static std::string _str;

		ScalarConverter();
};