/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 14:58:46 by ldermign          #+#    #+#             */
/*   Updated: 2022/06/09 14:55:49 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <typeinfo>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base	*generate( void ) {

	int		alea = std::rand() % 3;
	Base	*newBaseClass;

	switch (alea) {
		case 0:
			newBaseClass = new A;
			break ;
		case 1:
			newBaseClass = new B;
			break ;
		case 2:
			newBaseClass = new C;
			break ;
		default:
			newBaseClass = NULL;
			break ;
	}
	
	return newBaseClass;
}

void	identify( Base *p ) {

	A *a = dynamic_cast<A *>(p);
	if (a != NULL) {
		std::cout << "type is [A]" << std::endl;
		return ;
	}
	B *b = dynamic_cast<B *>(p);
	if (b != NULL) {
		std::cout << "type is [B]" << std::endl;
		return ;
	}
	C *c = dynamic_cast<C *>(p);
	if (c != NULL) {
		std::cout << "type is [C]" << std::endl;
		return ;
	}

}

void	identify( Base &p ) {

	try {
		A &a = dynamic_cast<A &>(p);
		std::cout << "type is [A]" << std::endl;
		(void)a;
	}
	catch (std::bad_cast &bc) {}
	try {
		B &b = dynamic_cast<B &>(p);
		std::cout << "type is [B]" << std::endl;
		(void)b;
	}
	catch (std::bad_cast &bc) {}
	try {
		C &c = dynamic_cast<C &>(p);
		std::cout << "type is [C]" << std::endl;
		(void)c;
	}
	catch (std::bad_cast &bc) {}
	
}

int main( void ) {

	Base	*toIdentify;

	std::srand(std::time(NULL));

	for (int i = 0 ; i < 10 ; i++) {

		toIdentify = generate();
		std::cout << "Identification by pointer : ";
		identify(toIdentify);
		std::cout << "Identification by reference : ";
		identify(*toIdentify);
		std::cout << std::endl;
		delete toIdentify;
	}

	return 0;
}
