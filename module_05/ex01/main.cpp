/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 12:52:42 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/24 12:45:09 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main( void ) {

	Bureaucrat	ok("Mr. Goodenough", 75);
	Bureaucrat	notGoodEnough("Mr. Proud", 140);

	std::cout << std::endl << "--------------- Wrong Form ---------------" << std::endl;

	try {
		Form		notWorking("Destroy earth", -2, 8);
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << '\n';
	}
	try {
		Form		notWorking2("Destroy earth 2.0", 2, -8);	
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << '\n';
	}
	try {
		Form		notWorking3("Destroy earth 2.0", 0, 8);	
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << '\n';
	}
	
	std::cout << "--------------- Nothing ----------------" << std::endl;

	try {
		Form		goodForm("Erase Global Warming", 15, 5);
		std::cout << goodForm << std::endl;
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << "\n";
	}



	return 0;
}

/*
Maintenant que vous avez des bureaucrates, ce serait pas mal de leur donner quelque
chose à faire. Quelle meilleure activité que celle de remplir une pile de formulaires ?
Par conséquent, il est temps de faire une classe Form (formulaire) qui possède :
• Un name (nom) constant.
• Un booléen indiquant si le formulaire est signé (à la construction, il ne l’est pas).
• Un grade (échelon) constant requis pour le signer.
• Un grade (échelon) constant requis pour l’exécuter.
Tous ces attributs sont privés, et non protégés.
Les échelons du Form suivent les mêmes règles que celles s’appliquant au Bureaucrat.
Par conséquent, les exceptions suivantes seront jetées si un échelon est trop haut ou trop
bas : Form::GradeTooHighException et Form::GradeTooLowException.
Comme précédemment, écrivez des accesseurs pour tous les attributs ainsi qu’une
surcharge de l’opérateur d’insertion («) qui affiche toutes les informations du formulaire.

Ajoutez également au Form une fonction membre beSigned() prenant un Bureaucrat
en paramètre. Il doit changer le status du formulaire en signé si l’échelon du Bureaucrat
est suffisant (supérieur ou égal à l’échelon requis). Pour rappel, l’échelon 1 est plus élevé
que l’échelon 2.
Si l’échelon est insuffisant, jetez une Form::GradeTooLowException.
Pour finir, ajoutez au Bureaucrat une fonction membre signForm(). Si le formulaire
est signé, elle affichera quelque chose comme :
<bureaucrat> signed <form>
Ou dans le cas contraire :
<bureaucrat> couldn’t sign <form> because <reason>.
Implémentez et rendez vos propres tests afin de démontrer que tout marche comme
attendu.
*/