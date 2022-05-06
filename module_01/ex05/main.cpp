/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 21:41:30 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/06 23:52:32 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

int	main() {

	Harl	notAgain;

	notAgain.complain("-12345");
	notAgain.complain("DEBUG");
	notAgain.complain("INFO");
	notAgain.complain("non");
	notAgain.complain("WARNING");
	notAgain.complain("ERROR");

	return 0;
}