/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 15:27:47 by ldermign          #+#    #+#             */
/*   Updated: 2022/06/01 21:04:41 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Conversion.hpp"

void	printPoint0( char const c, char const *str ) {

	std::string	tmp = str;

	if (c != 'F' && c != 'D')
		return ;
	int pos = tmp.find('.');
	if (pos == -1)
		return;
	int ret = pos;
	pos++;
	while (str[pos] && str[pos] == '0')
		pos++;
	if (str[pos] == '\0')
		std::cout << &str[ret];
	if (str[ret] == '.' && !str[ret + 1])
		std::cout << "0";
}

void	print( Conversion const toConv, const char *str ) {

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
			printPoint0(toConv.getWhichConv(), str);
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
			std::cout << toConv.getDouble();
			printPoint0(toConv.getWhichConv(), str);
			std::cout << std::endl;
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
		print(toConv, av[1]);
	}
	return 0;
}
