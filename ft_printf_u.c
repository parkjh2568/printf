/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhypar <junhypar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/25 16:59:26 by junhypar          #+#    #+#             */
/*   Updated: 2020/07/28 17:33:17 by junhypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*u_sequens_4(char *num, t_calcul con)
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

void	u_sequens_3(char *num, t_calcul con, char *out)
{
	int	len;

	len = ft_strlen(num);
	if (con.min == 1)
		u_sequens_5(len, out, num);	
	else if (con.dotbf != 0 && con.dotbf > len)
		ft_memcpy(out + (con.dotbf - len), num, len);
	else
		u_sequens_5(len, out, num);	
}

int		u_sequens_2(char *num_c, t_calcul con)
{
	char	*out;
	int		size;

	size = u_mk_size(con, num_c);	
	if (!(out = malloc(sizeof(char) * (size + 1))))
		return (0);
	ft_bzero(out, size + 1);
	if (con.zr == 1 && con.dotafter == 0)
		ft_memset(out, '0', size);
	else
		ft_memset(out, ' ', size);
	if (con.dotafter != 0 && ft_strlen(num_c) <= con.dotafter)
		num_c = u_sequens_4(num_c, con);
	u_sequens_3(num_c, con, out);
	ft_putchar(out);
	free(out);
	out = 0;
	return (size);
}

int		u_sequens_1(long long num_i, t_calcul con)
{
	char	*num_c;
	int		len;
	int		len2;

	len = 0;
	if (num_i == 0 && con.dot == 1)
		num_c = ft_strdup("");
	else
		num_c = ft_unutoa(num_i);
	len2 = ft_strlen(num_c);
	if ((con.dotbf == 0 || (len2 > con.dotbf)) && con.dotafter == 0) 
	{
		ft_putchar(num_c);
		len = len + ft_strlen(num_c);
	}
	else
		len = u_sequens_2(num_c, con);
	return (len);
}

int		ft_printf_u(const char *input, int i, va_list lst, char per_wd)
{
	int				len;
	long long 		num_i;
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
	num_i =  va_arg(lst, unsigned int);
	len = u_sequens_1(num_i, con);
	return (len);
}
