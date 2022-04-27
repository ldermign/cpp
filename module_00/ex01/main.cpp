/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 11:21:57 by ldermign          #+#    #+#             */
/*   Updated: 2022/04/27 15:54:47 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>
#include "Contact.hpp"
#include "PhoneBook.hpp"
using namespace std;

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

void	print_phonebook(PhoneBook all) {

	int	max = all.full;
	std::cout << "\033[2J\033[1;1H";
	std::cout << std::endl;
	std::cout << "------------------PhoneBook------------------" << std::endl;
	std::cout << "|          |          |          |          |" << std::endl;
	std::cout << "|     INDEX|FIRST NAME| LAST NAME|  NICKNAME|" << std::endl;
	std::cout << "|__________|__________|__________|__________|" << std::endl;
	for (int i = 0 ; i < max ; i++)
	{
		std::cout << "|" << "         " << i << "|" << truncate(all.repertory[i].first_name) << "|" << truncate(all.repertory[i].last_name) << "|" << truncate(all.repertory[i].nickname) << "|" << std::endl;
		
	}
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << std::endl;
}

void	init_info(PhoneBook *all) {

	std::cout << "You are going to add a new contact to your PhoneBook. What's his first name ?" << std::endl;
	while (all->repertory[all->it_contact].first_name == "")
		std::getline(std::cin, all->repertory[all->it_contact].first_name);
	std::cout << "You can now enter his last name :" << std::endl;
	while (all->repertory[all->it_contact].last_name == "")
		std::getline(std::cin, all->repertory[all->it_contact].last_name);
	std::cout << "What's his nickname ?" << std::endl;
	while (all->repertory[all->it_contact].nickname == "")
		std::getline(std::cin, all->repertory[all->it_contact].nickname);
	// std::cout << "You can add his phone number." << std::endl;
	// std::getline (std::cin, info_new_contact);
	// this->phone_number = info_new_contact;
	// if (this->phone_number == "")
	// 	std::cout << "Error, you should enter something." << std::endl;
	std::cout << "Finaly, what's his darkest secret ?" << std::endl;
	while (all->repertory[all->it_contact].darkest_secret == "")
		std::getline(std::cin, all->repertory[all->it_contact].darkest_secret);
	
	// print_phonebook();
}

void	add_user(PhoneBook *all_contacts)
{
	Contact		new_contact;

	std::cout << "all_contacts->it_contact = " << all_contacts->it_contact << " --- all_contacts->full = " << all_contacts->full << std::endl;
	if (all_contacts->full == 3)
		all_contacts->it_contact = 0;
	init_info(all_contacts);
	all_contacts->it_contact++;
	if (all_contacts->full != 3)
		all_contacts->full++;
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

	all_contacts.it_contact = 0;
	all_contacts.full = 0;
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