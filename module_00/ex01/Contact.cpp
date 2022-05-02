/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 11:23:14 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/02 13:50:08 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>
#include "Contact.hpp"

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

int	Contact::init_info( void ) {

	std::cout << "You are going to add a new contact to your PhoneBook. What's his first name ?" << std::endl;
	while (this->_firstName == "")
	{
		if (std::cin.eof())
			return EXIT_FAILURE;
		std::getline (std::cin, this->_firstName);
	}
	std::cout << "You can now enter his last name :" << std::endl;
	while (this->_lastName == "")
	{
		if (std::cin.eof())
			return EXIT_FAILURE;
		std::getline (std::cin, this->_lastName);
	}
	std::cout << "What's his nickname ?" << std::endl;
	while (this->_nickname == "")
	{
		if (std::cin.eof())
			return EXIT_FAILURE;
		std::getline (std::cin, this->_nickname);
	}
	std::cout << "Now, put his phone number." << std::endl;
	while (this->_phoneNumber == "")
	{
		std::getline (std::cin, this->_phoneNumber);
		if (std::cin.eof())
			return EXIT_FAILURE;
		if (this->_phoneNumber != "" && is_digit(this->_phoneNumber) == -1)
		{
			std::cout << "Error. Only digit in a phone number." << std::endl;
			this->_phoneNumber = "";
		}
	}
	std::cout << "Finaly, what's his darkest secret ?" << std::endl;
	while (this->_darkestSecret == "")
	{
		if (std::cin.eof())
			return EXIT_FAILURE;
		std::getline (std::cin, this->_darkestSecret);
	}
	return EXIT_SUCCESS;
}

void	Contact::suppUser( void ) {

	this->_firstName = "";
	this->_lastName = "";
	this->_nickname = "";
	this->_phoneNumber = "";
	this->_darkestSecret = "";
}

std::string	Contact::getFirstName( void ) {

	return this->_firstName;
}

std::string	Contact::getLastName( void ) {

	return this->_lastName;
}

std::string	Contact::getNickname( void ) {

	return this->_nickname;
}

std::string	Contact::getPhoneNumber( void ) {

	return this->_phoneNumber;
}

std::string	Contact::getDarkestSecret( void ) {

	return this->_darkestSecret;
}

Contact::Contact(void) {

	return ;
}

Contact::~Contact(void) {

	return ;
}
