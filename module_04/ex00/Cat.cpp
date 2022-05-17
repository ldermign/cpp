/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 10:59:33 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/17 11:01:05 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"

Cat::Cat( void ) {

	std::cout << "One more Cat !" << std::endl;
	return ;
}

Cat & Cat::operator=( Cat const & rhs ) {
	
	if (&rhs != this) {}
	
	return *this;
}

Cat::Cat( Cat const & src ) {
	
	*this = src;

	return ;
}

Cat::~Cat( void ) {

	std::cout << "One of the Cats is gone" << std::endl;
	return ;
}
