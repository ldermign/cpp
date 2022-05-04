/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 15:56:34 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/04 18:08:43 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

/*
Implement a Weapon class that has:
• A private attribute type, which is a string.
• A getType() member function that returns a const reference to type.
• A setType() member function that sets type using the new one passed as parameter.
*/

class Weapon {

public:

	str::string const	&getType( std::string name_weapon );
	void				setType( str::string const &newType );

	Weapon( void );
	~Weapon( void );

private:

	std::string	_type;

}