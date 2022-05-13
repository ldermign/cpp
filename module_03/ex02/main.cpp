/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 15:30:27 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/13 14:45:07 by ldermign         ###   ########.fr       */
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

	std::cout << GREEN"----------------------- Start war -----------------------------"NORM << std::endl;

	gaule.attack("Roman");
	rome.takeDamage(10);

	std::cout << std::endl;

	sparte.attack("Gallic");
	gaule.takeDamage(10);
	sparte.attack("Gallic");
	gaule.takeDamage(10);

	std::cout << std::endl;

	std::cout << RED"----------------------- End of war ---------------------------"NORM << std::endl;
	
}

/*
Plus il y a de ClapTraps, mieux c’est ! C’est pourquoi vous allez créer un robot dérivé
du ClapTrap. Il s’appellera ScavTrap et héritera des constructeurs et du destructeur de
ClapTrap. Toutefois, ses constructeurs, son destructeur et son attack() afficheront des
messages différents. Après tout, les ClapTraps sont conscients de leur individualité.
Notez bien que vos tests devront montrer que l’enchaînement des constructeurs/destructeurs
s’effectue bien dans le bon ordre. Quand on crée un ScavTrap, le programme
commence par créer un ClapTrap. La destruction s’effectue dans l’ordre inverse. Pourquoi ?
ScavTrap utilisera les attributs du ClapTrap (modifiez donc ClapTrap en conséquence)
et les initialisera à :
• Name, son nom, qui sera passé en paramètre d’un constructeur
• Hit points (100)
• Energy points (50)
• Attack damage (20)
ScavTrap aura également une capacité spéciale et unique :
void guardGate();
Cette fonction membre affichera un message informant que ScavTrap est entré en
mode Gate keeper.
N’oubliez pas d’enrichir vos tests.
*/