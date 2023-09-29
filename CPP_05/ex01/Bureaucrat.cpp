/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyaubry <kyaubry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 12:23:50 by kyaubry           #+#    #+#             */
/*   Updated: 2023/09/29 17:56:15 by kyaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(std::string const &name, int grade) : _name(name)
{
	if (grade > 150)
		throw GradeTooLowException();
	else if (grade < 1)
		throw GradeTooHighException();
	else
		this->_grade = grade;
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(Bureaucrat const &other)
{
	*this = other;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &other)
{
	this->_grade = other._grade;
	return *this;
}

std::string const &Bureaucrat::getName() const
{
	return this->_name;
}

int const &Bureaucrat::getGrade() const
{
	return this->_grade;
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "The grade is too small.";
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "The grade is too big.";
}

void Bureaucrat::increment()
{
	if (this->_grade - 1 < 1)
		throw GradeTooHighException();
	else
		this->_grade--;
}

void Bureaucrat::decrement()
{
	if (this->_grade + 1 > 150)
		throw GradeTooLowException();
	else
		this->_grade++;
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& Bureaucrat)
{
	out << Bureaucrat.getName() << ", bureaucrat grade " << Bureaucrat.getGrade() << ".\n";
	return out;
}

void Bureaucrat::signForm(Form form) const
{
	std::cout << this->_name << " ";
	try{
		form.beSigned(*this);
		std::cout << "signed " << form.getName() << '\n';
	}
	catch (std::exception &e)
	{
		std::cout << "couldn't sign " << form.getName() << " because : " << e.what() << ".\n";
	}	
}