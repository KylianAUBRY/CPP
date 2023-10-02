/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kylian <kylian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 13:31:12 by kyaubry           #+#    #+#             */
/*   Updated: 2023/10/02 09:42:47 by kylian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
	try {
		Bureaucrat  *bureaucrat = new Bureaucrat("Bureaucrat", 40);
		AForm *form1 = new ShrubberyCreationForm("form1");
        AForm *form2 = new RobotomyRequestForm("Form2");
		AForm *form3 = new PresidentialPardonForm("Form3");

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
		delete bureaucrat;
		bureaucrat = new Bureaucrat("Bureaucrat", 20);
		bureaucrat->signForm(*form3);
		std::cout << '\n';
		bureaucrat->executeForm(*form3);
		std::cout << '\n';
		delete bureaucrat;
		bureaucrat = new Bureaucrat("Bureaucrat", 1);
		bureaucrat->signForm(*form3);
		std::cout << '\n';
		bureaucrat->executeForm(*form3);
		delete bureaucrat;
		delete form3;
	}
	catch (std::exception& e)
	{
		std::cout << "Error\n" << e.what() << '\n';
	}
}