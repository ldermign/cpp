/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 21:33:36 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/07 00:14:42 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

void	Harl::complain( std::string level ) {

	const t_msgs	which[] = {
		{"DEBUG", &Harl::debug}, {"INFO", &Harl::info}, 
		{"WARNING", &Harl::warning}, {"ERROR", &Harl::error},
		{"NULL", NULL}
	};
	int	ret = 0;
	int	i = 0;
	while (which[i].complain != "NULL") {
		if (level == which[i].complain) {
			(this->*(which[i].f))();
			ret = 1;
			break ;
		}
		i++;
	}
	if (ret != 1)
		std::cout << "Wrong argument." << std::endl;

}

void	Harl::debug( void ) {

	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info( void ) {

	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning( void ) {

	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error( void ) {

	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

Harl::Harl( void ) {

}

Harl::~Harl( void ) {

}
