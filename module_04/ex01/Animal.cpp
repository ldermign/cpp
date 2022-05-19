/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 09:26:06 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/19 10:10:47 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"

void	Animal::makeSound( void ) const {
	
	std::cout << "An Animal is ready to make a sound..." << std::endl;
}

std::string	Animal::getType( void ) const {

	return this->type;
}

Animal::Animal( std::string newType ) {

	this->type = newType;
}
