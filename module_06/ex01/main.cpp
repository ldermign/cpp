/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 15:27:47 by ldermign          #+#    #+#             */
/*   Updated: 2022/06/03 14:44:27 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdint.h>
#include "Data.hpp"

intptr_t	serialize( Data *ptr ) {

	uintptr_t raw = reinterpret_cast<uintptr_t>(ptr);
	
	return raw;
}

Data	*deserialize( uintptr_t raw ) {
	
	Data *ptr = reinterpret_cast<Data *>(raw);
	
	return ptr;
}

int main( void ) {

	Data	test;

	std::cout << "Infos in data : [" << test.getTestInt() << "] - [" << test.getTestChar() << "] address = [" << &test << "]" << std::endl;

	uintptr_t	unit = serialize(&test);

	Data	*retour = deserialize(unit);

	std::cout << "Infos in new struct, after cast : [" << retour->getTestInt() << "] - [" << retour->getTestChar() << "] address = [" << retour << "]" << std::endl;

	return 0;
}
