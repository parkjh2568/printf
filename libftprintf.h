/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhypar <junhypar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/25 12:28:20 by junhypar          #+#    #+#             */
/*   Updated: 2020/08/06 18:48:38 by junhypar         ###   ########.fr       */
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
void			d_sequens_5(int len, int mine, char *out, char *num);
int				d_mk_size(t_calcul con, int mine, char *num_c);

int				ft_printf_s(const char *input, int i, va_list lst, char per_wd);

int				ft_printf_u(const char *input, int i, va_list lst, char per_wd);
char			*ft_unutoa(long long n);
void			u_sequens_5(int len, char *out, char *num);
int				u_mk_size(t_calcul con, char *num_c);

int				ft_printf_x(const char *input, int i, va_list lst, char per_wd);
void			x_sequens_5(int len, char *out, char *num);
int				x_mk_size(t_calcul con, char *num_c);
char			*x_mk_hex(long long num);

int				ft_printf_lx(const char *input, int i, va_list lst, char per_wd);
void			lx_sequens_5(int len, char *out, char *num);
int				lx_mk_size(t_calcul con, char *num_c);
char			*lx_mk_hex(long long num);

int				ft_printf_p(const char *input, int i, va_list lst, char per_wd);
void			p_sequens_5(int len, char *out, char *num);
int				p_mk_size(t_calcul con, char *num_c);
char			*p_mk_hex(long long num);

int				ft_printf_pp(const char *input, int i, va_list lst, char per_wd);

int				ft_printf_c(const char *input, int i, va_list lst, char per_wd);

t_calcul		list_set(void);
t_calcul		make_t(const char *input, int i, char wd);
void			ft_putchar(char *s);
char			per_wd(int i);
char			*ft_utoa(int n);
int				ft_aatoi(char c);
t_calcul		set_min_input(t_calcul con);
#endif
