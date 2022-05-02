/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 11:23:55 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/02 13:47:28 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

class Contact {
	
public:

	std::string getFirstName( void );
	std::string getLastName( void );
	std::string getNickname( void );
	std::string getPhoneNumber( void );
	std::string getDarkestSecret( void );

	int		init_info( void );
	void	suppUser( void );

	Contact(void);
	~Contact(void);

private:

	std::string	_firstName;
	std::string	_lastName;
	std::string	_nickname;
	std::string	_phoneNumber;
	std::string	_darkestSecret;
	
};

#endif
