/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 20:55:39 by ysoroko           #+#    #+#             */
/*   Updated: 2021/09/20 20:55:39 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce( void ) const
{
	std::cout << this->_name << " " << BraiiiiiiinnnzzzZ... << std::endl;
}

Zombie::Zombie(std::string name) : name(_name)
{
	announe();
}

Zombie::~Zombie()
{
	std::cout << "R.I.P " << this->_name << std::endl;
}