/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_d2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhypar <junhypar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/28 13:48:09 by junhypar          #+#    #+#             */
/*   Updated: 2020/08/06 17:52:32 by junhypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	d_sequens_5(int len, int mine, char *out, char *num)
{
	if (mine == 1)
	{
		out[0] = '-';
		ft_memcpy(out + 1, num, len);
	}
	else
		ft_memcpy(out, num, len);
}

int		d_mk_size(t_calcul con, int mine, char *num_c)
{
	int size;

	size = 0;
	if (con.dotbf < ft_strlen(num_c) && con.dotafter >= ft_strlen(num_c))
		size = con.dotafter + mine;
	else if (con.dotbf < ft_strlen(num_c) && con.dotafter < ft_strlen(num_c))
		size = ft_strlen(num_c) + mine;
	else if (con.dotbf == 0 && con.dotafter > ft_strlen(num_c))
		size = con.dotafter + mine;
	else if (con.dotbf == con.dotafter && con.dotbf >= ft_strlen(num_c))
		size = con.dotbf + mine;
	else if (con.dotbf == ft_strlen(num_c) && con.dotafter <= ft_strlen(num_c))
		size = con.dotbf + mine;
	else if (con.dotbf >= ft_strlen(num_c) && con.dotafter >= con.dotbf)
		size = con.dotafter + mine;
	else
		size = con.dotbf;
	return (size);
}
