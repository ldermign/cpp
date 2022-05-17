/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 09:26:06 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/17 13:54:34 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"

Animal::Animal( void ) {

	std::cout << "There is a new Animal in this place" << std::endl;
	return ;
}

Animal & Animal::operator=( Animal const & rhs ) {
	
	if (&rhs != this) {}
	
	return *this;
}

Animal::Animal( Animal const & src ) {
	
	*this = src;

	return ;
}

Animal::~Animal( void ) {

	std::cout << "One less Animal" << std::endl;
	return ;
}

std::string	Animal::getType( void ) const {

	return this->type;
}

void	Animal::makeSound( void ) const {
	
	std::cout << "An Animal is ready to make a sound..." << std::endl;
}