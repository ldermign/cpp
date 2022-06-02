/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 15:30:27 by ldermign          #+#    #+#             */
/*   Updated: 2022/06/02 10:57:57 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main( void ) {

	std::cout << std::endl;

	std::cout << "----------------------- Basic tests ----------------------------" << std::endl;

	ClapTrap sparte("Spartiate");
	ClapTrap rome("Roman");
	ScavTrap gaule("Gallic");

	std::cout << std::endl;

	std::cout << "----------------------- Start war -----------------------------" << std::endl;

	gaule.attack("Roman");
	rome.takeDamage(20);
	
	std::cout << std::endl;

	gaule.guardGate();

	std::cout << std::endl;

	sparte.attack("Gallic");
	gaule.takeDamage(10);
	sparte.attack("Gallic");
	gaule.takeDamage(10);

	std::cout << std::endl;

	std::cout << "----------------------- End of war ---------------------------" << std::endl;
	
}
