/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 10:27:13 by ldermign          #+#    #+#             */
/*   Updated: 2022/04/26 11:19:07 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

void	print_maj(char *str)
{
	int	i = 0;
	char	letter;
	
	while (str[i])
	{
		letter = toupper(str[i]);
		std::cout << letter;
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1 ; i < ac ; i++)
			print_maj(av[i]);
		std::cout << std::endl;
	}
	return 0;
}
