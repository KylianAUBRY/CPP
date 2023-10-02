/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kylian <kylian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 10:53:22 by kylian            #+#    #+#             */
/*   Updated: 2023/09/30 11:47:56 by kylian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm ("Shrubbery creation form", 145, 137)
{
	this->_target = target;	
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &other) : AForm(other)
{
	*this = other;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &other)
{
	this->_target = other._target;
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (this->getIsSigned() == false)
		throw AForm::FormNotSignedException();
	else if (executor.getGrade() > this->getRequiredExec())
		throw AForm::GradeTooLowException();
	std::ofstream myFile(this->_target + "_shrubbery");
	if (!myFile)
	{
		std::cout << "Error \nCant open file.\n";
		return ;
	}
	myFile << "          .     .  .      +     .      .          .                   .     .  .      +     .      .          .         " << '\n';
	myFile << "     .       .      .     #       .           .                  .       .      .     #       .           .             " << '\n';
	myFile << "        .      .         ###            .      .      .             .      .         ###            .      .      .     " << '\n';
	myFile << "      .      .   \"#:. .:##\"##:. .:#\"  .      .                    .      .   \"#:. .:##\"##:. .:#\"  .      .              " << '\n';
	myFile << "          .      . \"####\"###\"####\"  .                                 .      . \"####\"###\"####\"  .                       " << '\n';
	myFile << "       .     \"#:.    .:#\"###\"#:.    .:#\"  .        .       .       .     \"#:.    .:#\"###\"#:.    .:#\"  .        .       ." << '\n';
	myFile << "  .             \"#########\"#########\"        .        .       .             \"#########\"#########\"        .        .     " << '\n';
	myFile << "        .    \"#:.  \"####\"###\"####\"  .:#\"   .       .                .    \"#:.  \"####\"###\"####\"  .:#\"   .       .        " << '\n';
	myFile << "     .     .  \"#######\"\"##\"##\"\"#######\"                  .       .     .  \"#######\"\"##\"##\"\"#######\"                  .  " << '\n';
	myFile << "                .\"##\"#####\"#####\"##\"           .      .                     .\"##\"#####\"#####\"##\"           .      .     " << '\n';
	myFile << "    .   \"#:. ...  .:##\"###\"###\"##:.  ... .:#\"     .             .   \"#:. ...  .:##\"###\"###\"##:.  ... .:#\"     .         " << '\n';
	myFile << "      .     \"#######\"##\"#####\"##\"#######\"      .     .            .     \"#######\"##\"#####\"##\"#######\"      .     .      " << '\n';
	myFile << "    .    .     \"#####\"\"#######\"\"#####\"    .      .              .    .     \"#####\"\"#######\"\"#####\"    .      .          " << '\n';
	myFile << "            .     \"      000      \"    .     .                          .     \"      000      \"    .     .              " << '\n';
	myFile << "       .         .   .   000     .        .       .                .         .   .   000     .        .       .         " << '\n';
	myFile << ".. .. ..................O000O........................ ........ .. ..................O000O........................ ......" << std::endl;
	myFile.close();
}