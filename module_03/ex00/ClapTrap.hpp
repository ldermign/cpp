/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 15:31:02 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/12 08:46:27 by ldermign         ###   ########.fr       */
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

Quand ClapTrap attaque, sa cible perd <attack damage> hit points. Quand ClapTrap
se répare, il regagne <amount> hit points. Les actions attaquer et réparer coûtent chacune
1 point d’énergie. Bien entendu, ClapTrap ne peut exécuter aucune action s’il n’a plus
de vie ou d’énergie.
Pour toutes ces fonctions membres, vous devez afficher un message descriptif. Par
exemple, la fonction attack() affichera quelque chose dans le genre (bien sûr, sans les
chevrons) :
ClapTrap <name> attacks <target>, causing <damage> points of damage!
Les constructeurs et le destructeur afficheront également un message. Ceci afin que
vos pairs puissent vérifier facilement qu’ils ont effectivement été appelés.
Écrivez et rendez vos propres tests afin de démontrer que votre tout fonctionne comme
demandé.
*/

class ClapTrap {

public:

	void		attack(const std::string &target);
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