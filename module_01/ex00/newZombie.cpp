/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 16:40:12 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/03 17:05:30 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>
#include "Zombie.hpp"

Zombie*	newZombie( std::string name ) {

	Zombie	*ZombieAlloc = new Zombie(name);

	return ZombieAlloc;
}
