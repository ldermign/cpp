/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 09:26:06 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/17 09:33:26 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"

Animal::Animal( void ) {

	return ;
}

Animal & Animal::operator=( Animal const & rhs ) {
	
	return *this;
}

Animal::Animal( Animal const & src ) {
	
	*this = src;

	return ;
}

Animal::~Animal( void ) {

	
}