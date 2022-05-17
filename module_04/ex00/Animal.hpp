/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 09:24:54 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/17 11:10:19 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

class Animal {

public:

	void	makeSound( void );

	std::string	getType( void );

	Animal( void );								//	Constructeur par défaut
	Animal	&operator=( Animal const & rhs );	//	Opérateur d’affectation
	Animal( Animal const & src );				//	Constructeur de recopie
	~Animal( void );							//	Destructeur

protected:

	std::string	type;

};

#endif