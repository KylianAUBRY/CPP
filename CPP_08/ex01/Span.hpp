/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyaubry <kyaubry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 13:44:37 by kyaubry           #+#    #+#             */
/*   Updated: 2023/10/11 11:23:19 by kyaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>
# include <vector>
# include <list>
# include <algorithm>
# include <stdexcept>
# include <cstdarg>

class Span
{
	private :
		std::list<int> _list;
		unsigned int _nb;
		Span();
	public :
		Span(unsigned int nb);
		~Span();
		Span(const Span &other);
		Span &operator=(const Span &other);
		
		void addNumber(int nb);
		void addnNumber(int nb_elem, ...);

		unsigned int longestSpan();
		unsigned int shortestSpan();
};