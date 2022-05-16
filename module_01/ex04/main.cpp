/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 14:57:38 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/16 15:46:11 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <stdlib.h>

void	replace_strings(std::ofstream &new_file, std::string string_file, std::string s1, std::string s2) { // fichier - ligne - a remplacer - remplacement  

	std::string	new_string = string_file;
	int			len_str = new_string.length();

	for (int i = 0; i < len_str ; i++) {
		if (new_string.substr(i, s1.length()) == s1) {
			new_string = new_string.substr(0, i);
			new_string += s2 + &string_file[i + s1.length()];
			std::cout << "[" << &new_string[i + s1.length()] << "] for i = " << i << std::endl;
			// i += s2.length();
			std::cout << i << std::endl;
		}
		len_str = new_string.length();
	}
	new_file << new_string;
}

int	change_string(const char *file, std::string s1, std::string s2) {
(void)s2;
	std::ifstream	ifs;
	std::ofstream	new_file;
	std::string		string_file;

	ifs.open (file, std::ifstream::in);
	if (ifs.fail()) {
		std::cout << file << ": No such file or directory" << std::endl;
		return EXIT_FAILURE;
	}
	new_file.open ("NEW_ONE_TMP", std::ofstream::out | std::ios::ate);
	if (new_file.fail()) {
		std::cout << "Error: can't create new file" << std::endl;
		return EXIT_FAILURE;
	}
	int line = 1;
	while (std::getline(ifs, string_file)) {
		if (string_file.find(s1, 0) != std::string::npos)
			replace_strings(new_file, string_file, s1, s2);
		else
			new_file << string_file;
		if (!ifs.eof())
			new_file << std::endl;
		line++;
	}
	ifs.close();
	new_file.close();
	return EXIT_SUCCESS;
}

int main(int ac, char **av) {

	if (ac != 4) {
		std::cout << "Error, wrong commands." << '\n';
		return 1;
	}
	else if (change_string(av[1], av[2], av[3]) == EXIT_FAILURE)
		return EXIT_FAILURE;
	rename("NEW_ONE_TMP", av[1]);
	return 0;
}
