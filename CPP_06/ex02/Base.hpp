/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kylian <kylian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 23:00:33 by kylian            #+#    #+#             */
/*   Updated: 2023/10/02 23:16:23 by kylian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

class Base
{
	public :
		virtual ~Base();

};

Base	*generate(void);
void	identify(Base *p);
void	identify(Base &p);