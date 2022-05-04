/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 17:24:39 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/04 15:13:57 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {

	Zombie *ptrHorde = new Zombie[N];
	for (int i = 0 ; i < N ; i++)
		ptrHorde[i].setNameZombie(name);

	return ptrHorde;
}