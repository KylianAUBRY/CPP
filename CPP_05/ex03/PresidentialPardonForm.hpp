/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kylian <kylian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 09:08:13 by kylian            #+#    #+#             */
/*   Updated: 2023/10/02 09:24:41 by kylian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

# include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
    private:
        std::string _target;
		PresidentialPardonForm();
	public:
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(PresidentialPardonForm const &other);
        ~PresidentialPardonForm();
        PresidentialPardonForm& operator=(const PresidentialPardonForm &other);
        void execute(Bureaucrat const & executor) const;
};
