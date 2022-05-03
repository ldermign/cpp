/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 14:04:10 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/03 17:17:39 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>
#include "Zombie.hpp"

int	main() {

	Zombie *Zombie1 = new Zombie("Alloc");
	Zombie Zombie2 = Zombie("NoAlloc");

	delete Zombie1;

	return EXIT_SUCCESS;
}