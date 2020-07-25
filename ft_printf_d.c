/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhypar <junhypar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/25 16:59:26 by junhypar          #+#    #+#             */
/*   Updated: 2020/07/25 20:08:50 by junhypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	zero_dotafter(int j, int i, char *out, char *num_c)
{
	while (num_c[j])
	{
		out[i] = num_c[j];
		i++;
		j++;
	}
}

char	*non_zero_dotafter(t_calcul con, char *num_c, int num_i)
{
	char	*output;
	int		aa;
	int		len;

	len = ft_strlen(num_c);
	aa = con.dotafter;
	if (num_i > 0)
	{
		output = malloc(sizeof(char) * (aa + 1));
		ft_memset(output, '0', aa);
		ft_strlcpy(output + aa - len, num_c, len + 1);
		output[aa + 1] = '\0';
	}
	else if (num_i < 0)
	{
		output = malloc(sizeof(char) * (aa + 2));
		ft_memset(output, '0', con.dotafter);
		ft_strlcpy(output + (aa - len + 1) , num_c + 1, len);
		output[0] = '-';
		output[aa + 2] = '\0';
	}
	free(num_c);
	num_c = 0;
	return (output);
}

void	pt_dafter(char *output, int i, char *num_c, t_calcul con)
{
	int		j;
	
	if (num_c[0] == '-' && con.zr == 1)
	{
		j = 1;
		output[0] = '-';
		i++;
	}
	else
		j = 0;
	zero_dotafter(j, i, output, num_c);
	free(num_c);
	num_c = 0;
}

int		pt_dbefor(t_calcul con, int len, char *num_c)
{
	char	*output;
	int		i;
	int		ccc;

	if (con.dotbf != 0)
		ccc = con.dotbf;
	else
		ccc = con.dotafter;
	output = malloc(sizeof(char) * (ccc + 1));
	ft_bzero(output, ccc);
	if (con.zr == 0)
		ft_memset(output, ' ', ccc);
	else
		ft_memset(output, '0', ccc);
	if (con.min == 1)
		i = 0;
	else
		i = (ccc - len);
	pt_dafter(output, i, num_c, con);
	ft_putchar(output);
	free(output);
	output = 0;
	return (ccc);
}

int		ft_printf_d(const char *input, int i, va_list lst, char per_wd)
{
	int num_i;
	int len;
	char *num_c;
	t_calcul config_d;
	num_i = va_arg(lst, int);
	config_d = make_t(input, i, per_wd);
	num_c = ft_itoa(num_i);
	if (config_d.dotafter != 0)
		num_c = non_zero_dotafter(config_d, num_c, num_i);
	len = ft_strlen(num_c);
	if (config_d.dotbf == 0)
		ft_putchar(num_c);
	else
		len = pt_dbefor(config_d, len, num_c);
//	free(num_c);
//	num_c = 0;
	return (len);
}
