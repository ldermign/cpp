/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 09:24:54 by ldermign          #+#    #+#             */
/*   Updated: 2022/06/02 11:34:06 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>

class AAnimal {

public:

	virtual void	makeSound( void ) const;
	std::string		getType( void ) const;
	AAnimal( std::string newType );

// 	CANONICAL FORM

	AAnimal( void );
	AAnimal	&operator=( AAnimal const & rhs );
	AAnimal( AAnimal const &src );
	virtual	~AAnimal( void );

protected:

	std::string	type;

};

#endif