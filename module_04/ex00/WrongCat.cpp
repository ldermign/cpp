/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 10:19:05 by ldermign          #+#    #+#             */
/*   Updated: 2022/06/02 11:29:00 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "WrongCat.hpp"

void	WrongCat::makeSound( void ) const {
	
	std::cout << "Miaou. from WrongCat" << std::endl;
}

WrongCat::WrongCat( std::string newType ) {

	type = newType;
}

/*
**	CANONICAL FORM
*/

WrongCat::WrongCat( void ) : WrongAnimal("WrongCat") {

	std::cout << "One more WrongCat !" << std::endl;

}

WrongCat	&WrongCat::operator=( WrongCat const &rhs ) {

	if (&rhs != this)
		type = rhs.getType();

	return *this;

}

WrongCat::WrongCat( WrongCat const &src ) {

	*this = src;

}

WrongCat::~WrongCat( void ) {

	std::cout << "One of the WrongCats is gone" << std::endl;

}
