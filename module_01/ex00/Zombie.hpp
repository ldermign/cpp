/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 16:40:15 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/03 17:12:20 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>

class	Zombie {

public:

	Zombie( std::string name );
	~Zombie( void );

	std::string getName( void );

	void	announce( void ); // verifier si privee ou public
	Zombie*	newZombie( std::string name );
	//	It creates a zombie, name it, and return it so you can use it
	//	outside of the function scope.
	void	randomChump( std::string name );
	//	It creates a zombie, name it, and the zombie announces itself.


private:

	std::string	_name;

};