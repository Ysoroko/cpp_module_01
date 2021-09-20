/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 20:54:51 by ysoroko           #+#    #+#             */
/*   Updated: 2021/09/20 20:54:51 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	stack_zombie("Stack Zombie");
	Zombie	*heap_zombie = newZombie("Heap Zombie");

	randomChump("Random Chump Zombie");
	delete heap_zombie;
	return (0);
}