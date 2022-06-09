/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 11:00:57 by ldermign          #+#    #+#             */
/*   Updated: 2022/06/02 11:25:21 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"

void	Dog::makeSound( void ) const {
	
	std::cout << "Ouaf ouaf !" << std::endl;
}

Dog::Dog( std::string newType ) {

	type = newType;
}

/*
**	CANONICAL FORM
*/

Dog::Dog( void ) : Animal("Dog") {

	std::cout << "One more Dog !" << std::endl;

}

Dog	&Dog::operator=( Dog const & rhs ) {

	if (&rhs != this)
		this->type = rhs.getType();

	return *this;

}

Dog::Dog( Dog const & src ) {

	*this = src;

}

Dog::~Dog( void ) {

	std::cout << "One of the Dogs is gone" << std::endl;

}
