/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 09:24:54 by ldermign          #+#    #+#             */
/*   Updated: 2022/06/02 11:21:11 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal {

public:

	virtual void	makeSound( void ) const;
	std::string		getType( void ) const;
	Animal( std::string newType );

// 	CANONICAL FORM

	Animal( void );
	Animal	&operator=( Animal const & rhs );
	Animal( Animal const &src );
	virtual	~Animal( void );

protected:

	std::string	type;

};

#endif