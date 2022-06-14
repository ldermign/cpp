/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 13:57:15 by ldermign          #+#    #+#             */
/*   Updated: 2022/06/14 14:21:11 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iterator>
#include "MutantStack.hpp"

/*

Il est temps de passer aux choses sérieuses. Créons une classe mutante.
Le container std::stack est top. Malheureusement, c’est l’un des seuls
de la STL à ne PAS être itérable. Trop nul.

Mais d’où devrions-nous tolérer cela ? Surtout quand on peut s’octroyer le droit
de charcuter la stack originale pour ajouter cette caractéristique manquante.

Afin de réparer cette injustice, vous allez rendre le container std::stack itérable.

Implémentez une classe MutantStack. Elle sera implémentée en termes de la
std::stack. Elle offrira toutes ses fonctions membres avec en plus des itérateurs.
Bien entendu, implémentez et rendez vos propres tests afin de démontrer que tout
marche comme attendu.

*/

int main( void ) {

	MutantStack< int > mstack;

	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);

	MutantStack< int >::iterator it = mstack.begin();
	MutantStack< int >::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	
	std::stack< int > s(mstack);

	return 0;
}