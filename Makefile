# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: junhypar <junhypar@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/25 11:02:46 by junhypar          #+#    #+#              #
#    Updated: 2020/07/25 13:09:59 by junhypar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a

SRCS	=	

OBJS	=	${SRCS:.c=.o}

CC		=	gcc -Wall -Wextra -Werror

all:		${NAME}

.c.o:
			${CC} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			$(MAKE) bonus -C ./libft
			cp libft/libft.a ${NAME}
			ar rc ${NAME} ${OBJS}

clean:
			$(MAKE) clean -C ./libft
			rm -f ${OBJS}

fclean:		clean
			$(MAKE) fclean -C ./libft
			rm -f ${NAME}

re:			fclean all
