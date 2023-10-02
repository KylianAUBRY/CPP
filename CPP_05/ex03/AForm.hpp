/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kylian <kylian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 13:55:22 by kyaubry           #+#    #+#             */
/*   Updated: 2023/09/30 11:21:29 by kylian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_PP
# define AFORM_PP

# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private :
		const std::string _name;
		bool _isSigned;
		const int _requiredSigned;
		const int _requiredExec;
		AForm();
	public :
		virtual ~AForm();
		AForm(std::string const &name, int sign, int exec);
		AForm(AForm const &other);
		AForm &operator=(AForm const &other);
		class GradeTooLowException: public std::exception {
			virtual const char *what() const throw();
		};
		class GradeTooHighException: public std::exception {
			virtual const char *what() const throw();
		};
		class FormNotSignedException: public std::exception {
			virtual const char *what() const throw();
		};
		std::string const &getName() const;
		bool const &getIsSigned() const;
		int const &getRequiredSigned() const;
		int const &getRequiredExec() const;
		void beSigned(Bureaucrat bureaucrat);
		virtual void execute(Bureaucrat const & executor) const = 0;
};

std::ostream& operator<<(std::ostream& out, const AForm& form);

#endif