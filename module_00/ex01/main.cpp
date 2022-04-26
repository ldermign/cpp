/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 11:21:57 by ldermign          #+#    #+#             */
/*   Updated: 2022/04/26 15:50:15 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
// #include "Contact.hpp"
// #include "PhoneBook.hpp"
// using namespace std;
#include <stdlib.h>

void	print_phonebook()
{
	std::cout << std::endl;
	std::cout << "--------------------PhoneBook--------------------" << std::endl;
	std::cout << std::endl;

}

void	add_user()
{
	Contact		new_contact;
	std::string	info_new_contact;

	std::cout << "You are going to add a new contact to your PhoneBook. What's his first name ?" << std::endl;
	std::getline (std::cin, info_new_contact);
	std::cout << "You can now enter his last name :" << std::endl;
	std::getline (std::cin, info_new_contact);
	// print_phonebook();
}

int	main(int ac, char **av)
{
	(void)ac;(void)av;
	std::string	cmd_user;

	while (42)
	{
		print_phonebook();
		std::getline (std::cin, cmd_user);
		if (cmd_user == "EXIT")
			exit(0);
		else if (cmd_user == "ADD")
			new_contact
		// else if (cmd_user == "SEARCH")

			// std::cout << cmd_user << std::endl;
		
	}

	return 0;
}