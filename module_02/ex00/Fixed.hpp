/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 17:32:38 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/10 12:06:11 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

/*
Membres privés :
◦ Un entier pour stocker la valeur du nombre en virgule fixe.
◦ Un entier constant statique pour stocker le nombre de bits de la partie
fractionnaire, et dont la valeur sera toujours le littéral entier 8.

Membres publics :
◦ Un constructeur par défaut qui initialisera la valeur du nombre à virgule fixe
à 0.
◦ Un constructeur de recopie.
◦ Une surcharge de l’opérateur d’affectation.
◦ Un destructeur.
◦ Une fonction membre int getRawBits( void ) const;
qui retourne la valeur du nombre à virgule fixe sans la convertir.
◦ Une fonction membre void setRawBits( int const raw );
qui initialise la valeur du nombre à virgule fixe avec celle passée en paramètre.
*/

class Fixed {

public:

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );

	Fixed( void );
	Fixed & operator=( Fixed const & rhs );
	Fixed( Fixed const & src);
	~Fixed( void );

private:

	int					_whole;
	static const int	_wholeConst;

};

// std::ostream & operator<<( std::ostream & o, Sample const & i );

/*

	int : 42.000 ----> int

	42[0 0 0 0 0 0 0 0] * 256
 			-> 42 / 256

	float : 42.42 ------> * 256 = 
	
	 


*/

#endif