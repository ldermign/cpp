# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/26 10:07:03 by ldermign          #+#    #+#              #
#    Updated: 2022/06/01 21:18:43 by ldermign         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	convert

SRCS	=	main.cpp

OBJS	=	${SRCS:.cpp=.o}

DEPS	=	${SRCS:.cpp=.d}

CC		=	c++

CFLAGS	=	-Wall -Wextra -Werror -std=c++98 -g3

RM		=	rm -rf

all:		${NAME}

${NAME}:	${OBJS}
			${CC} ${CFLAGS} -o ${NAME} ${OBJS}

-include	${DEPS}

%.o:%.cpp
			${CC} -MMD -MP -o $@ -c $< ${CFLAGS}

clean:
			${RM} ${OBJS} ${DEPS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY: 	all clean fclean re

