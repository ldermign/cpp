/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 10:58:16 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/19 10:07:47 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {

public:

	virtual void	makeSound( void ) const;
	Cat( std::string newType );

// Canonical form

	Cat( void ) : Animal("Cat") {
		std::cout << "One more Cat !" << std::endl;
	};
	Cat	&operator=( Cat const & rhs ) {
		if (&rhs != this)
			type = rhs.getType();
		return *this;
	};
	Cat( Cat const & src ) {
		*this = src;
	};
	virtual ~Cat( void ) {
		std::cout << "One of the Cats is gone" << std::endl;
	};

};

#endif