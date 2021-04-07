/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhypar <junhypar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/28 12:38:19 by junhypar          #+#    #+#             */
/*   Updated: 2020/08/06 12:58:44 by junhypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int				ft_aatoi(char c)
{
	return ((c - '0'));
}

t_calcul		set_min_input(t_calcul con)
{
	if (con.min > 1)
		con.min = 1;
	if (con.dotbf < 0)
	{
		con.dotbf *= -1;
		con.min = 1;
	}
	if (con.dotafter < 0)
	{
		con.dot = 0;
		con.dotafter = 0;
	}
	return (con);
}
