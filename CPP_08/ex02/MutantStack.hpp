/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyaubry <kyaubry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 12:12:38 by kyaubry           #+#    #+#             */
/*   Updated: 2023/10/13 15:02:56 by kyaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <algorithm>
# include <list>
# include <stack>
# include <deque>

template<typename T>
class MutantStack : public std::stack<T>
{
	public :
		MutantStack() {};
		~MutantStack() {};
		MutantStack(const MutantStack &other) {*this = other; };
		MutantStack &operator=(const MutantStack &other) {
			std::stack<T>::operator=(other);
			return *this;
		}

		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator begin() {return this->c.begin();}
		iterator end() {return this->c.end();}
};