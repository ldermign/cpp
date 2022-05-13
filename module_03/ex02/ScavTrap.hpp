/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 15:01:48 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/13 14:19:37 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

public:

	void	guardGate( void );

	void	attack( const std::string &target );

	ScavTrap( std::string name );

	ScavTrap( void );								//	Constructeur par défaut
	ScavTrap	&operator=( ScavTrap const & rhs );//	Opérateur d’affectation
	ScavTrap( ScavTrap const & src );				//	Constructeur de recopie
	virtual ~ScavTrap( void );						//	Destructeur
	
};

#endif

/*
---------------------- Basic tests -----------------------------
A new soldier has been created. His name is Spartiate
A new soldier has been created. His name is Roman
A new ScavTrap soldier has been created. His name is Gallic

The ScavTrap soldier Gallic has been erased. Goodbye
The ClapTrap soldier  has been erased. Goodbye
The ClapTrap soldier Roman has been erased. Goodbye
The ClapTrap soldier Spartiate has been erased. Goodbye

*/