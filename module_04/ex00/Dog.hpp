/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 11:01:31 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/19 10:07:45 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {

public:

	virtual void	makeSound( void ) const;
	Dog( std::string newType );

// Canonical form

	Dog( void ) : Animal("Dog") {
		std::cout << "One more Dog !" << std::endl;
	};
	Dog	&operator=( Dog const & rhs ) {
		if (&rhs != this)
			this->type = rhs.getType();
		return *this;
	};
	Dog( Dog const & src ) {
		*this = src;
	};
	virtual	~Dog( void ) {
		std::cout << "One of the Dogs is gone" << std::endl;
	};

};

#endif