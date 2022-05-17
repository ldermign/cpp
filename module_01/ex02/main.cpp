/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 15:21:13 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/17 09:44:49 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main() {

	std::string	str = "HI THIS IS BRAIN";

	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "Memory address of the string variable	-> [" << &str << "]" << std::endl;
	std::cout << "Memory address held by stringPTR 	-> [" << stringPTR << "]" << std::endl;
	std::cout << "Memory address held by stringREF 	-> [" << &stringREF << "]" << std::endl;

	std::cout << "Value of the string variable -> [" << str << "]" << std::endl;
	std::cout << "Value of the string variable -> [" << *stringPTR << "]" << std::endl;
	std::cout << "Value of the string variable -> [" << stringREF << "]" << std::endl;

	return 0;
}
