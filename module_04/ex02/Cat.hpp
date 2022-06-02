/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 10:58:16 by ldermign          #+#    #+#             */
/*   Updated: 2022/06/02 11:34:25 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal {

public:

	virtual void	makeSound( void ) const;
	Cat( std::string newType );

// Canonical form

	Cat( void );
	Cat	&operator=( Cat const & rhs );
	Cat( Cat const & src );
	virtual ~Cat( void );

private:

	Brain* brainCat;

};

#endif