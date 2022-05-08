/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 21:33:36 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/08 16:40:59 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

int	Harl::complain( std::string level ) {

	const t_msgs	which[] = {
		{"DEBUG", 0, &Harl::debug}, {"INFO", 1, &Harl::info}, 
		{"WARNING", 2, &Harl::warning}, {"ERROR", 3, &Harl::error},
		{"NULL", -1, NULL}
	};
	int	level_complain = 0;
	while (which[level_complain].complain != level)
		level_complain++;
	int	i = 0;
	while (which[i].complain != "NULL") {
		switch (i) {
			case 0: (this->*(which[i].f))();
			case 1: (this->*(which[i].f))();
			case 2: (this->*(which[i].f))();
			case 3: (this->*(which[i].f))();
			default:
				std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		}
		i++;
	}
}

void	Harl::debug( void ) {

	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
	std::cout << std::endl;
}

void	Harl::info( void ) {

	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
	std::cout << std::endl;
}

void	Harl::warning( void ) {

	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
	std::cout << std::endl;
}

void	Harl::error( void ) {

	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	std::cout << std::endl;
}

Harl::Harl( void ) {

}

Harl::~Harl( void ) {

}
