/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unutoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhypar <junhypar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 13:11:24 by junhypar          #+#    #+#             */
/*   Updated: 2020/07/28 17:34:14 by junhypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		ftunu_cot(long long n)
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

void	putunu_in(char *out, long long n, long long count)
{
	int i;

	i = 0;
	while (i <= (count - 1) && n != 0)
	{
		out[count - i - 1] = (n % 10) + '0';
		n = n / 10;
		i++;
	}
	out[count] = 0;
}

void	nun_count(long long *count, long long *n)
{
	if (*n == 0)
		*count = 1;
	else
	{
		*count = *count + ftunu_cot(*n);
	}
}

void	putunu_zero(char *out)
{
	out[0] = '0';
	out[1] = '\0';
}

char	*ft_unutoa(long long n)
{
	long long			count;
	char				*out;

	count = 0;
	nun_count(&count, &n);
	if (!(out = (char *)malloc(sizeof(char) * (count + 1))))
		return (NULL);
	if (n == 0)
		putunu_zero(out);
	else
		putunu_in(out, n, count);
	return (out);
}
