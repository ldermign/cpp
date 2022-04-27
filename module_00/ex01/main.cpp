/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 11:21:57 by ldermign          #+#    #+#             */
/*   Updated: 2022/04/27 20:27:57 by ldermign         ###   ########.fr       */
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
		std::cout << "|" << "         " << i << "|" << truncate(all.repertory[i].first_name) << "|" << truncate(all.repertory[i].last_name) << "|" << truncate(all.repertory[i].nickname) << "|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << std::endl;
}

void	init_info(PhoneBook *all) {

	std::cout << "You are going to add a new contact to your PhoneBook. What's his first name ?" << std::endl;
	while (all->repertory[all->it_contact].first_name == "")
		std::getline (std::cin, all->repertory[all->it_contact].first_name);
	std::cout << "You can now enter his last name :" << std::endl;
	while (all->repertory[all->it_contact].last_name == "")
		std::getline (std::cin, all->repertory[all->it_contact].last_name);
	std::cout << "What's his nickname ?" << std::endl;
	while (all->repertory[all->it_contact].nickname == "")
		std::getline (std::cin, all->repertory[all->it_contact].nickname);
	std::cout << "Now, put his phone number." << std::endl;
	while (all->repertory[all->it_contact].phone_number == "")
		std::getline (std::cin, all->repertory[all->it_contact].phone_number);

	// check phone number

	std::cout << "Finaly, what's his darkest secret ?" << std::endl;
	while (all->repertory[all->it_contact].darkest_secret == "")
		std::getline (std::cin, all->repertory[all->it_contact].darkest_secret);
	
	// print_phonebook();
}

void	erase_if_full(Contact *to_erase)
{
	std::cout << "merde " << std::endl;
	to_erase->first_name = "";
	to_erase->last_name = "";
	to_erase->nickname = "";
	to_erase->phone_number = "";
	to_erase->darkest_secret = "";
}

void	add_user(PhoneBook *all_contacts)
{
	Contact		new_contact;

	std::cout << "all_contacts->it_contact = " << all_contacts->it_contact << " --- all_contacts->full = " << all_contacts->full << std::endl;
	if (all_contacts->full == 8 && all_contacts->it_contact == 8)
		all_contacts->it_contact = 0;
	if (all_contacts->full == 8)
		erase_if_full(&(all_contacts->repertory[all_contacts->it_contact]));
	init_info(all_contacts);
	all_contacts->it_contact++;
	if (all_contacts->full != 8)
		all_contacts->full++;
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