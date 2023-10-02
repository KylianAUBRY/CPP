/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kylian <kylian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 13:55:23 by kyaubry           #+#    #+#             */
/*   Updated: 2023/09/30 11:47:38 by kylian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::~AForm() {}

AForm::AForm(std::string const &name, int sign, int exec) : _name(name), _requiredSigned(sign), _requiredExec(exec)
{
	this->_isSigned = false;
	if (sign < 1 || exec < 1)
		throw GradeTooHighException();
	if (sign > 150 || exec > 150)
		throw GradeTooLowException();
}

AForm::AForm(AForm const &other) : _name(other._name), _isSigned(other._isSigned), _requiredExec(other._requiredExec), _requiredSigned(other._requiredSigned)
{
	*this = other;
}

AForm &AForm::operator=(AForm const &other)
{
	std::cout << "you can't copy anything everything is constant\n";
	return *this;
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return "The grade is too small.";
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return "The grade is too big.";
}

const char *AForm::FormNotSignedException::what() const throw()
{
	return "The form is not signed.";
}

std::string const &AForm::getName() const
{
	return this->_name;
}

bool const &AForm::getIsSigned() const
{
	return this->_isSigned;
}

int const &AForm::getRequiredSigned() const
{
	return this->_requiredSigned;
}

int const &AForm::getRequiredExec() const
{
	return this->_requiredExec;
}

void AForm::beSigned(Bureaucrat bureaucrat)
{
	if (bureaucrat.getGrade() <= this->_requiredSigned)
		_isSigned = true;
	else
		throw GradeTooLowException();
}


std::ostream& operator<<(std::ostream& out, const AForm& form)
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