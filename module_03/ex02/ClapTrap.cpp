/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 15:32:05 by ldermign          #+#    #+#             */
/*   Updated: 2022/06/02 11:10:14 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) : _name(""), _hitPoints(10), _energyPoints(10), _attackDamage(0) {

	std::cout << "The ClapTrap soldier Anonymus has been created" << std::endl;
	this->_name = "Anonymus";

	return ;
}

ClapTrap &ClapTrap::operator=( ClapTrap const & rhs ) {

	if ( this != &rhs ) {
		_name = rhs._name;
		_hitPoints = rhs._hitPoints;
		_energyPoints = rhs._energyPoints;
		_attackDamage = rhs._attackDamage;
	}
	
	return *this;
}

ClapTrap::ClapTrap( ClapTrap const & src ) {
	
	*this = src;

	return ;
}

ClapTrap::~ClapTrap( void ) {

	std::cout << "The ClapTrap soldier " << _name << " has been erased. Goodbye" << std::endl;

	return ;
}

ClapTrap::ClapTrap( std::string name ) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {

	if (name != "")
		std::cout << "A new ClapTrap soldier has been created. His name is " << name << std::endl;
	else {
		std::cout << "A new ClapTrap soldier has been created. He has no name " << std::endl;
		_name = "Anonymus";
	}
	std::cout << GREY << _name << " --> [" << _hitPoints << "]hp - [" << _energyPoints << "]ep - [" << _attackDamage <<  "]ad" << NORM << std::endl;

	return ;
}

ClapTrap::ClapTrap( std::string name, int hp, int ep, int ad ) : _name(name), _hitPoints(hp), _energyPoints(ep), _attackDamage(ad) {

	if (name != "")
		std::cout << "A new ClapTrap soldier has been created. His name is " << name << std::endl;
	else {
		std::cout << "A new ClapTrap soldier has been created. He has no name " << std::endl;
		_name = "Anonymus";
	}

	return ;
}

void	ClapTrap::attack( const std::string &target ) {

	if (_energyPoints == 0) {
		std::cout << "Not enough energy point for " << _name << std::endl;
		return ;
	}
	_energyPoints--;
	
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage( unsigned int amount ) {

	if (_hitPoints == 0) {
		std::cout << RED << _name << " is already dead" << NORM << std::endl;
		std::cout << GREY << _name << " --> [" << _hitPoints << "]hp - [" << _energyPoints << "]ep - [" << _attackDamage <<  "]ad" << NORM << std::endl;
		return ;
	}

	_hitPoints -= amount;
	if (_hitPoints < 0)
		_hitPoints = 0;

	std::cout << _name << " lost " << amount << " of hit point. He's down to " << _hitPoints << " hit points" << std::endl;
	
	if (_hitPoints == 0) {
		std::cout << RED << _name << " is now dead" << NORM << std::endl;
		std::cout << GREY << _name << " --> [" << _hitPoints << "]hp - [" << _energyPoints << "]ep - [" << _attackDamage <<  "]ad" << NORM << std::endl;
		return ;
	}

	std::cout << GREY << _name << " --> [" << _hitPoints << "]hp - [" << _energyPoints << "]ep - [" << _attackDamage <<  "]ad" << NORM << std::endl;

}

void	ClapTrap::beRepaired( unsigned int amount ) {

	if (_energyPoints == 0) {
		std::cout << YELL << "Not enough energy point for " << _name << NORM << std::endl;
		return ;
	}

	_energyPoints--;	
	_hitPoints += amount;

	std::cout << _name << " repaired himself with " << amount
		<< " points. He's now at " << _hitPoints << " hit points" << std::endl;
	
}
