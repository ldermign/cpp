/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 17:20:39 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/04 15:13:10 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int main() {

	int	nb_zombie = 3;
	
	Zombie *newHorde = zombieHorde(nb_zombie, "ldermign");

	for (int i = 0 ; i < nb_zombie ; i++)
		newHorde[i].announce();

	delete [] newHorde;

	return 0;
}
