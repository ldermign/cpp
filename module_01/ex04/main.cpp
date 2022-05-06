/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 14:57:38 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/06 18:41:21 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <stdlib.h>
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

void	replace_strings(std::string string_file, std::string s1, std::string s2) {

	std::string	new_string = string_file;
	int			len_str = new_string.length();

	for (int i = 0; i < len_str ; i++) {
		if (new_string.substr(i, s1.length()) == s1) {
			new_string = new_string.substr(0, i);
			new_string += s2 + &string_file[i + s1.length()];
			std::cout << "new string = [" << new_string << "]" << std::endl;
		}
		len_str = new_string.length();
	}
}

/*
int main ()
{
  std::string str="We think in generalities, but we live in details.";
                                           // (quoting Alfred N. Whitehead)

  std::string str2 = str.substr (3,5);     // "think"

  std::size_t pos = str.find("live");      // position of "live" in str

  std::string str3 = str.substr (pos);     // get from "live" to the end

  std::cout << str2 << ' ' << str3 << '\n';

  return 0;
}
*/

int	change_string(const char *file, std::string s1, std::string s2) {
(void)s2;
	std::fstream	ifs;
	std::string		string_file;

	ifs.open (file, std::fstream::in);
	if (ifs.fail()) {
		std::cout << file << ": No such file or directory" << std::endl;
		return EXIT_FAILURE;
	}
	int line = 1;
	while (std::getline(ifs, string_file)) {
		if (string_file.find(s1, 0) != std::string::npos)
			replace_strings(string_file, s1, s2);
		line++;
	}
	ifs.close();
	return EXIT_SUCCESS;
}

int main(int ac, char **av) {

	if (ac != 4) {
		std::cout << "Error, wrong commands." << '\n';
		return 1;
	}
	else if (change_string(av[1], av[2], av[3]) == EXIT_FAILURE)
		return EXIT_FAILURE;
	return 0;
}
