/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 12:08:02 by ysoroko           #+#    #+#             */
/*   Updated: 2021/09/21 12:16:51 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <fstream>

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Please provide file_name str_to_replace str_substitute as arguments" << std::endl;
		return (-1);
	}
	// input filestream
	std::ifstream	ifs(argv[1]);
	// output filestream
	std::ofstream	ofs(argv[1] + ".replace");

	ofs.close();
	ifs.close();
}