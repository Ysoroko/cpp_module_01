/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 14:43:13 by ysoroko           #+#    #+#             */
/*   Updated: 2021/09/23 10:04:16 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

# include <iostream>

class Karen
{
	public:
		Karen();
		~Karen();
		void complain( std::string level );

	private:
		static void debug( void );
		static void info( void );
		static void warning( void );
		static void error( void );
};

#endif