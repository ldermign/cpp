# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/26 11:24:16 by ldermign          #+#    #+#              #
#    Updated: 2022/04/27 15:44:54 by ldermign         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	phonebook

SRCS	=	main.cpp Contact.cpp PhoneBook.cpp 

INCS	=	Contact.hpp PhoneBook.hpp

OBJS	=	${SRCS:.cpp=.o}

CC		=	c++

CFLAGS	=	-Wall -Wextra -Werror -g3 -std=c++98
 
RM		=	rm -rf

all:		${NAME}

${NAME}:	${OBJS}
			${CC} ${CFLAGS} -o ${NAME} ${OBJS}

.cpp.o:
			${CC} ${CFLAGS} -c $< -o ${<:cpp=o} #-I ${INCS}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY: 	all clean fclean re