/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 15:57:13 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/05 14:52:57 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &ref ) : _name(name), _ptr_weapon(ref) {

}

HumanA::~HumanA( void ) { 
	
}

void	HumanA::attack( void ) {

	std::cout << HumanA::_name << " attacks with their " << HumanA::_ptr_weapon.getType() << std::endl;
}