/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 15:57:38 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/04 17:20:29 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

/*
Now, create two classes: HumanA and HumanB. They both have a Weapon and a
name. They also have a member function attack() that displays (of course, without the
angle brackets): <name> attacks with their <weapon type>
HumanA and HumanB are almost the same except for these two tiny details:
• While HumanA takes the Weapon in its constructor, HumanB doesn’t.
• HumanB may not always have a Weapon, whereas HumanA will always be armed.
*/

class	HumanA {
	
public:

	void	attack();
	void	setWeapon( Weapon *ptr );

	HumanA( std::string name, Weapon *ptr );
	~HumanA( void );

private:

	std::string	_name;
	std::string	_weapon;

};
