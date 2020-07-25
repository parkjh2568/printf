/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhypar <junhypar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/25 12:28:20 by junhypar          #+#    #+#             */
/*   Updated: 2020/07/25 18:07:36 by junhypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "./libft/libft.h"
# include <stdarg.h>

typedef struct	s_calcul{
	int		dotbf;
	int		dotafter;
	int		dot;
	int		min;
	int		star;
	int		zr;
}				t_calcul;

int				ft_printf(const char *a, ...);
int				ft_printf_d(const char *input, int i, va_list lst, char per_wd);
t_calcul		list_set(void);
t_calcul		make_t(const char *input, int i, char wd);
void			ft_putchar(char *s);
char			per_wd(int i);
#endif
