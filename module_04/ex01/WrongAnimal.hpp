/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 10:15:15 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/19 10:22:51 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {

public:

	void	makeSound( void ) const;
	std::string	getType( void ) const;
	WrongAnimal( std::string newType );

// Canonical form

	WrongAnimal( void ) : type("WrongAnimal") {
		std::cout << "There is a new WrongAnimal in this place" << std::endl;
	};
	WrongAnimal	&operator=( WrongAnimal const & rhs ) {
		if (&rhs != this)
			this->type = rhs.getType();
		return *this;
	};
	WrongAnimal( WrongAnimal const & src ) {
		*this = src;
	};
	virtual	~WrongAnimal( void ) {
		std::cout << "One less WrongAnimal" << std::endl;
	};

protected:

	std::string	type;

};

#endif