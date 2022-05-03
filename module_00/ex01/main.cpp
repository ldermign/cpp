/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 11:21:57 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/03 16:29:59 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>
#include "Contact.hpp"
#include "PhoneBook.hpp"

int	PhoneBook::_index = 0;
int PhoneBook::_full = 0;
std::string	_firstName = "";
std::string	_lastName = "";
std::string	_nickname = "";
std::string	_phoneNumber = "";
std::string	_darkestSecret = "";

void	print_welcome_message(void) {

	std::cout << std::endl;
	std::cout << "There are only 3 commands : \033[38;5;70mADD\033[0m, \033[38;5;75mSEARCH\033[0m and \033[38;5;160mEXIT\033[0m." << std::endl;
	std::cout << "The first command, \033[38;5;70mADD\033[0m, let you add a contact in your repertory with some information." << std::endl;
	std::cout << "For \033[38;5;75mSEARCH\033[0m, you'll need to enter the index of the contact that you want to see a little more." << std::endl;
	std::cout << "\033[38;5;160mEXIT\033[0m make you quit your PhoneBook. All data will be erased." << std::endl;
	std::cout << "All others commands will be ignored." << std::endl;
	std::cout << "You can now enter a command." << std::endl;
	std::cout << std::endl;
}

int	main()
{
	std::string	cmd_user;
	PhoneBook	all_contacts;

	std::cout << "\033[2J\033[1;1H";
	std::cout << "~~~ Welcome to your PhoneBook ~~~" << std::endl;
	std::cout << std::endl << "Here, you can add any contact of your choice with a few information." << std::endl;
	while (42)
	{
		print_welcome_message();
		std::getline (std::cin, cmd_user);
		if (std::cin.eof())
			return 1;
		if (cmd_user == "EXIT")
			return 0;
		else if (cmd_user == "ADD")
		{
			if (all_contacts.addUser() == -1)
				return 1;
		}
		else if (cmd_user == "SEARCH")
		{
			all_contacts.printPhoneBook();
			if (all_contacts.searchUser() == EXIT_FAILURE)
				return 1;
		}
	}
	return 0;
}
