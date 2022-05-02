/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 16:40:15 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/02 16:56:35 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>
#include "Zombie.hpp"

void	Zombie::announce( void ) {

	std::cout << "\033[38;5;70m" << this->_name << ": BraiiiiiiinnnzzzZ...\033[0m" << std::endl;
}

void	Zombie::~Zombie( void ) {

	std::cout << "\033[38;5;160m" << this->_name << " doesn't need more brain.\033[0m" << std::endl;
}

class	Zombie {

public:

	Zombie( void );
	~Zombie( void );

	void	announce( void ); // verifier si privee ou public
	Zombie*	newZombie( std::string name );
	//	It creates a zombie, name it, and return it so you can use it
	//	outside of the function scope.
	void	randomChump( std::string name );
	//	It creates a zombie, name it, and the zombie announces itself.


private:

	std::string	_name;

}