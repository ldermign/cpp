/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 14:57:38 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/06 10:37:42 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
// std::string::replace INTERDIT

/*
Create a program that takes three parameters in the following order: a filename and
two strings, s1 and s2.
It will open the file <filename> and copies its content into a new file
<filename>.replace, replacing every occurrence of s1 with s2.
Using C file manipulation functions is forbidden and will be considered cheating. All
the member functions of the class std::string are allowed, except replace. Use them
wisely!
Of course, handle unexpected inputs and errors. You have to create and turn in your
own tests to ensure your program works as expected.
*/

int	change_string(std::string file, std::string s1, std::string s2) {

	std::ifstream ifs;
	if (ifs.open(file, ios::in))

	return EXIT_SUCCESS;
}

int main(int ac, char **av) {

	if (ac != 4)
	{
		std::cout << "Error, wrong commands." << '\n';
		return 1;
	}
	else if (change_string(av[1], av[2], av[3]) == EXIT_FAILURE)
		return EXIT_FAILURE;
	return 0;
}