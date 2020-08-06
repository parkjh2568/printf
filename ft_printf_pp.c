/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_pp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhypar <junhypar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/28 19:24:42 by junhypar          #+#    #+#             */
/*   Updated: 2020/08/06 13:02:34 by junhypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	pp_sequens_2(t_calcul con, char *out)
{
	if (con.min == 1)
		out[0] = '%';
	else
		out[con.dotbf - 1] = '%';
}

int		pp_sequens_1(t_calcul con)
{
	char *out;

	if (con.dotbf == 0)
	{
		write(1, "%", 1);
		return (1);
	}
	else
	{
		if (!(out = malloc(sizeof(char) * (con.dotbf + 1))))
			return (0);
		ft_bzero(out, con.dotbf + 1);
		if (con.zr == 1 && con.min == 0)
			ft_memset(out, '0', con.dotbf);
		else
			ft_memset(out, ' ', con.dotbf);
		pp_sequens_2(con, out);
		ft_putchar(out);
		free(out);
		out = 0;
		return (con.dotbf);
	}
}

int		ft_printf_pp(const char *input, int i, va_list lst, char per_wd)
{
	int			len;
	t_calcul	con;

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
	len = pp_sequens_1(con);
	return (len);
}
