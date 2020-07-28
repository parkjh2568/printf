/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_u2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhypar <junhypar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/28 13:48:09 by junhypar          #+#    #+#             */
/*   Updated: 2020/07/28 17:20:29 by junhypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	u_sequens_5(int len, char *out, char *num)
{
	ft_memcpy(out, num, len);
}

int		u_mk_size(t_calcul con, char *num_c)
{
	int size;

	size = 0;
	if (con.dotbf < ft_strlen(num_c) && con.dotafter >= ft_strlen(num_c))
		size = con.dotafter;
	else if (con.dotbf < ft_strlen(num_c) && con.dotafter < ft_strlen(num_c))
		size = ft_strlen(num_c);
	else if (con.dotbf == 0 && con.dotafter > ft_strlen(num_c))
		size = con.dotafter;
	else
		size = con.dotbf;
	return (size);
}
