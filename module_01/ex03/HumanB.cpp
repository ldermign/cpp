/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 15:58:07 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/05 14:52:48 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : _name(name) {
	
}

HumanB::~HumanB( void ) {
	
}

void	HumanB::attack( void ) {

	std::string		weapon = HumanB::_ptr_weapon->getType();

	if (weapon == "")
		weapon = "bare hands";
	std::cout << HumanB::_name << " attacks with their " << weapon << std::endl;
}

void	HumanB::setWeapon( Weapon &ref ) {

	HumanB::_ptr_weapon = &ref;
}