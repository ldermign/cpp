/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 14:33:16 by ldermign          #+#    #+#             */
/*   Updated: 2022/06/07 15:24:48 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

int main( void ) {

	{
		int size = 5;
		int test[] = {42, -8, 7, 2147483647, 0};

		iter(test, size, print);
		
		std::cout << "-------------------------------" << std::endl;
		
		iter(test, size, add);
		iter(test, size, print);
	}

	std::cout << "-------------------------------" << std::endl;

	{
		std::string test[] = {"Salut ", "ca ", "va ", "?"};
		iter(test, 4, print);
	}
	
	return 0;
}
