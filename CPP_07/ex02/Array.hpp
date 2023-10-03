/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kylian <kylian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:39:48 by kylian            #+#    #+#             */
/*   Updated: 2023/10/03 15:25:06 by kylian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>

template<class T>
class Array
{
	private :
		T	*_array;
		unsigned int	_size;
	public :
		Array() : _array(new T()), _size(0){};
		~Array() { delete [] _array; };
		Array(unsigned int n) : _array(new T[n]), _size(n) {};
		Array(Array const &other) : _array(new T[other.size()]), _size(other._sz)
		{
			for (unsigned int i = 0; i < this->_size; i++)
				this->_array[i] = other._array[i];
		};
		Array &operator=(Array const &other)
		{
			if (this != &other)
			{
				delete [] this->_array;
				this->_size = other.size;
				this->_array = new T[this->_size];
				for (unsigned int i = 0; i < this->_size; i++)
					this->_array[i] = other._array[i];
			}
			return *this;
		};
		class InvalidIndex : public std::exception
		{
			public :
				virtual const char *what() const throw () {return "Invalid index";};
		};
		T& operator[](unsigned int i) const{
			if (i >= this->_size)
				throw Array::InvalidIndex();
			return this->_array[i];
		};
		unsigned int size(void) const {return this->_size;};
};

template<typename T>
std::ostream &operator<<(std::ostream &o, Array<T> &array)
{
	for (unsigned int i = 0; i < array.size(); i++)
		o << array[i] << " ";
	return o;
} 
