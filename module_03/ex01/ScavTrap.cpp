/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 15:02:48 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/13 14:42:29 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap("", 100, 50, 20) {

	return ;
}

ScavTrap &ScavTrap::operator=( ScavTrap const & rhs ) {

	if ( this != &rhs ) {
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;
	}
	
	return *this;
}

ScavTrap::ScavTrap( ScavTrap const & src ) {
	
	*this = src;

	return ;
}

ScavTrap::~ScavTrap( void ) {

	std::cout << "The ScavTrap soldier " << this->_name << " has been erased. Goodbye" << std::endl;

	return ;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name, 100, 50, 20) {

	if (name != "")
		std::cout << "A new ScavTrap soldier has been created. His name is " << name << std::endl;
	else {
		std::cout << "A new ScavTrap soldier has been created. He has no name " << std::endl;
		this->_name = "Anonymus";
	}
	std::cout << GREY << this->_name << " --> [" << _hitPoints << "]hp - [" << _energyPoints << "]ep - [" << _attackDamage <<  "]ad" << NORM << std::endl;

	return ;
}

void	ScavTrap::guardGate( void ) {

	std::cout << this->_name << " has enter in mode Gate keeper. Be careful" << std::endl;
}

void	ScavTrap::attack( const std::string &target ) {

	if (this->_energyPoints == 0) {
		std::cout << "ScavTrap " << _name << ": not enough energy point for " << this->_name << std::endl;
		std::cout << GREY << this->_name << " --> [" << _hitPoints << "]hp - [" << _energyPoints << "]ep - [" << _attackDamage <<  "]ad" << NORM << std::endl;
		return ;
	}
	this->_energyPoints--;
	
	std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
}
