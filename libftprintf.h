/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhypar <junhypar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/25 12:28:20 by junhypar          #+#    #+#             */
/*   Updated: 2020/07/28 12:57:33 by junhypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include "./libft/libft.h"
# include <stdarg.h>

typedef struct	s_calcul{
	int		dotbf;
	int		dotafter;
	int		dot;
	int		min;
	int		bfstar;
	int		afstar;
	int		zr;
}				t_calcul;

int				ft_printf(const char *a, ...);
int				ft_printf_d(const char *input, int i, va_list lst, char per_wd);
int				ft_printf_u(const char *input, int i, va_list lst, char per_wd);
t_calcul		list_set(void);
t_calcul		make_t(const char *input, int i, char wd);
void			ft_putchar(char *s);
char			per_wd(int i);
char			*ft_utoa(int n);
int				ft_aatoi(char c);
#endif
