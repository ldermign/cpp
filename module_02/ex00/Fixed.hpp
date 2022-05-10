/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 17:32:38 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/10 13:52:21 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed {

public:

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );

	Fixed( void );
	Fixed & operator=( Fixed const & rhs );
	Fixed( Fixed const & src);
	~Fixed( void );

private:

	int					_whole;
	static const int	_wholeConst;

};

#endif