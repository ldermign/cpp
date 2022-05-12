/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 15:31:02 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/12 14:58:53 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

class ClapTrap {

public:

	void		attack( const std::string &target );
	void		takeDamage( unsigned int amount );
	void		beRepaired( unsigned int amount );

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