/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 15:27:47 by ldermign          #+#    #+#             */
/*   Updated: 2022/06/01 16:15:14 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Conversion.hpp"

void	printPoint0( char const c ) {

	for (int i = 0 ; i < str.size() ; i++)
}

void	print( Conversion const toConv ) {

	{
		std::cout << "char: ";
		if (toConv.getImpChar() != "")
			std::cout << toConv.getImpChar() << std::endl;
		else
			std::cout << '\'' << toConv.getChar() << '\'' << std::endl;
	}

	{
		std::cout << "int: ";
		if (toConv.getImpInt() != "")
			std::cout << toConv.getImpInt() << std::endl;
		else
			std::cout << toConv.getInt() << std::endl;
	}

	{
		std::cout << "float: ";
		if (toConv.getImpFloat() != "")
			std::cout << toConv.getImpFloat();
		else {
			std::cout << toConv.getFloat();
			printPoint0(toConv.getWhichConv());
		}
		if (toConv.getImpFloat() != "-inf" && toConv.getImpFloat() != "impossible"
			&& toConv.getImpFloat() != "+inf")
			std::cout << 'f';
	}
	
	{
		std::cout << std::endl << "double: ";
		if (toConv.getImpDouble() != "")
			std::cout << toConv.getImpDouble() << std::endl;
		else {
			std::cout << toConv.getDouble() << std::endl;
			printPoint0(toConv.getWhichConv());
		}
	}
}

int main( int ac, char **av ) {

	Conversion toConv;

	if (ac != 2) {
		std::cout << "Error argument." << std::endl;
		return 0;
	}
	else {
		toConv.getConv(av[1]);
		if (toConv.getWhichConv() != 'N')
			toConv.doConv();
		print(toConv);
	}
	return 0;
}

/*
Écrivez un programme prenant en paramètre la représentation sous forme de chaîne
de caractères d’un littéral C++ sous sa forme la plus répandue. Le littéral doit faire
partie d’un des types scalaires suivants : char, int, float ou double. 
Hormis dans le cas de paramètre de type char, seule la notation décimale sera utilisée.

Exemples de littéraux de type char : ’c’, ’a’, ...
Pour simplifier les choses, notez que les caractères non affichables ne seront pas passés à
votre programme. Si la conversion d’un char n’est affichable, mettez un message informatif.

Exemples de littéraux de type int : 0, -42, 42...

Exemples de littéraux de type double : 0.0, -4.2, 4.2...
Vous devez gérer ces pseudo littéraux aussi (parce que c’est fun) : -inf, +inf et nan.

Exemples de littéraux de type float : 0.0f, -4.2f, 4.2f...
Vous devez gérer ces pseudo littéraux aussi (pour l’amour de la science) : -inff, +inff
et nanf.

Vous devez premièrement détecter le type du littéral passé en paramètre, le convertir
de sa représentation sous forme de chaîne de caractères vers son véritable type, et 
ensuite le convertir explicitement vers les trois autres types de données.
Si une conversion n’a pas de sens ou overflow, affichez un message pour informer
l’utilisateur que la conversion de type est impossible. Incluez tout fichierd’en-tête
qui vous sera nécessaire afin de gérer les limites numériques et les valeurs spéciales.
*/

/*
./convert 0
char: Non displayable
int: 0
float: 0.0f
double: 0.0
./convert nan
char: impossible
int: impossible
float: nanf
double: nan
./convert 42.0f
char: '*'
int: 42
float: 42.0f
double: 42.0
*/

// ""
// nan
// +

/*
Pour le print
i = si bool = 1 "impossible"
*/