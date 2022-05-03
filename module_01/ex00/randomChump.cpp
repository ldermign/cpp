/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 16:40:17 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/03 17:13:39 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>
#include "Zombie.hpp"

void	randomChump( std::string name ) {
	
	Zombie ZombieNoAlloc = Zombie(name);
	std::cout << "\033[38;5;70m" << name << ": BraiiiiiiinnnzzzZ...\033[0m" << std::endl;
}