# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: junhypar <junhypar@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/25 11:02:46 by junhypar          #+#    #+#              #
#    Updated: 2020/07/25 11:08:46 by junhypar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a

SRCS	=

SRCS2	=

OBJS	=	${SRCS:.c=.o}

OBJS2	=	${SRCS2:.c=.o}

CC		=	gcc -Wall -Wextra -Werror

all:		${NAME}

.c.o:
			${CC} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			ar rc ${NAME} ${OBJS}

bonus:		${OBJS}
			ar rc ${NAME} ${OBJS} ${OBJS2}

clean:
			rm -f ${OBJS} ${OBJS2}

fclean:		clean
			rm -f ${NAME}

re:			fclean all
