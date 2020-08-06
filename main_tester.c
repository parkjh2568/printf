/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_tester.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 15:40:07 by mchardin          #+#    #+#             */
/*   Updated: 2020/08/06 19:19:12 by junhypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int main()
{
	int		a = -4;
	int		b = 0;
	char	c = 'a';
	int		d = 2147483647;
	int		e = -2147483648;
	int		f = 42;
	int		g = 25;
	int		h = 4200;
	int		i = 8;
	int		j = -12;
	int		k = 123456789;
	int		l = 0;
	int		m = -12345678;
	char	*n = "abcdefghijklmnop";
	char	*o = "-a";
	char	*p = "-12";
	char	*q = "0";
	char	*r = "%%";
	char	*s = "-2147483648";
	char	*t = "0x12345678";
	char	*u = "-0";
	int		aa, bb;

aa = printf("%i, %d, %d, %d, %d, %s, %c, %d, %u, %x, %X\n\n", i, j, k, l, m, n, c, c, j, j, j);
bb = ft_printf("%i, %d, %d, %d, %d, %s, %c, %d, %u, %x, %X\n\n", i, j, k, l, m, n, c, c, j, j, j);
printf("a = %d, b = %d\n",aa,bb);
	
	a = 8;
	while (a < 12)
	{
aa = printf("%*p, %*x, %*p, %*x, %*p, %*x, %*p, %*x\n", a, (void *)209590960, a, 209590960, a, (void *)207038912, a, 207038912, a, (void *)1, a, 1, a, NULL, a, 0);

bb = ft_printf("%*p, %*x, %*p, %*x, %*p, %*x, %*p, %*x\n", a, (void *)209590960, a, 209590960, a, (void *)207038912, a, 207038912, a, (void *)1, a, 1, a, NULL, a, 0);
printf("a = %d, b = %d\n",aa,bb);

aa = printf("%-*p, %-*x, %-*p, %-*x, %-*p, %-*x, %-*p, %-*x\n", a, (void *)209590960, a, 209590960, a, (void *)207038912, a, 207038912, a, (void *)1, a, 1, a, NULL, a, 0);

bb = ft_printf("%-*p, %-*x, %-*p, %-*x, %-*p, %-*x, %-*p, %-*x\n", a, (void *)209590960, a, 209590960, a, (void *)207038912, a, 207038912, a, (void *)1, a, 1, a, NULL, a, 0);
printf("a = %d, b = %d\n",aa,bb);

a++;
	}

aa = printf("%i, %d, %d, %d, %d, %s, %c, %d, %u, %x, %X\n\n", 0, 0, 0, 0, 0, NULL, 0, 0, 0, 0, 0);
bb = ft_printf("%i, %d, %d, %d, %d, %s, %c, %d, %u, %x, %X\n\n", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
printf("a = %d, b = %d\n",aa,bb);

aa = printf("%*i, %*d, %*d, %*d, %*d, %*s, %*c, %*d, %*u, %*x, %*X\n\n",12, 0,12, 0,12, 0,12, 0,12, 0,12, NULL,12, 0,12, 0,12, 0,12, 0,12, 0);
bb = ft_printf("%*i, %*d, %*d, %*d, %*d, %*s, %*c, %*d, %*u, %*x, %*X\n\n",12, 0,12, 0,12, 0,12, 0,12, 0,12, 0,12, 0,12, 0,12, 0,12, 0,12, 0);
printf("a = %d, b = %d\n",aa,bb);


}
