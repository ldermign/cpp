/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 15:32:05 by ldermign          #+#    #+#             */
/*   Updated: 2022/06/02 11:10:06 by ldermign         ###   ########.fr       */
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
	std::cout << GREY << this->_name << " --> [" << _hitPoints << "]hp - [" << _energyPoints << "]ep - [" << _attackDamage <<  "]ad" << NORM << std::endl;

	return ;
}

ClapTrap::ClapTrap( std::string name, int hp, int ep, int ad ) : _name(name), _hitPoints(hp), _energyPoints(ep), _attackDamage(ad) {

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
		std::cout << RED << this->_name << " is already dead" << NORM << std::endl;
		std::cout << GREY << this->_name << " --> [" << _hitPoints << "]hp - [" << _energyPoints << "]ep - [" << _attackDamage <<  "]ad" << NORM << std::endl;
		return ;
	}

	this->_hitPoints -= amount;
	if (this->_hitPoints < 0)
		this->_hitPoints = 0;

	std::cout << this->_name << " lost " << amount << " of hit point. He's down to " << this->_hitPoints << " hit points" << std::endl;
	
	if (this->_hitPoints == 0) {
		std::cout << RED << this->_name << " is now dead" << NORM << std::endl;
		std::cout << GREY << this->_name << " --> [" << _hitPoints << "]hp - [" << _energyPoints << "]ep - [" << _attackDamage <<  "]ad" << NORM << std::endl;
		return ;
	}

	std::cout << GREY << this->_name << " --> [" << _hitPoints << "]hp - [" << _energyPoints << "]ep - [" << _attackDamage <<  "]ad" << NORM << std::endl;

}

void	ClapTrap::beRepaired( unsigned int amount ) {

	if (this->_energyPoints == 0) {
		std::cout << YELL << "Not enough energy point for " << this->_name << NORM << std::endl;
		return ;
	}

	this->_energyPoints--;	
	this->_hitPoints += amount;

	std::cout << this->_name << " repaired himself with " << amount
		<< " points. He's now at " << this->_hitPoints << " hit points" << std::endl;
	
}
