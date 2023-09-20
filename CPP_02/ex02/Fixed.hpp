/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyaubry <kyaubry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 15:21:24 by kyaubry           #+#    #+#             */
/*   Updated: 2023/09/19 11:35:50 by kyaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include<cmath>

class Fixed
{
	private :
		int _value;
		static const int _nmBitFactional = 8;
	
	public :
		Fixed() ;
		Fixed(const int nb);
		Fixed(const float nb);
		Fixed(const Fixed& other);
		Fixed& operator=(const Fixed& other);
		~Fixed();

		int getRawBits(void) const;
		void setRawBits(int const raw);

		float toFloat(void) const;
		int toInt(void) const;
		bool operator>(const Fixed &nbr)const;
		bool operator<(const Fixed &nbr)const;
		bool operator>=(const Fixed &nbr)const;
		bool operator<=(const Fixed &nbr)const;
		bool operator==(const Fixed &nbr)const;
		bool operator!=(const Fixed &nbr)const;
		Fixed operator+(const Fixed &nbr)const;
		Fixed operator-(const Fixed &nbr)const;
		Fixed operator*(const Fixed &nbr)const;
		Fixed operator/(const Fixed &nbr)const;
		Fixed &operator++(void);
		Fixed operator++(int);
		Fixed &operator--(void);
		Fixed operator--(int);
		static Fixed &min(Fixed &a, Fixed &b);
		static const Fixed &min(const Fixed &a, const Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);
		static const Fixed &max(const Fixed &a, const Fixed &b);
};

std::ostream & operator<<(std::ostream &o, Fixed const &i);

#endif