/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 09:26:06 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/19 15:16:34 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"

void	AAnimal::makeSound( void ) const {
	
	std::cout << "An Animal is ready to make a sound..." << std::endl;
}

std::string	AAnimal::getType( void ) const {

	return this->type;
}

AAnimal::AAnimal( std::string newType ) {

	this->type = newType;
}
