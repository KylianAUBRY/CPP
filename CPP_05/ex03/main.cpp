/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kylian <kylian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 13:31:12 by kyaubry           #+#    #+#             */
/*   Updated: 2023/10/02 10:04:43 by kylian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main()
{
	Intern slave;

	try {
		Bureaucrat  *bureaucrat = new Bureaucrat("Bureaucrat", 40);
		AForm *form1 = slave.makeForm("shrubbery creation", "Form1");
        AForm *form2 = slave.makeForm("robotomy request", "Form2");
		AForm *form3 = slave.makeForm("presidential pardon", "Form3");
		AForm *form4 = slave.makeForm("fake form", "coucou");
		std::cout << "----------------" <<'\n';
		bureaucrat->signForm(*form1);
        bureaucrat->signForm(*form2);
        bureaucrat->signForm(*form3);
		
		std::cout << "----------------" <<'\n';
		bureaucrat->executeForm(*form1);
		std::cout << '\n';
		bureaucrat->executeForm(*form2);
		std::cout << '\n';
		bureaucrat->executeForm(*form3);
		std::cout << "----------------" <<'\n';
		delete form1;
		delete form2;
		delete form3;
		delete bureaucrat;
	}
	catch (std::exception& e)
	{
		std::cout << "Error\n" << e.what() << '\n';
	}
}