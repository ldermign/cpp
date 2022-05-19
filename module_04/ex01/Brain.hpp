/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 10:57:39 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/19 14:06:42 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain {

public:

// Canonical form

	Brain( void ) {
		std::cout << "A Brain has been created" << std::endl;
	};
	Brain	&operator=( Brain const & rhs ) {
		if (&rhs != this) {
			for (int i = 0 ; i < 100 ; i++)
				this->ideas[i] = rhs.ideas[i];
		}
		return *this;
	};
	Brain( Brain const & src ) {
		*this = src;
	};
	virtual	~Brain( void ) {
		std::cout << "No more Brain" << std::endl;
	};

protected:

	std::string ideas[100];
	
};

#endif