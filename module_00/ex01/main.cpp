/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 11:21:57 by ldermign          #+#    #+#             */
/*   Updated: 2022/04/27 11:19:43 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>
#include "Contact.hpp"
#include "PhoneBook.hpp"

void	print_phonebook(PhoneBook all_contacts)
{
	std::cout << std::endl;
	std::cout << "------------------PhoneBook------------------" << std::endl;
	std::cout << "|          |          |          |          |" << std::endl;
	std::cout << "|     INDEX|FIRST NAME| LAST NAME|  NICKNAME|" << std::endl;
	std::cout << "|__________|__________|__________|__________|" << std::endl;
	for (int i = 0 ; i < all_contacts.contacts ; i++)
	{

	}
	std::cout << "|__________|__________|__________|__________|" << std::endl;
}

void	Contact::init_info(void) {

	std::string	info_new_contact;

	std::cout << "You are going to add a new contact to your PhoneBook. What's his first name ?" << std::endl;
	while (this->first_name == "")
		std::getline (std::cin, this->first_name);
	std::cout << "You can now enter his last name :" << std::endl;
	while (this->last_name == "")
		std::getline (std::cin, this->last_name);
	std::cout << "What's his nickname ?" << std::endl;
	while (this->nickname == "")
		std::getline (std::cin, this->nickname);
	// std::cout << "You can add his phone number." << std::endl;
	// std::getline (std::cin, info_new_contact);
	// this->phone_number = info_new_contact;
	// if (this->phone_number == "")
	// 	std::cout << "Error, you should enter something." << std::endl;
	std::cout << "Finaly, what's his darkest secret ?" << std::endl;
	while (this->darkest_secret == "")
		std::getline (std::cin, this->darkest_secret);
	// print_phonebook();
}

void	add_user(PhoneBook *all_contacts)
{
	Contact		new_contact;

	new_contact.init_info();
	all_contacts->contacts++;
	// std::cout << "You are going to add a new contact to your PhoneBook. What's his first name ?" << std::endl;
	// std::getline (std::cin, info_new_contact);
	// std::cout << "You can now enter his last name :" << std::endl;
	// std::getline (std::cin, info_new_contact);
	// print_phonebook();
	// print_phonebook(all_contacts);
}

int	main()
{
	std::string	cmd_user;
	PhoneBook	all_contacts;

	all_contacts.contacts = 0;
	while (42)
	{
		print_phonebook(all_contacts);
		std::getline (std::cin, cmd_user);
		if (cmd_user == "EXIT")
			exit(0);
		else if (cmd_user == "ADD")
			add_user(&all_contacts);
		// else if (cmd_user == "SEARCH")

			// std::cout << cmd_user << std::endl;
		
	}

	return 0;
}