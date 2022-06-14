/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 15:27:24 by ldermign          #+#    #+#             */
/*   Updated: 2022/06/14 09:42:16 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>
#include "Array.hpp"

#define MAX_VAL 750

class Awesome {
	
public:

	Awesome( void ) : _n( rand() % 100 ) { return; }
	int get( void ) const { return this->_n; }

private:

	int _n;

};

int main(int, char**) {
	
	Array< int > numbers(MAX_VAL);
	int* mirror = new int[MAX_VAL];
	srand(time(NULL));
	
	for (int i = 0; i < MAX_VAL; i++) {
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}
	
	//SCOPE
	{
		Array< int > tmp = numbers;
		Array< int > test(tmp);
	}

	for (int i = 0; i < MAX_VAL; i++) {
		if (mirror[i] != numbers[i]) {
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}
	
	try {
		numbers[-2] = 0;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	
	try {
		numbers[MAX_VAL] = 0;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}

	for (int i = 0; i < MAX_VAL; i++)
		numbers[i] = rand();

	delete [] mirror;

	{
		Array< Awesome >	test(5);
		try {
			std::cout << test[3].get() << std::endl;
			std::cout << test[1].get() << std::endl;			
		}
		catch(const std::exception& e) {
			std::cerr << e.what() << '\n';
		}
	}

	{
		//	empty array
		Array< int >	test;
		std::cout << "Size of empty array = " << test.getSize() << std::endl;
	}

	
	return 0;
}

/*
int main( void ) {

	std::cout << "Array of strings:" << std::endl;

	{
		int						n = 4;
		Array< std::string >	test(n);
		test[0] = "Salut";
		test[1] = "ca ";
		test[2] = "va ";
		test[3] = "?";

		try {
			for (int i = 0 ; i < n ; i++)
				std::cout << test[i] << std::endl;
		}
		catch (const std::exception &e) {
			std::cerr << e.what() << '\n';
		}
	}

	std::cout << std::endl  << "Array of int:" << std::endl;

	{
		int				n = 5;
		Array< int >	test(n);
		test[0] = 42;
		test[1] = -8;
		test[2] = 7;
		test[3] = 2147483647;
		test[4] = 0;
		
		try {
			for (int i = 0 ; i < n ; i++)
				std::cout << test[i] << std::endl;
		}
		catch (const std::exception &e) {
			std::cerr << e.what() << '\n';
		}

	}

	std::cout << std::endl << "Array of char:" << std::endl;

	{
		int				n = 8;
		Array< char >	test(n);
		test[0] = 'l';
		test[1] = 'd';
		test[2] = 'e';
		test[3] = 'r';
		test[4] = 'm';
		test[5] = 'i';
		test[6] = 'g';
		test[7] = 'n';
		
		try {
			for (int i = 0 ; i < n ; i++)
				std::cout << test[i] << std::endl;
		}
		catch (const std::exception &e) {
			std::cerr << e.what() << '\n';
		}
	}

	std::cout << std::endl << "---------- Errors ----------" << std::endl;

	{
		std::cout << std::endl << "Wrong index:" << std::endl;

		int				n = 3;
		Array< char >	test(n);
		
		try {
			std::cout << test[42] << std::endl;
		}
		catch (const std::exception &e) {
			std::cerr << e.what() << '\n';
		}
	}

	return 0;
}
*/