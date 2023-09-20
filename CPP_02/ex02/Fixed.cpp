/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyaubry <kyaubry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 15:21:37 by kyaubry           #+#    #+#             */
/*   Updated: 2023/09/19 11:35:14 by kyaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << '\n';
	this->_value = 0;
}

Fixed::Fixed(const int nb)
{
	this->_value = nb << _nmBitFactional;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float nb)
{
	this->_value = roundf(nb * (1 << _nmBitFactional));
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << '\n';
	*this = other;
}

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called" << '\n';
	if (this != &other)
		this->_value = other.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << '\n';
}

int Fixed::getRawBits(void) const
{
	return this->_value;
}

void    Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

float Fixed::toFloat(void) const
{
	return ((static_cast<float>(this->getRawBits())) / (1 << _nmBitFactional));
}

int Fixed::toInt(void) const
{
	return (this->_value >> _nmBitFactional);
}

std::ostream & operator<<(std::ostream & o, Fixed const & i)
{
	o << i.toFloat();
	return (o);
}

bool Fixed::operator>(const Fixed &nbr)const
{
	return (this->getRawBits() > nbr.getRawBits());
}

bool Fixed::operator<(const Fixed &nbr)const
{
	return (this->getRawBits() < nbr.getRawBits());
}

bool Fixed::operator>=(const Fixed &nbr)const
{
	return (this->getRawBits() >= nbr.getRawBits());
}

bool Fixed::operator<=(const Fixed &nbr)const
{
	return (this->getRawBits() <= nbr.getRawBits());
}

bool Fixed::operator==(const Fixed &nbr)const
{
	return (this->getRawBits() == nbr.getRawBits());
}

bool Fixed::operator!=(const Fixed &nbr)const
{
	return (this->getRawBits() != nbr.getRawBits());
}

Fixed Fixed::operator+(const Fixed &nbr)const
{
	return (this->toFloat() + nbr.toFloat());
}

Fixed Fixed::operator-(const Fixed &nbr)const
{
	return (this->toFloat() - nbr.toFloat());
}

Fixed Fixed::operator*(const Fixed &nbr)const
{
	return (this->toFloat() * nbr.toFloat());
}

Fixed Fixed::operator/(const Fixed &nbr)const
{
	return (this->toFloat() / nbr.toFloat());
}

Fixed &Fixed::operator++(void)
{
	++this->_value;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	tmp._value = this->_value++;
	return tmp;
}

Fixed &Fixed::operator--(void)
{
	--this->_value;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	tmp._value = this->_value--;
	return tmp;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}