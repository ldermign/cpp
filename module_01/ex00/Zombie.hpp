/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 16:40:15 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/04 11:25:50 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class	Zombie {

public:

	Zombie( std::string name );
	~Zombie( void );

	std::string getName( void );

	void	announce( void );
	Zombie*	newZombie( std::string name );
	void	randomChump( std::string name );


private:

	std::string	_name;

};
