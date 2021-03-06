/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 15:02:48 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/16 10:33:42 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap("", 100, 50, 20) {

	return ;
}

ScavTrap &ScavTrap::operator=( ScavTrap const & rhs ) {

	if ( this != &rhs ) {
		_name = rhs._name;
		_hitPoints = rhs._hitPoints;
		_energyPoints = rhs._energyPoints;
		_attackDamage = rhs._attackDamage;
	}
	
	return *this;
}

ScavTrap::ScavTrap( ScavTrap const & src ) {
	
	*this = src;

	return ;
}

ScavTrap::~ScavTrap( void ) {

	std::cout << "The ScavTrap soldier " << _name << " has been erased. Goodbye" << std::endl;

	return ;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name, 100, 50, 20) {

	if (name != "")
		std::cout << "A new ScavTrap soldier has been created. His name is " << name << std::endl;
	else {
		std::cout << "A new ScavTrap soldier has been created. He has no name " << std::endl;
		_name = "Anonymus";
	}
	std::cout << GREY << _name << " --> [" << _hitPoints << "]hp - [" << _energyPoints << "]ep - [" << _attackDamage <<  "]ad" << NORM << std::endl;

	return ;
}

void	ScavTrap::guardGate( void ) {

	std::cout << _name << " has enter in mode Gate keeper. Be careful" << std::endl;
}

void	ScavTrap::attack( const std::string &target ) {

	if (_energyPoints == 0) {
		std::cout << "ScavTrap " << _name << ": not enough energy point for " << _name << std::endl;
		std::cout << GREY << _name << " --> [" << _hitPoints << "]hp - [" << _energyPoints << "]ep - [" << _attackDamage <<  "]ad" << NORM << std::endl;
		return ;
	}
	_energyPoints--;
	
	std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
}
