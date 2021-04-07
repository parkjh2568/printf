/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_lx2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhypar <junhypar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/28 13:48:09 by junhypar          #+#    #+#             */
/*   Updated: 2020/08/06 18:49:26 by junhypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	lx_sequens_5(int len, char *out, char *num)
{
	ft_memcpy(out, num, len);
}

int		lx_mk_size(t_calcul con, char *num_c)
{
	int size;

	size = 0;
	if (con.dotbf < ft_strlen(num_c) && con.dotafter >= ft_strlen(num_c))
		size = con.dotafter;
	else if (con.dotbf < ft_strlen(num_c) && con.dotafter < ft_strlen(num_c))
		size = ft_strlen(num_c);
	else if (con.dotbf == 0 && con.dotafter > ft_strlen(num_c))
		size = con.dotafter;
	else if (con.dotbf == con.dotafter && con.dotbf >= ft_strlen(num_c))
		size = con.dotbf;
	else if (con.dotbf == ft_strlen(num_c) && con.dotafter <= ft_strlen(num_c))
		size = con.dotbf;
	else if (con.dotbf >= ft_strlen(num_c) && con.dotafter >= con.dotbf)
		size = con.dotafter;
	else
		size = con.dotbf;
	return (size);
}

int		l_mk_hex_size(long long num)
{
	int i;

	i = 0;
	while (num)
	{
		if (num != 0)
			i++;
		num = num / 16;
	}
	return (i);
}

char	*lx_mk_hex(long long num)
{
	char	*hx;
	char	*out;
	int		size;
	int		i;

	if (num == 0)
		return (ft_strdup("0"));
	i = 0;
	hx = "0123456789ABCDEF";
	size = l_mk_hex_size(num);
	out = malloc(sizeof(char) * (size + 1));
	while (size--)
	{
		out[size] = hx[num % 16];
		num = num / 16;
		i++;
	}
	out[i] = '\0';
	return (out);
}
