/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 11:23:14 by ldermign          #+#    #+#             */
/*   Updated: 2022/04/26 15:48:47 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

Contact::Contact(void) {

	std::string	info_new_contact;
	// std::cout << "Constucteur Contact" << std::endl;

	std::cout << "You are going to add a new contact to your PhoneBook. What's his first name ?" << std::endl;
	std::getline (std::cin, info_new_contact);
	this->first_name = info_new_contact;
	std::cout << "You can now enter his last name :" << std::endl;
	std::getline (std::cin, info_new_contact);
	this->last_name = info_new_contact;
	std::cout << "What's his nickname ?" << std::endl;
	std::getline (std::cin, info_new_contact);
	this->nickname = info_new_contact;
	std::cout << "You can add his phone number." << std::endl;
	std::getline (std::cin, info_new_contact);
	this->phone_number = info_new_contact;
	std::cout << "Finaly, what's his darkest secret ?" << std::endl;
	std::getline (std::cin, info_new_contact);
	this->darkest_secret = info_new_contact;
	// print_phonebook();

	return ;
}

Contact::~Contact(void) {

	std::cout << "Destructeur Contact" << std::endl;
	// appel du destructeur

	return ;
}