/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 14:33:54 by ldermign          #+#    #+#             */
/*   Updated: 2022/06/14 10:55:02 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template< typename T >
void	iter( T tabl[], int size, void (*f)(T &) ) {

	for (int i = 0 ; i < size ; i++)
		(f)(tabl[i]);
}

template< typename U >
void	print( U &toPrint ) {	//	const ?

	std::cout << toPrint << std::endl;
}

template< typename V >
void	add( V &addItself ) {

	addItself += addItself;
}

#endif
