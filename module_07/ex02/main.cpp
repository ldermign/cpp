/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 15:27:24 by ldermign          #+#    #+#             */
/*   Updated: 2022/06/08 11:53:46 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

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

/*
Créez une classe template Array (tableau) contenant des éléments de type T et qui
implémente le comportement suivant et les fonctions suivantes :

• Construction sans paramètres : crée un array vide.

• Construction avec un paramètre de type unsigned int n : crée un array de n
éléments initialisés par défaut.
Conseil : Essayez de compiler int * a = new int(); puis affichez *a.

• Construction par recopie et surcharge de l’opérateur d’affectation. Dans les deux
cas, après une copie, toute modification de l’array original ou de sa copie ne doit
pas impacter l’autre array.

• Vous DEVEZ utiliser l’opérateur new[] pour allouer de la mémoire. Toute allocation
 préventive (c’est-à-dire allouer de la mémoire en avance) est interdite. Votre
programme ne doit pas pouvoir accéder à une zone non allouée.

• Les éléments doivent être accessibles grâce à l’opérateur d’indice : [ ].

• En cas d’index invalide lors d’une tentative d’accès d’un élément en utilisant
 l’opérateur [ ], une std::exception est jetée.

• Une fonction membre size() qui retourne le nombre d’éléments dans l’array. Cette
fonction membre ne prend aucun paramètre et ne doit pas modifier l’instance courante.

Comme d’habitude, assurez-vous que tout fonctionne comme attendu et rendez un
fichier main.cpp contenant vos tests.
*/