/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 10:15:15 by ldermign          #+#    #+#             */
/*   Updated: 2022/06/02 11:27:11 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {

public:

	void		makeSound( void ) const;
	std::string	getType( void ) const;
	WrongAnimal( std::string newType );

//	CANONICAL FORM

	WrongAnimal( void );
	WrongAnimal	&operator=( WrongAnimal const &rhs );
	WrongAnimal( WrongAnimal const &src );
	virtual	~WrongAnimal( void );

protected:

	std::string	type;

};

#endif