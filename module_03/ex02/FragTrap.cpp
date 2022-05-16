/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 10:02:41 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/16 11:06:35 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"

FragTrap::FragTrap( void ) : ClapTrap("", 100, 100, 30) {

	return ;
}

FragTrap &FragTrap::operator=( FragTrap const & rhs ) {

	if ( this != &rhs ) {
		_name = rhs._name;
		_hitPoints = rhs._hitPoints;
		_energyPoints = rhs._energyPoints;
		_attackDamage = rhs._attackDamage;
	}
	
	return *this;
}

FragTrap::FragTrap( FragTrap const & src ) {
	
	*this = src;

	return ;
}

FragTrap::~FragTrap( void ) {

	std::cout << "The FragTrap soldier " << _name << " has been erased. Goodbye" << std::endl;

	return ;
}

FragTrap::FragTrap( std::string name ) : ClapTrap(name, 100, 100, 30) {

	if (name != "")
		std::cout << "A new FragTrap soldier has been created. His name is " << name << std::endl;
	else {
		std::cout << "A new FragTrap soldier has been created. He has no name " << std::endl;
		_name = "Anonymus";
	}
	std::cout << GREY << _name << " --> [" << _hitPoints << "]hp - [" << _energyPoints << "]ep - [" << _attackDamage <<  "]ad" << NORM << std::endl;

	return ;
}

void	FragTrap::highFivesGuys( void ) {

	std::cout << "FragTrap soldier " << _name << " want to high five all of you. Are you ok with that ?" << std::endl;
}

void	FragTrap::attack( const std::string &target ) {

	if (_energyPoints == 0) {
		std::cout << "FragTrap " << _name << ": not enough energy point for " << _name << std::endl;
		std::cout << GREY << _name << " --> [" << _hitPoints << "]hp - [" << _energyPoints << "]ep - [" << _attackDamage <<  "]ad" << NORM << std::endl;
		return ;
	}
	_energyPoints--;
	
	std::cout << "FragTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
}
