/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 15:32:05 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/12 14:58:56 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) : _name(""), _hitPoints(10), _energyPoints(10), _attackDamage(0) {

	return ;
}

ClapTrap &ClapTrap::operator=( ClapTrap const & rhs ) {

	if ( this != &rhs ) {
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;
	}
	
	return *this;
}

ClapTrap::ClapTrap( ClapTrap const & src ) {
	
	*this = src;

	return ;
}

ClapTrap::~ClapTrap( void ) {

	std::cout << "The ClapTrap soldier " << this->_name << " has been erased. Goodbye" << std::endl;

	return ;
}

ClapTrap::ClapTrap( std::string name ) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {

	if (name != "")
		std::cout << "A new soldier has been created. His name is " << name << std::endl;
	else {
		std::cout << "A new soldier has been created. He has no name " << std::endl;
		this->_name = "Anonymus";
	}

	return ;
}

void	ClapTrap::attack( const std::string &target ) {

	if (this->_energyPoints == 0) {
		std::cout << "Not enough energy point for " << this->_name << std::endl;
		return ;
	}
	this->_energyPoints--;
	
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage( unsigned int amount ) {

	if (this->_hitPoints == 0) {
		std::cout << "\033[38;5;160m" << this->_name << " is already dead\033[0m" << std::endl;
		return ;
	}

	this->_hitPoints -= amount;
	if (this->_hitPoints < 0)
		this->_hitPoints = 0;

	std::cout << this->_name << " lost " << amount << " of hit point. He's down to " << this->_hitPoints << " hit points" << std::endl;
	
	if (this->_hitPoints == 0) {
		std::cout << "\033[38;5;160m" << this->_name << " is now dead\033[0m" << std::endl;
		return ;
	}
}

void	ClapTrap::beRepaired( unsigned int amount ) {

	if (this->_energyPoints == 0) {
		std::cout << "\033[38;5;214mNot enough energy point for " << this->_name << "\033[0m" << std::endl;
		return ;
	}

	this->_energyPoints--;	
	this->_hitPoints += amount;

	std::cout << this->_name << " repaired himself with " << amount
		<< " points. He's now at " << this->_hitPoints << " hit points" << std::endl;
	
}
