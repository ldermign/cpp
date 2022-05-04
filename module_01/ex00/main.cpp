/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 14:04:10 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/04 11:25:52 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>
#include "Zombie.hpp"

int	main() {

	Zombie *ptr;

	Zombie yes = Zombie("Alloc BIG Class");
	Zombie no = Zombie("NoAlloc BIG Class");
	yes.announce();
	no.announce();

	ptr = yes.newZombie("Alloc Inside");
	ptr->announce();

	no.randomChump("NoAlloc Inside");

	delete ptr;

	return 0;
}
