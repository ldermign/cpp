/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 10:45:29 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/31 11:59:32 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP
# define CONVERSION_HPP

class Conversion {

public:

	Conversion( char const *str );

	void	getConv( char const *str );

	void	convertAlpha( char const c );
	void	convertInt( char const *str );

//	CANONICAL FORM

	Conversion( void );
	Conversion &operator=( Conversion const &rhs );
	Conversion( Conversion const &src );
	virtual ~Conversion( void );

private:

	int		_int;
	char	_char;
	double	_double;
	float	_float;

	char	_whichConv;

};

#endif