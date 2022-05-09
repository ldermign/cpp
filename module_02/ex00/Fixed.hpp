/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 17:32:38 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/09 15:08:50 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed {

public:

	Fixed( void );
	Fixed & operator=( const & rhs );
	Fixed( Fixed const & i)
	~Fixed( void );

private:


};

#endif