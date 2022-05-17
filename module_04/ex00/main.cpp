/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 11:26:32 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/17 13:42:25 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main( void ) {

	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	
	delete meta;
	delete j;
	delete i;
	
	return 0;
}

/*
Pour chaque exercice, veuillez fournir les tests les plus complets possible.
Les constructeurs et les destructeurs de chaque classe doivent afficher des messages qui
leur sont propres. N’utilisez pas le même message pour toutes les classes.
Commencez par implémenter une classe simple de base Animal. Elle possède un attribut protégé :
• std::string type;
Implémentez une classe Dog (chien) qui hérite de Animal.
Implémentez une classe Cat (chat) qui hérite de Animal.
Ces deux classes dérivées doivent initialiser leur type en fonction de leur nom. Ainsi,
le type de Dog sera “Dog”, et celui de Cat sera “Cat”. Le type de la classe Animal peut
être laissé vide ou initialisé avec la valeur de votre choix.
Chaque animal doit être capable d’utiliser la fonction membre :
makeSound()
Elle affichera un son cohérent (les chats n’aboient pas).
Exécuter ce code devrait afficher les sons propres aux classes Dog et Cat, pas celui de
la classe Animal.
CF MAIN
Afin de vous assurer d’avoir compris, implémentez une classe WrongCat héritant
d’une classe WrongAnimal. Dans le code ci-dessus, si vous remplacez l’Animal et le
Cat par le WrongAnimal et le WrongCat, le WrongCat devrait afficher le son du WrongAnimal.
Écrivez et rendez plus de tests que ceux donnés ci-dessus
*/