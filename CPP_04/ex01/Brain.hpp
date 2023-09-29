/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyaubry <kyaubry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 11:06:00 by kyaubry           #+#    #+#             */
/*   Updated: 2023/09/23 11:23:08 by kyaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{
	private :
		std::string *ideas;

	public :
		Brain();
		Brain(const Brain &other);
		Brain& operator=(const Brain &other);
		~Brain();
		std::string getIdeas(int i) const;
		void setIdeas(int i, std::string ideas);
};

#endif