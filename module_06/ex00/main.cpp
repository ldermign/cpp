/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 15:27:47 by ldermign          #+#    #+#             */
/*   Updated: 2022/06/09 14:46:59 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <sstream>
#include "Conversion.hpp"

void	printPoint0( char const *str ) {

	std::string	tmp = str;
	bool	something = false;
	bool	letter = false;

	int ret = tmp.find('.');
	int i = ret, j = ret;
	i++;
	while (tmp[i]) {
		if (tmp[i] != 'f' && tmp[i] != '0')
			something = true;
		if (tmp[i] == 'f')
			letter = true;
		i++;
	}

	if (tmp[0] == '.') {
		if (!tmp[1] || (tmp[1] && tmp[1] == 'f'))
			std::cout << ".0";
		else if (something == false)
			while (tmp[j] && tmp[j] != 'f')
				std::cout << tmp[j++];
		return ;
	}
	if (ret == -1) {
		std::cout << ".0";
		return ;
	}
	if (something == false) {
		if (letter == false)
			std::cout << &tmp[ret];
		else
			while (tmp[j] && tmp[j] != 'f')
				std::cout << tmp[j++];
			if (tmp[j - 1] == '.' && tmp[j] == 'f')
				std::cout << '0';
	}
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
		std::stringstream	sstream;
		sstream << toConv.getFloat();
    	std::string	num_str = sstream.str();
		if (num_str == "inf")
			std::cout << toConv.getFloat();
		else if (toConv.getImpFloat() != "")
			std::cout << toConv.getImpFloat() << std::endl;
		else {
			std::cout << toConv.getFloat();
			printPoint0(str);
		}
		if (toConv.getImpFloat() != "-inf" && toConv.getImpFloat() != "impossible"
			&& toConv.getImpFloat() != "+inf" && num_str != "inf")
			std::cout << 'f';
	}
	
	{
		std::cout << std::endl << "double: ";
		std::stringstream	sstream;
		sstream << toConv.getDouble();
    	std::string	num_str = sstream.str();
		if (num_str == "inf")
			std::cout << toConv.getDouble() << std::endl;
		else if (toConv.getImpDouble() != "")
			std::cout << toConv.getImpDouble() << std::endl;
		else {
			std::cout << toConv.getDouble();
			printPoint0(str);
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
