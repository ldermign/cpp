/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 16:06:20 by ldermign          #+#    #+#             */
/*   Updated: 2022/06/10 15:23:16 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <list>

#include "easyfind.hpp"

int main( void ) {

	{	//	list
		std::list< int > lst1;
		lst1.push_back(1);
		lst1.push_back(17);
		lst1.push_back(42);
		lst1.push_back(0);
		lst1.push_back(-485);
		lst1.push_back(2147483647);
		try {
			easyfind(lst1, 42);
			easyfind(lst1, 2147483647);
			easyfind(lst1, 123);
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}

	{	//	vector
		std::vector< int > lst1;
		lst1.push_back(45);
		lst1.push_back(-6);
		lst1.push_back(-8751);
		lst1.push_back(31145);
		lst1.push_back(-845);
		lst1.push_back(214);
		try {
			easyfind(lst1, -6);
			easyfind(lst1, 31145);
			easyfind(lst1, 123);
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
		
	return 0;
}
