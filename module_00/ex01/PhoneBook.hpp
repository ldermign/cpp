/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 11:29:38 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/02 13:40:06 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

#include "Contact.hpp"

class PhoneBook {

public:

	static int	getIndex( void );
	static int	getFull( void );

	void	printPhoneBook( void );
	int	searchUser( void );
	int	addUser( void );

	Contact	repertory[8];

	PhoneBook(void);
	~PhoneBook(void);

private:

	static int	_index;
	static int	_full;

};

#endif