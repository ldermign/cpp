/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 15:27:47 by ldermign          #+#    #+#             */
/*   Updated: 2022/06/02 13:20:34 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

intptr_t	serialize( Data *ptr ) {(void)ptr;


	
}

Data	*deserialize( uintptr_t raw ) {(void)raw;
	
	
}

int main( void ) {

	return 0;
}

/*
Implémentez les fonctions suivantes :

	intptr_t serialize(Data* ptr);
Elle prend un pointeur et convertit celui-ci vers le type d’entier non-signé uintptr_t.

	Data* deserialize(uintptr_t raw);
Elle prend un entier non-signé en paramètre et le convertit en pointeur sur Data.

Écrivez un programme pour tester vos fonctions et vous assurer que tout marche
comme attendu.
Vous devez créer une structure non-vide (cela signifie qu’elle comporte des variables
membres) Data.
Utilisez serialize() sur l’adresse de l’objet Data et passez la valeur de retour obtenue
à deserialize(). Ensuite, assurez-vous que le retour de deserialize() est identique
au pointeur d’origine.
N’oubliez pas de rendre les fichiers de votre structure Data.
*/