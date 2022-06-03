/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 11:26:32 by ldermign          #+#    #+#             */
/*   Updated: 2022/06/03 11:06:23 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int	main( void ) {

	std::cout << "Main base" << std::endl;
	const AAnimal* i = new Dog();
	const AAnimal* j = new Cat();

	delete i;//should not create a leak
	delete j;

	std::cout << std::endl << "More tests" << std::endl;

	Dog cpyDog; {
		Dog tmp = Dog(cpyDog);
	}
	
	AAnimal	*Attila[10];

	for (int k = 0 ; k < 5 ; k++)
		Attila[k] = new Dog();
	for (int k = 5 ; k < 10 ; k++)
		Attila[k] = new Cat();

	for (int k = 0 ; k < 10 ; k++)
		delete Attila[k];

	// to check if really abstract, de-comment
	// AAnimal *test = new AAnimal();
	// AAnimal = test;

	return 0;
}
