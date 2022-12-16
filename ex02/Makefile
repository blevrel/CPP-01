# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: blevrel <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/26 14:06:36 by blevrel           #+#    #+#              #
#    Updated: 2022/11/27 11:16:10 by blevrel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	hi_this_is_brain

SRCS	=	main.cpp		\

OBJS	= ${SRCS:.cpp=.o}

CC		= c++

CFLAGS	= -Wall -Wextra -Werror -std=c++98 -g

RM		= rm -f

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.cpp.o:
	${CC} ${CFLAGS} -c $< -o ${<:.cpp=.o}

${NAME}:${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}

.PHONY: all clean fclean re
