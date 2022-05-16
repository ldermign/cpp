/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 15:30:27 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/16 11:23:18 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main( void ) {

	std::cout << std::endl << "----------------------- Competitors ----------------------------" << std::endl;

	std::cout << "In order : ClapTrap(Spartiate) - ClapTrap(Gallic) - ScavTrap(Gallic) - ClapTrap(Roman) - FragTrap(Roman)" << std::endl;
	ClapTrap sparte("Spartiate");
	ScavTrap gaule("Gallic");
	FragTrap rome("Roman");

	std::cout << std::endl << GREEN"----------------------- Start war -----------------------------"NORM << std::endl;

	gaule.attack("Spartiate");
	sparte.takeDamage(20);
	gaule.attack("Roman");
	rome.takeDamage(20);
	rome.beRepaired(70);
	sparte.attack("Gallic");
	gaule.takeDamage(0);
	gaule.beRepaired(3);
	rome.attack("Gallic");
	gaule.takeDamage(30);
	rome.attack("Gallic");
	gaule.takeDamage(30);
	rome.attack("Gallic");
	gaule.takeDamage(30);
	rome.attack("Gallic");
	gaule.takeDamage(30);

	std::cout << std::endl << GREEN"----------------------- Others --------------------------------"NORM << std::endl;

	gaule.guardGate();
	rome.highFivesGuys();

	std::cout << std::endl << RED"----------------------- End of war ----------------------------"NORM << std::endl;
	std::cout << "In order : FragTrap(Roman) - ClapTrap(Roman) - ScavTrap(Gallic) - ClapTrap(Gallic) - ClapTrap(Spartiate)" << std::endl;
	
}
