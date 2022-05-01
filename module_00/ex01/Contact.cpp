/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 11:23:14 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/01 18:28:46 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

Contact::Contact(void) : _firstName(""), _lastName(""),
	__nickname(""), _phoneNumber(""), _darkestSecret("") {

	return ;
}

Contact::~Contact(void) {

	return ;
}
