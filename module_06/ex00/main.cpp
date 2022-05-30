/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 15:27:47 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/30 15:42:32 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	convert( char *arg ) {
	
	// std::size_t strlen(arg) == 1
	
}

int main( int ac, char **av ) {

	if (ac != 2) {
		std::cout << "Error argument." << std::endl;
		return 0;
	}
	else
		convert(av[1]);
	return ;
}