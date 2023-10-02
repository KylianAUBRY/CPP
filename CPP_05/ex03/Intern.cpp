/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kylian <kylian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 09:43:53 by kylian            #+#    #+#             */
/*   Updated: 2023/10/02 10:00:09 by kylian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {}

Intern::~Intern() {}

Intern::Intern(Intern const &other)
{
	*this = other;
}

Intern &Intern::operator=(Intern const &other)
{
	return *this;
}

AForm *buildShrubberyCreationForm(std::string target)
{
	std::cout << "Intern creates " << "shrubbery creation" << '\n';
    return new ShrubberyCreationForm(target);
}

AForm *buildRobotomyRequestForm(std::string target)
{
	std::cout << "Intern creates " << "robotomy request" << '\n';
    return new RobotomyRequestForm(target);
}

AForm *buildPresidentialPardonForm(std::string target)
{
	std::cout << "Intern creates " << "presidential pardon" << '\n';
    return new PresidentialPardonForm(target);
}


AForm *Intern::makeForm(std::string const &formName, std::string const &target)
{
	typedef AForm *(*funcPtr)(std::string target);
	std::string tabName[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	funcPtr funcTab[3] = {&buildShrubberyCreationForm, &buildRobotomyRequestForm, &buildPresidentialPardonForm};
	for (int i = 0; i < 3; i++)
	{
		if (formName == tabName[i])
			return funcTab[i](target);
	}
	std::cout << "Intern can't create " << formName << std::endl;
    return NULL;

}