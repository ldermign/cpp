/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 15:01:48 by ldermign          #+#    #+#             */
/*   Updated: 2022/06/02 10:51:42 by ldermign         ###   ########.fr       */
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

	ScavTrap( void );
	ScavTrap	&operator=( ScavTrap const & rhs );
	ScavTrap( ScavTrap const & src );
	virtual ~ScavTrap( void );
	
};

#endif