/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 11:29:07 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/02 15:16:37 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>
#include "PhoneBook.hpp"

static int	is_digit(std::string str) {

	int	length;

	length = str.length();
	for (int i = 0 ; i < length ; i++)
	{
		if (str[i] < 48 || str[i] > 57)
			return -1;
	}
	return 0;
}

std::string	truncate(std::string to_truncate) {

	std::string	new_string;
	int		lengh_to_truncate;
	int		i;

	if (to_truncate.length() == 10)
		return (to_truncate);
	lengh_to_truncate = to_truncate.length();
	if (to_truncate.length() < 10)
	{
		for (i = lengh_to_truncate ; i < 10 ; i++)
			std::cout << " ";
		std::cout << to_truncate;
	}
	else
	{
		for (int i = 0; i < 9; i++)
			std::cout << to_truncate[i];
		std::cout << ".";
	}
	return (new_string);
}

int	PhoneBook::searchUser( void ) {

	int			to_search = 0;
	std::string	str = "";

	if (PhoneBook::repertory[0].getFirstName() == "")
	{
		std::cout << "There isn't any contact in your repertory. Please add one before searching." << std::endl;
		return EXIT_SUCCESS;
	}
	std::cout << "Which contact do you want to see ? -> ";
	while (str == "")
	{
		std::getline (std::cin, str);
		if (std::cin.eof())
			return EXIT_FAILURE;
		if (str != "" && is_digit(str) == -1)
		{
			std::cout << "It goes from 0 to 7. Only numbers." << std::endl;
			str = "";
		}
	}
	to_search = (int)str[0] - 48;
	if (to_search > PhoneBook::getFull() - 1)
	{
		std::cout << "No contact found in this index." << std::endl;
		return EXIT_SUCCESS;
	}
	std::cout << std::endl;
	std::cout << "First name -> " << PhoneBook::repertory[to_search].getFirstName() << std::endl;
	std::cout << "Last name -> " << PhoneBook::repertory[to_search].getLastName() << std::endl;
	std::cout << "Nickname -> " << PhoneBook::repertory[to_search].getNickname() << std::endl;
	std::cout << "Phone number-> " << PhoneBook::repertory[to_search].getPhoneNumber() << std::endl;
	std::cout << "Darkest secret-> " << PhoneBook::repertory[to_search].getDarkestSecret() << std::endl;
	std::cout << std::endl;
	return EXIT_SUCCESS;
}

int	PhoneBook::addUser( void ) {

	if (PhoneBook::getFull() == 8 && PhoneBook::getIndex() == 8)
		PhoneBook::_index = 0;
	if (PhoneBook::getFull() == 8)
		PhoneBook::repertory[PhoneBook::_index].suppUser();
	if (PhoneBook::repertory[PhoneBook::_index].init_info() == EXIT_FAILURE)
		return EXIT_FAILURE;
	PhoneBook::_index++;
	if (PhoneBook::getFull() != 8)
		PhoneBook::_full++;
	return EXIT_SUCCESS;
}

void	PhoneBook::printPhoneBook( void ) {

	int	max = this->getFull();
	std::cout << "\033[2J\033[1;1H";
	std::cout << std::endl;
	std::cout << "------------------PhoneBook------------------" << std::endl;
	std::cout << "|          |          |          |          |" << std::endl;
	std::cout << "|     INDEX|FIRST NAME| LAST NAME|  nickname|" << std::endl;
	std::cout << "|__________|__________|__________|__________|" << std::endl;
	for (int i = 0 ; i < max ; i++)
		std::cout << "|" << "         " << i
		<< "|" << truncate(this->repertory[i].getFirstName())
		<< "|" << truncate(this->repertory[i].getLastName())
		<< "|" << truncate(this->repertory[i].getNickname())
		<< "|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << std::endl;
}

int	PhoneBook::getIndex( void ) {

	return PhoneBook::_index;
}

int	PhoneBook::getFull( void ) {

	return PhoneBook::_full;
}

PhoneBook::PhoneBook(void) {

	return ;
}

PhoneBook::~PhoneBook(void) {

	return ;
}
