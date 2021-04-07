/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhypar <junhypar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 13:11:24 by junhypar          #+#    #+#             */
/*   Updated: 2020/07/28 17:10:34 by junhypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		ftu_cot(int n)
{
	int cot;

	cot = 0;
	while (n != 0)
	{
		cot++;
		n = n / 10;
	}
	return (cot);
}

void	putu_in(char *out, int n, int count)
{
	int i;
	int m;

	if (n < 0)
		m = -1;
	else
		m = 1;
	i = 0;
	while (i <= (count - 1) && n != 0)
	{
		out[count - i - 1] = ((n % 10) * m) + '0';
		n = n / 10;
		i++;
	}
	out[count] = 0;
}

void	nu_count(int *count, int *n)
{
	if (*n == 0)
		*count = 1;
	else
	{
		*count = *count + ftu_cot(*n);
	}
}

void	putu_zero(char *out)
{
	out[0] = '0';
	out[1] = '\0';
}

char	*ft_utoa(int n)
{
	int		count;
	char	*out;

	count = 0;
	nu_count(&count, &n);
	if (!(out = (char *)malloc(sizeof(char) * (count + 1))))
		return (NULL);
	if (n == 0)
		putu_zero(out);
	else
		putu_in(out, n, count);
	return (out);
}
