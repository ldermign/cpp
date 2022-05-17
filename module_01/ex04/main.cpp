/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 14:57:38 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/17 10:06:34 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <cstring>

void	replace_strings(std::ofstream &new_file, std::string string_file, std::string s1, std::string s2) {

	std::string	new_string = string_file;
	int			len_new_str = new_string.length();
	int			j = 0;
	int			i = 0;

	while (i < len_new_str) {
		if (string_file.substr(j, s1.length()) == s1) {
			new_string = new_string.substr(0, i) + s2;
			i = new_string.length();
			new_string += &string_file[j + s1.length()];
			j += s1.length();
			len_new_str = new_string.length();
		}
		else {
			j++;
			i++;
		}
	}
	new_file << new_string;
}

int	change_string(const char *file, std::string s1, std::string s2) {

	std::ifstream	ifs;
	std::ofstream	new_file;
	std::string		string_file;
	std::string		file_str = file;

	ifs.open (file, std::ifstream::in);
	if (ifs.fail()) {
		std::cout << file << ": No such file or directory" << std::endl;
		return EXIT_FAILURE;
	}
	std::string tmp = file_str + ".replace";
	const char *to_write = tmp.c_str();
	new_file.open (to_write, std::ofstream::out | std::ios::ate);
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
	else if (std::strlen(av[1]) == 0)
		return EXIT_FAILURE;
	else if (change_string(av[1], av[2], av[3]) == EXIT_FAILURE)
		return EXIT_FAILURE;
	return 0;
}
