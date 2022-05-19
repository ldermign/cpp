/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 11:01:31 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/19 14:26:09 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {

public:

	virtual void	makeSound( void ) const;
	Dog( std::string newType );

// Canonical form

	Dog( void );
	Dog	&operator=( Dog const &rhs );
	Dog( Dog const &src );
	virtual	~Dog( void );

private:

	Brain *brainDog;

};

#endif