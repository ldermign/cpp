/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 15:30:27 by ldermign          #+#    #+#             */
/*   Updated: 2022/06/02 11:06:47 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

int	main( void ) {

	std::cout << std::endl;

	std::cout << "----------------------- Basic tests ----------------------------" << std::endl;

	ClapTrap sparte("Spartiate");
	ClapTrap rome("Roman");

	std::cout << std::endl;

	std::cout << "----------------------- Start war -----------------------------" << std::endl;

	sparte.attack("Roman");
	rome.takeDamage(10);

	std::cout << std::endl;

	std::cout << "----------------------- Errors ---------------------------" << std::endl;

	ClapTrap noName("");
	ClapTrap noName2;

	std::cout << std::endl;

}