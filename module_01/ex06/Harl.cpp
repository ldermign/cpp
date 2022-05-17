/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 21:33:36 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/17 10:10:29 by ldermign         ###   ########.fr       */
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
	int	level_complain = 0;
	while (level_complain < 5 && which[level_complain].complain != level)
		level_complain++;
	switch (level_complain) {
		case 0:
			(this->*(which[0].f))();
		case 1:
			(this->*(which[1].f))();
		case 2:
			(this->*(which[2].f))();
		case 3:
			(this->*(which[3].f))();
	}
	if (level_complain > 3 || level_complain < 0)
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
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
