/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kylian <kylian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 11:53:19 by kylian            #+#    #+#             */
/*   Updated: 2023/09/30 11:58:06 by kylian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

# include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	private :
		std::string _target;
		RobotomyRequestForm();
	public :
		RobotomyRequestForm(std::string const &target);
		~RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm &other);
		RobotomyRequestForm &operator=(const RobotomyRequestForm &other);
		void execute(Bureaucrat const & executor) const;
};