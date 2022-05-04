/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 17:21:26 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/04 15:06:32 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie {

public:

	Zombie( void );
	~Zombie( void );

	void	announce( void );

	std::string	getNameZombie( void );
	void	setNameZombie( std::string name );

private:

	std::string _nameZombie;

};

Zombie* zombieHorde( int N, std::string name );
