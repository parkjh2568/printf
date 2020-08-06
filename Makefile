# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: junhypar <junhypar@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/25 11:02:46 by junhypar          #+#    #+#              #
#    Updated: 2020/08/06 11:34:54 by junhypar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a

SRCS	=	ft_printf.c ft_printf_d.c ft_printf_d2.c ft_printf_s.c ft_printf_u.c ft_printf_u2.c ft_printf_x.c ft_printf_x2.c ft_printf_pp.c ft_printf_lx.c ft_printf_lx2.c ft_printf_p.c ft_printf_p2.c ft_printf_c.c utils1.c utils2.c ft_utoa.c ft_unutoa.c

OBJS	=	${SRCS:.c=.o}

CC		=	gcc 

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
