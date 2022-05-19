/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 10:19:05 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/19 10:19:33 by ldermign         ###   ########.fr       */
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
