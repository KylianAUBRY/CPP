/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyaubry <kyaubry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 12:23:49 by kyaubry           #+#    #+#             */
/*   Updated: 2023/09/29 14:43:33 by kyaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <stdexcept>

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
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& Bureaucrat);

#endif