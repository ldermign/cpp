/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 16:07:15 by ldermign          #+#    #+#             */
/*   Updated: 2022/06/10 15:20:19 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <exception>

class NotFind : public std::exception {  
	public:  
		const char * what() const throw() {
			return "\033[38;5;160mInteger not found\033[0m";  
		}  
}; 

template< typename T >
void	easyfind( T x, int nbr ) {

	if (std::find(x.begin(), x.end(), nbr) != x.end())
		std::cout << "\033[38;5;70mOk\033[0m" << std::endl;
	else
		throw NotFind();
}

#endif