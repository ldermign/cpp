/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 13:21:26 by ldermign          #+#    #+#             */
/*   Updated: 2022/06/03 14:45:30 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

struct Data {

public:

//	ACCESSORS

	int		getTestInt( void ) const ;
	char	getTestChar( void ) const ;

//	CANONICAL FORM

	Data( void );
	Data &operator=( Data const &rhs );
	Data( Data const &src );
	~Data( void );

private:

	int		_testInt;
	char	_testChar;

};

#endif