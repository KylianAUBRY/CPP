/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kylian <kylian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 13:55:22 by kyaubry           #+#    #+#             */
/*   Updated: 2023/09/30 11:40:42 by kylian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_PP
# define FORM_PP

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private :
		const std::string _name;
		bool _isSigned;
		const int _requiredSigned;
		const int _requiredExec;
		Form();
	public :
		~Form();
		Form(std::string const &name, int sign, int exec);
		Form(const Form &other);
		Form &operator=(const Form &other);
		class GradeTooLowException: public std::exception {
			virtual const char *what() const throw();
		};
		class GradeTooHighException: public std::exception {
			virtual const char *what() const throw();
		};
		std::string const &getName() const;
		bool const &getIsSigned() const;
		int const &getRequiredSigned() const;
		int const &getRequiredExec() const;
		void beSigned(Bureaucrat bureaucrat);
};

std::ostream& operator<<(std::ostream& out, const Form& form);

#endif