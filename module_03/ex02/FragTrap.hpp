/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 10:03:08 by ldermign          #+#    #+#             */
/*   Updated: 2022/06/02 11:01:02 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

public:

	void	highFivesGuys( void );

	void	attack( const std::string &target );

	FragTrap( std::string name );

	FragTrap( void );
	FragTrap	&operator=( FragTrap const & rhs );
	FragTrap( FragTrap const & src );
	virtual ~FragTrap( void );
	
};

#endif