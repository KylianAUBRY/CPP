/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kylian <kylian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 12:23:49 by kyaubry           #+#    #+#             */
/*   Updated: 2023/10/02 09:15:12 by kylian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <stdexcept>

#include "AForm.hpp"

class AForm;

class Bureaucrat
{
	private :
		const std::string _name;
		int _grade;
		Bureaucrat();
	public :
		Bureaucrat(std::string const &name, int grade);
		~Bureaucrat();
		Bureaucrat(Bureaucrat const &other);
		Bureaucrat &operator=(Bureaucrat const &other);
		std::string const &getName() const;
		int const &getGrade() const;
		class GradeTooLowException: public std::exception {
			virtual const char *what() const throw();
		};
		class GradeTooHighException: public std::exception {
			virtual const char *what() const throw();
		};
		void increment();
		void decrement();
		void signForm(AForm &form) const;
		void executeForm(AForm const &form);
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& Bureaucrat);

#endif