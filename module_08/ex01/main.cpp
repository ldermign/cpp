/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 15:24:14 by ldermign          #+#    #+#             */
/*   Updated: 2022/06/13 16:02:00 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Span.hpp"

/*

Ensuite, implémentez deux fonctions membres : shortestSpan() et longestSpan()
Elles devront respectivement trouver la plus petite distance et la plus grande distance
entre les nombres stockés, puis la retourner. S’il n’y a aucun nombre stocké, ou juste un,
aucune distance ne peut être trouvée. Par conséquent, jetez une exception.

Bien sûr, implémentez vos propres tests qui devront être bien plus complets que celui
donné ci-dessous. Testez votre Span avec au moins 10 000 nombres. Vous pouvez tester
avec plus de nombres, c’est encore mieux.

Le meilleur pour la fin. Une possibilité qu’il serait utile d’avoir, c’est celle de pouvoir
remplir votre Span en utilisant une plage d’itérateurs (range of iterators). Faire des
centaines d’appels à addNumber(), c’est plutôt répétitif. Implémentez une fonction qui
permet d’ajouter plusieurs nombres à votre Span en un appel.

Si vous ne voyez pas quoi faire, étudiez les Containers. Certaines
fonctions membres prennent une plage d’itérateurs afin d’ajouter une
séquence d’éléments au container.
*/

int	main( void ) {

	std::cout << "---------- Test Subject ----------" << std::endl;

	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << std::endl << "---------- Span of 20 000 ----------" << std::endl;
//	MAX UNSIGNED INT = 4.294.967.295



	std::cout << std::endl << "---------- Errors -----------" << std::endl << std::endl;

	{

		Span sp = Span(2);
		sp.addNumber(42);
		sp.addNumber(42);
		
		try {
			std::cout << "Too much numbers -->" << std::endl;
			sp.addNumber(42);
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}

		try {
			std::cout << "No shortest -->" << std::endl;
			std::cout << sp.shortestSpan() << std::endl;
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}

		try {
			std::cout << "No longest -->" << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}

		try {
			std::cout << "Not enough numbers -->" << std::endl;
			Span sp = Span(1);
			sp.addNumber(42);
			std::cout << sp.shortestSpan() << std::endl;
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}

	}

	return 0;
}
