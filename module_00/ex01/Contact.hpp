/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 11:23:55 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/01 18:28:46 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

class Contact {
	
public:

	Contact(void);
	~Contact(void);

private:

	std::string	_firstName;
	std::string	_lastName;
	std::string	__nickname;
	std::string	_phoneNumber;
	std::string	_darkestSecret;
	
};

#endif
