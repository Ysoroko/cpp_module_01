/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 10:19:35 by ysoroko           #+#    #+#             */
/*   Updated: 2021/11/24 13:37:00 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	// String
	std::string str = "HI THIS IS BRAIN";

	// String's address / pointer
	std::string *stringPTR = &str;

	// A reference to the string
	// Always constant and not NULL
	// As with const variables, assignation during initialization is needed
	std::string	&stringREF = str;

	// Display the address
	std::cout << std::endl;
	
	std::cout << "Address of the string: " << std::endl;
	std::cout << "----------------------" << std::endl;
	std::cout << "via string address: " << &str << std::endl;
	std::cout << "via stringPTR: " << stringPTR << std::endl;
	std::cout << "via stringREF: " << &stringREF << std::endl;

	// Display the value
	std::cout << std::endl;

	std::cout << "Value of the string: " << std::endl;
	std::cout << "----------------------" << std::endl;
	std::cout << "via string itself: " << str << std::endl;
	std::cout << "via stringPTR: " << *stringPTR << std::endl;
	std::cout << "via stringREF: " << stringREF << std::endl;
	
	std::cout << std::endl;
	return (0);
}