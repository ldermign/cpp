/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 14:14:38 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/22 14:39:27 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat {

public:

	std::string			getName( void ) const;
	int					getGrade( void ) const;

	void				IncrementGrade( void );
	void				DecrementGrade( void );

// CANONICAL FORM

	Bureaucrat( void );
	Bureaucrat &operator=( Bureaucrat const &rhs );
	Bureaucrat( Bureaucrat const &src );
	~Bureaucrat( void );

private:

	std::string	const	_name;
	int					_grade;

};

std::ostream & operator<<( std::ostream & o, Bureaucrat const & rhs );

#endif

/*
Toute tentative d’instancier un Bureaucrat en utilisant un échelon invalide jettera une
exception :
Bureaucrat::GradeTooHighException ou Bureaucrat::GradeTooLowException.

Vous ajouterez des accesseurs pour chacun de ces attributs : getName() et getGrade().
Implémentez aussi deux fonctions membres afin d’incrémenter ou de décrémenter
l’échelon du bureaucrate. Si ce dernier est trop haut ou trop bas,
les mêmes exceptions que dans le constructeur seront jetées.
Rappelez-vous. Puisque l’échelon 1 est le plus élevé, et 150 le plus
bas, incrémenter un échelon 3 donnera l’échelon 2 au bureaucrate.
*/