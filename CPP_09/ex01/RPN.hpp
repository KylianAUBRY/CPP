/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyaubry <kyaubry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 16:15:25 by kyaubry           #+#    #+#             */
/*   Updated: 2023/10/13 17:30:03 by kyaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>
# include <stack>

# define ADD 1
# define SUB 2
# define MUL 3
# define DIV 4

class PolishNotation
{
	private :
		std::stack<int> _stack;
	public :
		PolishNotation();
		~PolishNotation();
		PolishNotation(const PolishNotation &other);
		PolishNotation &operator=(const PolishNotation &other);

		void calculator(char signe);
		void add_stack(int number);
		int result();
};

int CalculatorPolishNotation(std::string const &line);
