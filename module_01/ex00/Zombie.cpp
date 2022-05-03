/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 16:40:20 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/03 17:17:25 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>
#include "Zombie.hpp"

Zombie::Zombie( std::string name ) : _name(name) {

	this->announce();
	return ;
}

Zombie::~Zombie( void ) {

	std::cout << "\033[38;5;160m" << this->_name << " doesn't need more brain.\033[0m" << std::endl;
}

void	Zombie::announce( void ) {

	std::cout << "\033[38;5;70m" << this->_name << ": BraiiiiiiinnnzzzZ...\033[0m" << std::endl;
}

std::string Zombie::getName( void ) {

	return Zombie::_name;
}