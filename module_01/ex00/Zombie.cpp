/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 16:40:20 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/04 11:49:13 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie( std::string name ) : _name(name) {

}

Zombie::~Zombie( void ) {

	std::cout << getName() << " doesn't need more brain." << std::endl;
}

void	Zombie::announce( void ) {

	std::cout << getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string Zombie::getName( void ) {

	return Zombie::_name;
}
