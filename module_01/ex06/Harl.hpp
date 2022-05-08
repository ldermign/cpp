/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 21:34:24 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/08 16:39:54 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

class Harl {

public:

	int	complain( std::string level );

	Harl( void );
	~Harl( void );

private:

	void	debug( void );
	void	info( void );
	void	warning( void );
	void	error( void );

};

typedef	struct s_error_msg {

	std::string	complain;
	int			level;
	void		(Harl::*f)( void );

}	t_msgs;


#endif