/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 11:01:31 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/17 11:01:59 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {

public:

	Dog( void );						//	Constructeur par défaut
	Dog	&operator=( Dog const & rhs );	//	Opérateur d’affectation
	Dog( Dog const & src );				//	Constructeur de recopie
	~Dog( void );						//	Destructeur

};

#endif