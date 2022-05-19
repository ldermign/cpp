/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 11:26:32 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/19 14:38:55 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int	main( void ) {

	std::cout << "Main base" << std::endl;
	const Animal* i = new Dog();
	const Animal* j = new Cat();

	delete i;//should not create a leak
	delete j;

	std::cout << std::endl << "More tests" << std::endl;

	Dog cpyDog; {
		Dog tmp = Dog(cpyDog);
	}
	
	Animal	*Attila[10];

	for (int k = 0 ; k < 5 ; k++)
		Attila[k] = new Dog();
	for (int k = 5 ; k < 10 ; k++)
		Attila[k] = new Cat();

	for (int k = 0 ; k < 10 ; k++)
		delete Attila[k];

	return 0;
}
