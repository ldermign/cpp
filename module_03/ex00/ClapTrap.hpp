/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 15:31:02 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/11 15:45:36 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

/*
Elle s’appellera ClapTrap et possèdera les attributs privés suivants
initialisés aux valeurs entre parenthèses :
• Name, son nom, qui sera passé en paramètre d’un constructeur
• Hit points (10), ou points de vie
• Energy points (10), ou points d’énergie
• Attack damage (0), ou dommages infligés en attaquant
Ajoutez au ClapTrap ces fonctions membres publiques afin de lui donner vie :
• void attack(const std::string& target);
• void takeDamage(unsigned int amount);
• void beRepaired(unsigned int amount);
*/

class ClapTrap {

public:

	void		attack(const std::string& target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);

	ClapTrap( std::string name );

	ClapTrap( void );								//	Constructeur par défaut
	ClapTrap	&operator=( ClapTrap const & rhs );//	Opérateur d’affectation
	ClapTrap( ClapTrap const & src );				//	Constructeur de recopie
	~ClapTrap( void );								//	Destructeur

private:

	std::string	_name;
	int			_hitPoints;
	int			_energyPoints;
	int			_attackDamage;

};

#endif