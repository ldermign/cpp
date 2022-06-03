/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 14:58:46 by ldermign          #+#    #+#             */
/*   Updated: 2022/06/03 15:44:13 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

/*

void identify(Base* p);
Elle affiche le véritable type de l’objet pointé par p : "A", "B" ou "C".

void identify(Base& p);
Elle affiche le véritable type de l’objet pointé par p : "A", "B" ou "C".
Utiliser un pointeur dans cette fonction est interdit.

Le fichier d’en-tête typeinfo est interdit.
Écrivez un programme pour tester que tout fonctionne comme attendu.
*/

Base	*generate( void ) {

	int		alea = rand() % 2;
	Base	*newBaseClass;
	std::cout << alea << std::endl;

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

void	identify( Base *p ) {(void)p;

	
}

void	identify( Base &p ) {(void)p;

	
}

int main( void ) {



	return 0;
}
