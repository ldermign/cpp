/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 10:19:39 by ldermign          #+#    #+#             */
/*   Updated: 2022/06/02 11:29:12 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

public:

	void	makeSound( void ) const;
	WrongCat( std::string newType );

//	CANONICAL FORM

	WrongCat( void );
	WrongCat	&operator=( WrongCat const &rhs );
	WrongCat( WrongCat const &src );
	virtual ~WrongCat( void );

};

#endif