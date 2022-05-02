# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/26 10:07:03 by ldermign          #+#    #+#              #
#    Updated: 2022/05/01 16:16:21 by ldermign         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	zombie

SRCS	=	randomChump.cpp newZombie.cpp Zombie.cpp

INCS	=	Zombie.hpp

OBJS	=	${SRCS:.cpp=.o}

CC		=	c++

CFLAGS	=	-Wall -Wextra -Werror -std=c++98
 
RM		=	rm -rf

all:		${NAME}

${NAME}:	${OBJS}
			${CC} ${CFLAGS} -o ${NAME} ${OBJS} -I ${INCS}

.cpp.o:
			${CC} ${CFLAGS} -c $< -o ${<:cpp=o}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY: 	all clean fclean re
