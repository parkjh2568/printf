/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhypar <junhypar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/25 16:59:26 by junhypar          #+#    #+#             */
/*   Updated: 2020/07/28 13:29:00 by junhypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*d_sequens_4(char *num, t_calcul con)
{
	int		len;
	int		size;
	char	*out;

	size = con.dotafter;
	len = ft_strlen(num);
	if (!(out = malloc(sizeof(char) * (size + 1))))
		return (NULL);
	ft_bzero(out, size + 1);
	ft_memset(out, '0', size);
	ft_memcpy(out + (size - len), num, len);
	free(num);
	return (out);
}

void	d_sequens_3(char *num, t_calcul con, int mine, char *out)
{
	int	len;

	len = ft_strlen(num);
	if (con.dotbf != 0 && mine == 1 && con.min == 1)
		out[0] = '-';
	if (con.min == 1)
	{
		if (mine == 1)
			ft_memcpy(out + 1, num, len);
		else
			ft_memcpy(out, num, len);
	}
	else if (con.dotbf != 0)
	{
		ft_memcpy(out + (con.dotbf - len), num, len);
		if (mine == 1 && con.zr == 0)
			out[con.dotbf - len - 1] = '-';
		else if (mine == 1 && con.zr == 1)
			out[0] = '-';
	}
	else
	{
		out[0] = '-';
		ft_memcpy(out + 1, num, len);
	}
}

int		d_sequens_2(char *num_c, t_calcul con, int mine)
{
	char	*out;
	int		size;

	size = 0;
	if (con.dotbf == 0 && con.dotafter > ft_strlen(num_c))
		size = con.dotafter + mine;
	else if (con.dotbf == 0 && con.dotafter < ft_strlen(num_c))
		size = ft_strlen(num_c) + mine;
	else
		size = con.dotbf;
	if (!(out = malloc(sizeof(char) * (size + 1))))
		return (0);
	ft_bzero(out, size + 1);
	if (con.zr == 0)
		ft_memset(out, ' ', size);
	else if (con.zr == 1)
		ft_memset(out, '0', size);
	if (con.dotafter != 0 && ft_strlen(num_c) <= con.dotafter)
		num_c = d_sequens_4(num_c, con);
	d_sequens_3(num_c, con, mine, out);
	ft_putchar(out);
	free(out);
	out = 0;
	return (size);
}

int		d_sequens_1(int num_i, t_calcul con, int mine)
{
	char	*num_c;
	int		len;
	int		len2;

	len = 0;
	num_c = ft_utoa(num_i);
	len2 = ft_strlen(num_c) + mine;
	if ((con.dotbf == 0 || (len2 > con.dotbf)) && con.dotafter == 0) 
	{
		if (mine == 1)
		{
			write(1, "-", 1);
			len++;
		}
		ft_putchar(num_c);
		len = len + ft_strlen(num_c);
	}
	else
		len = d_sequens_2(num_c, con, mine);
	return (len);
}

int		ft_printf_d(const char *input, int i, va_list lst, char per_wd)
{
	int			len;
	int			num_i;
	int			mine;
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
	num_i = va_arg(lst, int);
	if (num_i < 0)
	{
		mine = 1;
	}
	len = d_sequens_1(num_i, con, mine);
	return (len);
}
