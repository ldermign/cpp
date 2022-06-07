/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 11:09:38 by ldermign          #+#    #+#             */
/*   Updated: 2022/06/07 14:30:58 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template< typename T >
T const min( T const &a, T const &b ) {

	return (a < b ? a : b);
	
}

template< typename U >
U const max( U const &a, U const &b ) {

	return (a > b ? a : b);
	
}

template< typename V >
void swap( V &a, V &b ) {

	V tmp = a;
	a = b;
	b = tmp;
	
}

#endif
