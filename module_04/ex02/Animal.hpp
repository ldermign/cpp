/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 09:24:54 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/19 15:15:53 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class AAnimal {

public:

	virtual void	makeSound( void ) const = 0;
	std::string	getType( void ) const;
	AAnimal( std::string newType );

// Canonical form

	AAnimal( void ) : type("Animal") {
		std::cout << "There is a new Animal in this place" << std::endl;
	};
	AAnimal	&operator=( AAnimal const & rhs ) {
		if (&rhs != this)
			this->type = rhs.getType();
		return *this;
	};
	AAnimal( AAnimal const & src ) {
		*this = src;
	};
	virtual	~AAnimal( void ) {
		std::cout << "One less Animal" << std::endl;
	};

protected:

	std::string	type;

};

#endif