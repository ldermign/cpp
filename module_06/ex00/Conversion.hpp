/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 10:45:29 by ldermign          #+#    #+#             */
/*   Updated: 2022/06/01 14:32:05 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP
# define CONVERSION_HPP

class Conversion {

public:

	void		getConv( char const *str );

	void		doConv( void );

	void		convertToInt( char const c );
	void		convertToChar( char const c );
	void		convertToDouble( char const c );
	void		convertToFloat( char const c );

//	ACCESSORS

	int			getInt( void ) const;
	char		getChar( void ) const;
	double		getDouble( void ) const;
	float		getFloat( void ) const;

	std::string	getImpInt( void ) const;
	std::string	getImpChar( void ) const;
	std::string	getImpDouble( void ) const;
	std::string	getImpFloat( void ) const;

	char		getWhichConv( void ) const;

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

	std::string	_impInt;
	std::string	_impChar;
	std::string	_impDouble;
	std::string	_impFloat;

	char		_whichConv;

};

#endif