/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 09:24:54 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/19 10:10:44 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal {

public:

	virtual void	makeSound( void ) const;
	std::string	getType( void ) const;
	Animal( std::string newType );

// Canonical form

	Animal( void ) : type("Animal") {
		std::cout << "There is a new Animal in this place" << std::endl;
	};
	Animal	&operator=( Animal const & rhs ) {
		if (&rhs != this)
			this->type = rhs.getType();
		return *this;
	};
	Animal( Animal const & src ) {
		*this = src;
	};
	virtual	~Animal( void ) {
		std::cout << "One less Animal" << std::endl;
	};

protected:

	std::string	type;

};

#endif