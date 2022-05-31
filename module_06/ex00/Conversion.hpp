/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 10:45:29 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/31 15:32:44 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP
# define CONVERSION_HPP

class Conversion {

public:

	void	getConv( char const *str );

	// void	convertInt( char const *str );
	// void	convertChar( char const c );
	// void	converDouble( char const *str );
	// void	convertFloat( char const *str );

//	ACCESSORS

	int		getInt( void ) const;
	char	getChar( void ) const;
	double	getDouble( void ) const;
	float	getFloat( void ) const;
	char	getWhichConv( void ) const;


//	CANONICAL FORM

	Conversion( void );
	Conversion &operator=( Conversion const &rhs );
	Conversion( Conversion const &src );
	virtual ~Conversion( void );

private:

	int			_int;
	char		_char;
	double		_double;
	float		_float;

	char		_whichConv;

};

#endif