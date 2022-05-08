/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 21:41:30 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/08 16:40:17 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

int	main(int ac, char **av) {

	Harl	notAgain;

	if (ac != 2) {
		std::cout << "Error. Wrong number of argument." << std::endl;
		return 0;
	}
	notAgain.complain(av[1]);

	return 0;
}