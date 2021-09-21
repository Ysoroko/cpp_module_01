/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 10:53:03 by ysoroko           #+#    #+#             */
/*   Updated: 2021/09/21 11:58:03 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

// Constructor (HumanB = without weapon)
HumanB::HumanB(std::string name) : _name(name)
{
	this->_weapon = NULL;
}

// Destructor
HumanB::~HumanB()
{
	
}

// NAME attacks with his WEAPON_TYPE
void	HumanB::attack( void ) const
{
	if (this->_weapon)
	{
		std::cout << this->_name << " attacks with his "
				<< (*(this->_weapon)).get_type() << std::endl;
	}
	else
	{
		std::cout << this->_name << " tries to attack but has no weapon "
					<< std::endl;
	}
	
}

void HumanB::setWeapon(Weapon &new_weapon)
{
	this->_weapon = &new_weapon;
}
