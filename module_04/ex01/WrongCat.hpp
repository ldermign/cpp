/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 10:19:39 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/19 10:22:39 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

public:

	void	makeSound( void ) const;
	WrongCat( std::string newType );

// Canonical form

	WrongCat( void ) : WrongAnimal("WrongCat") {
		std::cout << "One more WrongCat !" << std::endl;
	};
	WrongCat	&operator=( WrongCat const & rhs ) {
		if (&rhs != this)
			type = rhs.getType();
		return *this;
	};
	WrongCat( WrongCat const & src ) {
		*this = src;
	};
	virtual ~WrongCat( void ) {
		std::cout << "One of the WrongCats is gone" << std::endl;
	};

};

#endif