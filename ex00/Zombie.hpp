/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 20:55:41 by ysoroko           #+#    #+#             */
/*   Updated: 2021/09/20 20:55:41 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
	private: 
		const std::string	_name;

	public:
		Zombie(std::string name);
		~Zombie();
		void	announce( void ) const;

};

void randomChump( std::string name );
Zombie* newZombie( std::string name );

#endif