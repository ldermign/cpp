/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 15:24:14 by ldermign          #+#    #+#             */
/*   Updated: 2022/06/13 09:23:07 by ldermign         ###   ########.fr       */
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

	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	return 0;
}

/*
$> ./ex01
2
14
$>
*/