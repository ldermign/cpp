/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 21:41:30 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/08 00:22:45 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

int	main(int ac, char **av) {

	if (ac != 2) {
		std::cout << "Error. Wrong number of argument." << std::endl;
		return 0;
	}
	
	// Harl	notAgain;

	// notAgain.complain("-12345");
	// notAgain.complain("DEBUG");
	// notAgain.complain("INFO");
	// notAgain.complain("non");
	// notAgain.complain("WARNING");
	// notAgain.complain("ERROR");

	return 0;
}