/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhypar <junhypar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/28 14:51:40 by junhypar          #+#    #+#             */
/*   Updated: 2020/07/28 16:48:21 by junhypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	s_sequens_3(char *wod, char *out, t_calcul con, int size)
{
	int		len;

	len = ft_strlen(wod);
	if (!(con.dot == 1 && con.dotafter == 0))
	{
		if (con.dotafter >= ft_strlen(wod) || con.dot == 0)
		{
			if (con.min == 1)
				ft_memcpy(out, wod, len);
			else
				ft_memcpy((out + (size - len)), wod, len);
		}
		else
			{
			if (con.min == 1)
				ft_memcpy(out, wod, con.dotafter);
			else
				ft_memcpy(out + (size - con.dotafter), wod, con.dotafter);
		}
	}
}

int		s_mk_size(t_calcul con, char *wod)
{
	int size;

	size = 0;
	if (con.dotbf > con.dotafter && ft_strlen(wod) > con.dotafter)
		size = con.dotbf;
	else if (con.dotbf < ft_strlen(wod) && con.dotafter >= ft_strlen(wod))
		size = ft_strlen(wod);
	else if (con.dotbf < ft_strlen(wod) && con.dotafter < ft_strlen(wod))
		size = con.dotafter;
	else
		size = con.dotbf;
	return (size);
}

int		s_sequens_2(char *wod, t_calcul con)
{
	int		size;
	char	*out;

	size = s_mk_size(con, wod);
	if (!(out = malloc(sizeof(char) * (size + 1))))
		return (0);
	ft_bzero(out, size + 1);
	if (con.zr == 1 && con.min == 0)
		ft_memset(out, '0', size);
	else
		ft_memset(out, ' ', size);
	s_sequens_3(wod, out, con, size);
	ft_putchar(out);
	free(out);
	out = 0;
	return (size);
}

int		s_sequens_1(char *wod, t_calcul con)
{
	int			len;
	int			len2;

	len = 0;
	len2 = ft_strlen(wod);
	if (con.dot == 1 && con.dotbf == 0 && con.dotafter == 0)
	{
		ft_putchar("");
		len = 0;
	}
	else if ((con.dotbf == 0 || (len2 > con.dotbf)) && (con.dotafter == 0 ||
				con.dotafter > len2))
	{
		if (con.dot == 1 && con.dotafter == 0)
			len = s_sequens_2(wod, con);
		else
		{
			ft_putchar(wod);
			len = len2;
		}
	}
	else
		len = s_sequens_2(wod, con);
	return (len);
}

int		ft_printf_s(const char *input, int i, va_list lst, char per_wd)
{
	int			len;
	t_calcul	con;
	char		*wod;

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
	if(!(wod = va_arg(lst, char *)))
		wod = ft_strdup("(null)");
	len = s_sequens_1(wod, con);
	return (len);
}
