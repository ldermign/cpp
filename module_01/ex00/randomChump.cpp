/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 16:40:17 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/04 11:26:00 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

void	Zombie::randomChump( std::string name ) {
	
	Zombie ZombieNoAlloc = Zombie(name);
	ZombieNoAlloc.announce();
}