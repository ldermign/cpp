/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 12:52:42 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/23 14:27:33 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int	main( void ) {

	Bureaucrat	ok("Mr. Goodenough", 75);
	Bureaucrat	tooLow("Mr. Phil", 140);
	Bureaucrat	tooHigh("Mr. Daren", 10);
	Bureaucrat	no("Mr. Garbage", 25);

	// std::cout << std::endl << "--------------- Nothing ----------------" << std::endl;
	// try {
	// 	std::cout << ok;			//	75
	// 	ok.incrementGrade(25);
	// 	std::cout << ok;			//	100
	// 	ok.incrementGrade(10);
	// 	std::cout << ok;			//	110
	// 	ok.decrementGrade(40);
	// 	std::cout << ok;			//	70
	// 	ok.decrementGrade(20);
	// 	std::cout << ok;			//	50
	// }
	// catch (const std::exception &e) {
	// 	std::cerr << e.what() << '\n';
	// }
	// std::cout << std::endl << "--------------- Too Low ----------------" << std::endl;
	// try {
	// 	std::cout << tooLow;			//	140
	// 	tooLow.decrementGrade(10);
	// 	std::cout << tooLow;			//	150
	// 	tooLow.incrementGrade(5);
	// 	std::cout << tooLow;			//	155
	// 	tooLow.decrementGrade(20);
	// 	std::cout << tooLow;			//	can't be seen
	// }
	// catch (const std::exception &e) {
	// 	std::cerr << e.what() << '\n';
	// }
	// std::cout << std::endl << "--------------- Too High ---------------" << std::endl;
	// try {
	// 	std::cout << tooHigh;			//	10
	// 	tooHigh.incrementGrade(5);
	// 	std::cout << tooHigh;			//	5
	// 	tooHigh.incrementGrade(4);
	// 	std::cout << tooHigh;			//	1
	// 	tooHigh.decrementGrade(6);
	// 	std::cout << tooHigh;			//	7
	// 	tooHigh.incrementGrade(20);
	// 	std::cout << tooHigh;			//	can't be seen
	// }
	// catch (const std::exception &e) {
	// 	std::cerr << e.what() << '\n';
	// }
	// std::cout << std::endl << "--------------- Invalid ----------------" << std::endl;
	// try {
	// 	std::cout << no;
	// 	no.incrementGrade(-5);
	// }
	// catch (const std::exception &e) {
	// 	std::cerr << e.what() << '\n';
	// }
	// try {
	// 	std::cout << no;
	// 	no.incrementGrade(0);
	// }
	// catch (const std::exception &e) {
	// 	std::cerr << e.what() << '\n';
	// }

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