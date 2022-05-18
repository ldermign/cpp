/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 11:00:57 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/18 15:37:48 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"

Dog::Dog( void ) : Animal("Dog") {

	std::cout << "One more Dog !" << std::endl;
	return ;
}

Dog & Dog::operator=( Dog const & rhs ) {

	if (&rhs != this) {
		this->type = rhs.getType();
	}
	
	return *this;
}

Dog::Dog( Dog const & src ) {
	
	*this = src;

	return ;
}

Dog::~Dog( void ) {

	std::cout << "One of the Dogs is gone" << std::endl;
	return ;
}

void	Dog::makeSound( void ) const {
	
	std::cout << "Ouaf ouaf !" << std::endl;
}

Dog::Dog( std::string newType ) {

	type = newType;
}