/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 15:31:02 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/13 14:44:34 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

#include <iostream>

#define RED "\033[38;5;160m"
#define GREEN "\033[38;5;70m"
#define NORM "\033[0m"
#define GREY "\033[38;5;242m"
#define YELL "\033[38;5;214m"

class ClapTrap {

public:

	void		attack( const std::string &target );
	void		takeDamage( unsigned int amount );
	void		beRepaired( unsigned int amount );

	ClapTrap( std::string name, int hp, int ep, int ad );
	ClapTrap( std::string name );

	ClapTrap( void );								//	Constructeur par défaut
	ClapTrap	&operator=( ClapTrap const & rhs );//	Opérateur d’affectation
	ClapTrap( ClapTrap const & src );				//	Constructeur de recopie
	~ClapTrap( void );								//	Destructeur

protected:

	std::string	_name;
	int			_hitPoints;
	int			_energyPoints;
	int			_attackDamage;

};

#endif