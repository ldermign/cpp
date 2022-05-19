/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 11:26:32 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/19 10:29:08 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int	main( void ) {

	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << std::endl << "\033[38;5;240mGood sounds\033[0m" << std::endl;

	std::cout << meta->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;

	meta->makeSound();
	i->makeSound();
	j->makeSound();

	std::cout << std::endl;

	const WrongAnimal* k = new WrongAnimal();
	const WrongAnimal* l = new WrongCat();

	std::cout << std::endl << "\033[38;5;240mBad sounds\033[0m" << std::endl;

	std::cout << k->getType() << " " << std::endl;
	std::cout << l->getType() << " " << std::endl;

	k->makeSound();
	l->makeSound();

	std::cout << std::endl;

	delete meta;
	delete i;
	delete j;
	delete k;
	delete l;
	
	return 0;
}
