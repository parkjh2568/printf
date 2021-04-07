/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_c.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhypar <junhypar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/28 19:24:42 by junhypar          #+#    #+#             */
/*   Updated: 2020/08/06 17:29:29 by junhypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_pputchar(char *out, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		write(1, &out[i], 1);
		i++;
	}
}

void	c_sequens_2(t_calcul con, char *out, char wod)
{
	if (con.min == 1)
	{
		if (wod == 0)
			out[0] = '\x00';
		else
			out[0] = wod;
	}
	else
	{
		if (wod == 0)
			out[con.dotbf - 1] = '\x00';
		else
			out[con.dotbf - 1] = wod;
	}
}

int		c_sequens_1(t_calcul con, char wod)
{
	char *out;

	if (con.dotbf == 0)
	{
		ft_pputchar(&wod, 1);
		return (1);
	}
	else
	{
		if (!(out = malloc(sizeof(char) * (con.dotbf + 1))))
			return (0);
		ft_bzero(out, con.dotbf + 1);
		if (con.zr == 1 && con.dot == 0 && con.min != 1)
			ft_memset(out, '0', con.dotbf);
		else
			ft_memset(out, ' ', con.dotbf);
		c_sequens_2(con, out, wod);
		ft_pputchar(out, con.dotbf);
		free(out);
		out = 0;
		return (con.dotbf);
	}
}

int		ft_printf_c(const char *input, int i, va_list lst, char per_wd)
{
	int			len;
	t_calcul	con;
	char		wod;

	con = make_t(input, i, per_wd);
	if (con.bfstar == 1 && con.afstar == 1)
	{
		con.dotbf = va_arg(lst, int);
		con.dotafter = va_arg(lst, int);
	}
	else if (con.bfstar == 1)
		con.dotbf = va_arg(lst, int);
	else if (con.afstar == 1)
		con.dotafter = va_arg(lst, int);
	if (con.dotafter < 0 || con.dotbf < 0 || con.min > 1)
		con = set_min_input(con);
	wod = (char)va_arg(lst, int);
	len = c_sequens_1(con, wod);
	return (len);
}
