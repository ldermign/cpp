/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 11:00:57 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/17 12:55:16 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"

Dog::Dog( void ){// : type("Dog") {

	std::cout << "One more Dog !" << std::endl;
	return ;
}

Dog & Dog::operator=( Dog const & rhs ) {
	
	if (&rhs != this) {}
	
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
