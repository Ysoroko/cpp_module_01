/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 14:47:18 by ysoroko           #+#    #+#             */
/*   Updated: 2021/09/22 16:19:28 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen()
{

}
		
Karen::~Karen()
{
	
}

// Public
void	Karen::complain( std::string level )
{
	void (Karen::*fct[4])() = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
	std::string	msg[4] = {"debug", "info", "warning", "error"};
	for (int i = 0; i < 4; i++)
	{
		if (msg[i] == level)
		{
			*(fct[i]);
		}
	}
}


// Private
void	Karen::debug( void )
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void	Karen::info( void )
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void	Karen::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void	Karen::error( void )
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}
