/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 10:14:14 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/19 10:28:45 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

void	WrongAnimal::makeSound( void ) const {
	
	std::cout << "WrongAnimal here : someone's ready to be loud..." << std::endl;
}

std::string	WrongAnimal::getType( void ) const {

	return this->type;
}

WrongAnimal::WrongAnimal( std::string newType ) {

	this->type = newType;
}
