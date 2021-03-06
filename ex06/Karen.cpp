/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 14:47:18 by ysoroko           #+#    #+#             */
/*   Updated: 2021/09/23 11:11:49 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <stdio.h>

Karen::Karen()
{

}
		
Karen::~Karen()
{
	
}

// Private
void	Karen::debug( void )
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
	std::cout << std::endl;
}

void	Karen::info( void )
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
	std::cout << std::endl;
}

void	Karen::warning( void )
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I’ve been coming here for years and you just started working here last month." << std::endl;
	std::cout << std::endl;
}

void	Karen::error( void )
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
	std::cout << std::endl;
}

// Public
void	Karen::complain( std::string level )
{
	void	(Karen::*fct[4])(void) = { &Karen::debug, &Karen::info, &Karen::warning, &Karen::error };
	std::string	msg[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int	index = -1;
	for (int i = 0; i < 4; i++)
	{
		if (level == msg[i])
		{
			index = i;
			break;
		}
	}

	switch (index)
	{
		case (0):
			for (int i = index; i < 4; i++)
				(this->*(fct[i]))();
			break ;
		case (1):
			for (int i = index; i < 4; i++)
				(this->*(fct[i]))();
			break ;

		case (2):
			for (int i = index; i < 4; i++)
				(this->*(fct[i]))();
			break ;

		case (3):
			for (int i = index; i < 4; i++)
				(this->*(fct[i]))();
			break ;

		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break ;
	}
}



