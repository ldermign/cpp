/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 15:58:07 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/04 18:10:49 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	HumanB::HumanB( std::string name, Weapon *ptr ) : _name(name), _weapon(ptr) {
	
}

void	HumanB::attack( void ) {

	if (weapon == "")
		weapon = "bare hands"
	
	std::cout << this->getType() << " attacks with their " << weapon;
}