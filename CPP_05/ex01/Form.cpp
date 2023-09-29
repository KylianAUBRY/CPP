/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyaubry <kyaubry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 13:55:23 by kyaubry           #+#    #+#             */
/*   Updated: 2023/09/29 17:02:39 by kyaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::~Form() {}

Form::Form(std::string const &name, int sign, int exec) : _name(name), _requiredSigned(sign), _requiredExec(exec)
{
	this->_isSigned = false;
	if (sign < 1 || exec < 1)
		throw GradeTooHighException();
	if (sign > 150 || exec > 150)
		throw GradeTooLowException();
}

const char *Form::GradeTooLowException::what() const throw()
{
	return "The grade is too small.";
}

const char *Form::GradeTooHighException::what() const throw()
{
	return "The grade is too big.";
}

std::string const &Form::getName() const
{
	return this->_name;
}

bool const &Form::getIsSigned() const
{
	return this->_isSigned;
}

int const &Form::getRequiredSigned() const
{
	return this->_requiredSigned;
}

int const &Form::getRequiredExec() const
{
	return this->_requiredExec;
}

void Form::beSigned(Bureaucrat bureaucrat)
{
	if (bureaucrat.getGrade() <= this->_requiredSigned)
		_isSigned = true;
	else
		throw GradeTooLowException();
}


std::ostream& operator<<(std::ostream& out, const Form& form)
{
	out << form.getName() << ": " << "isSigned : " << form.getIsSigned() << '\n';
	for (int i = 0; i <= form.getName().length() + 2; i++)
		out << ' ';
	out << "RequiredSigned : " << form.getRequiredSigned() << '\n';
	for (int i = 0; i < form.getName().length() + 2; i++)
		out << ' ';
	out << "RequiredExec : " << form.getRequiredExec() << '\n';
	return out;
}