/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 12:52:42 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/24 15:28:05 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main( void ) {

	// Bureaucrat	ok("Mr. Goodenough", 75);
	// Bureaucrat	notGoodEnough("Mr. Proud", 140);

	// std::cout << std::endl << "--------------- Wrong Form ---------------" << std::endl;

	// try {
	// 	Form		notWorking("Destroy earth", -2, 8);
	// }
	// catch (const std::exception &e) {
	// 	std::cerr << e.what() << '\n';
	// }
	// try {
	// 	Form		notWorking2("Destroy earth 2.0", 2, -8);	
	// }
	// catch (const std::exception &e) {
	// 	std::cerr << e.what() << '\n';
	// }
	// try {
	// 	Form		notWorking3("Destroy earth 2.0", 0, 8);	
	// }
	// catch (const std::exception &e) {
	// 	std::cerr << e.what() << '\n';
	// }
	
	// std::cout << "--------------- Nothing ----------------" << std::endl;
	
	// {
	// 	Form		goodForm("Erase Global Warming", 15, 5);
	// 	std::cout << goodForm << ok << std::endl;
		
	// 	try {
	// 		ok.incrementGrade(65);
	// 		goodForm.beSigned(ok);
	// 		std::cout << goodForm << std::endl;
	// 	}
	// 	catch (const std::exception &e) {
	// 		std::cerr << e.what() << "\n";
	// 	}
	// }

	// std::cout << "--------------- Not signed ----------------" << std::endl;

	// {
	// 	Form		goodForm("Bring Dodo back", 7, 3);
	// 	std::cout << goodForm << notGoodEnough << std::endl;;
		
	// try {
	// 	notGoodEnough.incrementGrade(50);
	// 	notGoodEnough.signForm(goodForm);
	// 	std::cout << goodForm << std::endl;	//	not showing
	// }
	// catch (const std::exception &e) {
	// 	std::cout << goodForm << std::endl;
	// 	std::cerr << e.what() << "\n";
	// }
	// notGoodEnough.signForm(goodForm);
	// }

	return 0;
}

/*
Maintenant, ajoutez la fonction membre execute(Bureaucrat const & executor)
const à la classe de base et implémentez une fonction pour exécuter l’action du formulaire
des classes dérivées. Vous devez vous assurer que le formulaire est signé et que le grade
du bureaucrate tentant de l’exécuter est suffisant. Sinon, jetez une exception pertinente.
Que vous souhaitiez checker les prérequis dans chaque classe concrète ou dans la classe
de base (puis appeler une autre fonction pour exécuter le formulaire), c’est votre choix.
Toutefois, une de ces deux manières de faire est plus propre que l’autre.

Pour finir, ajoutez la fonction membre executeForm(Form const & form) au Bureaucrat.
Ce dernier doit tenter d’exécute le formulaire. S’il y arrive, affichez un message
comme :
<bureaucrat> executed <form>
Dans le cas contraire, affichez un message d’erreur explicite.

*/