/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 15:58:07 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/17 09:50:58 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : _name(name) {
	
}

HumanB::~HumanB( void ) {
	
}

void	HumanB::attack( void ) {

	if (_ptr_weapon == NULL)
		return ;
	
	if (_ptr_weapon->getType() != "")
		std::cout << _name << " attacks with their " << _ptr_weapon->getType() << std::endl;
	else
		std::cout << _name << " attacks with their bare hands" << std::endl;
}

void	HumanB::setWeapon( Weapon &ref ) {

	_ptr_weapon = &ref;
}