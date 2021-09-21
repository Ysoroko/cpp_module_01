/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 10:48:44 by ysoroko           #+#    #+#             */
/*   Updated: 2021/09/21 11:40:13 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

// Constructor (HumanA = with weapon)
HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{
}

// Destructor
HumanA::~HumanA()
{
	
}

// NAME attacks with his WEAPON_TYPE
void	HumanA::attack( void ) const
{
	std::cout << this->_name << " attacks with his "
				<< this->_weapon.get_type() << std::endl;
}
