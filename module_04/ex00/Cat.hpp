/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 10:58:16 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/17 14:04:14 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {

public:

	void	makeSound( void ) const;

	Cat( void );						//	Constructeur par défaut
	Cat	&operator=( Cat const & rhs );	//	Opérateur d’affectation
	Cat( Cat const & src );				//	Constructeur de recopie
	virtual	~Cat( void );						//	Destructeur

};

#endif