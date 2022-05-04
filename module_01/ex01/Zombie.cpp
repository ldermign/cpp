/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 17:23:46 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/04 15:06:32 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

std::string	Zombie::getNameZombie( void ) {

	return this->_nameZombie;
}

void	Zombie::announce( void ) {

	std::cout << getNameZombie() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setNameZombie( std::string name ) {
	
	this->_nameZombie = name;
}

Zombie::Zombie( void ) {

	std::cout << "New Zombie created." << std::endl;
}

Zombie::~Zombie( void ) {

	std::cout << "The Zombie has been erased." << std::endl;
}
