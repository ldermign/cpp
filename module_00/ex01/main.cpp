/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 11:21:57 by ldermign          #+#    #+#             */
/*   Updated: 2022/04/30 13:24:10 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>
#include "Contact.hpp"
#include "PhoneBook.hpp"

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

int	is_digit(std::string str) {

	int	length;

	length = str.length();
	for (int i = 0 ; i < length ; i++)
	{
		if (str[i] < 48 || str[i] > 57)
			return -1;
	}
	return 0;
}

int	init_info(PhoneBook *all) {

	std::cout << "You are going to add a new contact to your PhoneBook. What's his first name ?" << std::endl;
	while (all->repertory[all->it_contact].first_name == "")
	{
		if (std::cin.eof())
			return -1;
		std::getline (std::cin, all->repertory[all->it_contact].first_name);
	}
	std::cout << "You can now enter his last name :" << std::endl;
	while (all->repertory[all->it_contact].last_name == "")
	{
		if (std::cin.eof())
			return -1;
		std::getline (std::cin, all->repertory[all->it_contact].last_name);
	}
	std::cout << "What's his nickname ?" << std::endl;
	while (all->repertory[all->it_contact].nickname == "")
	{
		if (std::cin.eof())
			return -1;
		std::getline (std::cin, all->repertory[all->it_contact].nickname);
	}
	std::cout << "Now, put his phone number." << std::endl;
	while (all->repertory[all->it_contact].phone_number == "")
	{
		std::getline (std::cin, all->repertory[all->it_contact].phone_number);
		if (std::cin.eof())
			return -1;
		if (all->repertory[all->it_contact].phone_number != "" && is_digit(all->repertory[all->it_contact].phone_number) == -1)
		{
			std::cout << "Error. Only digit in a phone number." << std::endl;
			all->repertory[all->it_contact].phone_number = "";
		}
	}
	std::cout << "Finaly, what's his darkest secret ?" << std::endl;
	while (all->repertory[all->it_contact].darkest_secret == "")
	{
		if (std::cin.eof())
			return -1;
		std::getline (std::cin, all->repertory[all->it_contact].darkest_secret);
	}
	return 0;
}

void	erase_if_full(Contact *to_erase) {

	to_erase->first_name = "";
	to_erase->last_name = "";
	to_erase->nickname = "";
	to_erase->phone_number = "";
	to_erase->darkest_secret = "";
}

int	add_user(PhoneBook *all_contacts) {

	Contact		new_contact;

	if (all_contacts->full == 8 && all_contacts->it_contact == 8)
		all_contacts->it_contact = 0;
	if (all_contacts->full == 8)
		erase_if_full(&(all_contacts->repertory[all_contacts->it_contact]));
	if (init_info(all_contacts) == -1)
		return -1;
	all_contacts->it_contact++;
	if (all_contacts->full != 8)
		all_contacts->full++;
	return 1;
}

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

int	search_user(PhoneBook all) {

	std::string	str = "";
	int	index = 0;

	if (all.repertory[0].first_name == "")
	{
		std::cout << "There isn't any contact in your repertory. Please add one before searching." << std::endl;
		return (1);
	}
	std::cout << "Which contact do you want to see ? -> ";
	while (str == "")
	{
		std::getline (std::cin, str);
		if (std::cin.eof())
			return -1;
		if (str != "" && is_digit(str) == -1)
		{
			std::cout << "It goes from 0 to 7. Only numbers." << std::endl;
			str = "";
		}
	}
	index = (int)str[0] - 48;
	if (index > all.full - 1)
	{
		std::cout << "No contact found in this index." << std::endl;
		return (1);
	}
	std::cout << std::endl;
	std::cout << "First name -> " << all.repertory[index].first_name << std::endl;
	std::cout << "Last name -> " << all.repertory[index].last_name << std::endl;
	std::cout << "Nickname -> " << all.repertory[index].nickname << std::endl;
	std::cout << "Phone number-> " << all.repertory[index].phone_number << std::endl;
	std::cout << "Darkest secret-> " << all.repertory[index].darkest_secret << std::endl;
	std::cout << std::endl;
	return 1;
}

int	main()
{
	std::string	cmd_user;
	PhoneBook	all_contacts;

	std::cout << "\033[2J\033[1;1H";
	std::cout << "~~~ Welcome to your PhoneBook ~~~" << std::endl;
	std::cout << std::endl << "Here, you can add any contact of your choice with a few information." << std::endl;
	all_contacts.it_contact = 0;
	all_contacts.full = 0;
	while (42)
	{
		print_welcome_message();
		std::getline (std::cin, cmd_user);
		if (std::cin.eof())
			return 1;
		if (cmd_user == "EXIT")
			exit(0);
		else if (cmd_user == "ADD")
		{
			if (add_user(&all_contacts) == -1)
				return 1;
		}
		else if (cmd_user == "SEARCH")
		{
			print_phonebook(all_contacts);
			if (search_user(all_contacts) == -1)
				return 1;
		}
	}
	return 0;
}