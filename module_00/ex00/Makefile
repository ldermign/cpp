# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/14 15:14:38 by ldermign          #+#    #+#              #
#    Updated: 2022/04/14 15:26:14 by ldermign         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	minishell

INCS	=	

SRCS	=	megaphone.cpp

OBJS	=	${SRCS:.c=.o}

DEPS	=	${SRCS:.c=.d}

CC		=	c++

RM		=	rm -rf

CFLAGS	=	-Wall -Wextra -Werror #-I ${INCS} #-std=c++98 <-- doit pouvoir compiler avec ca

all:		${NAME}

${NAME}:	${OBJS}
			@${CC} -o ${NAME} ${OBJS}  ${CFLAGS} 

-include	${DEPS}

%.o:%.c
			@${CC} ${CFLAGS} -o $@ -c $<
			@${CC} ${CFLAGS} -MMD -MP -MF ${@:.o=.d} -o $@ -c $<

clean:
			@${RM} ${OBJS} ${DEPS}

fclean:		clean
			@${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re