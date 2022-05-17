/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 15:56:11 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/17 09:50:32 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

Weapon::Weapon( std::string name_weapon ) : _type(name_weapon) {

}

Weapon::~Weapon( void ) {

}

std::string const	&Weapon::getType( void ) {

	std::string const &type_ref = Weapon::_type;

	return type_ref;
}

void	Weapon::setType( std::string name_weapon ) {

	_type = name_weapon;
}