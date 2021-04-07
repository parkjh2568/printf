/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhypar <junhypar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/25 17:11:08 by junhypar          #+#    #+#             */
/*   Updated: 2020/08/06 12:50:42 by junhypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void		ft_putchar(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
}

char		per_wd(int i)
{
	if (i == 1)
		return ('%');
	else if (i == 2)
		return ('c');
	else if (i == 3)
		return ('s');
	else if (i == 4)
		return ('p');
	else if (i == 5)
		return ('d');
	else if (i == 6)
		return ('i');
	else if (i == 7)
		return ('u');
	else if (i == 8)
		return ('x');
	else if (i == 9)
		return ('X');
	else
		return (' ');
}

int			make_t2(const char *inp, int i, int n)
{
	int c;

	c = n * 10;
	c = c + ft_aatoi(inp[i]);
	return (c);
}

t_calcul	make_t(const char *inp, int i, char wd)
{
	t_calcul	con;

	con = list_set();
	while (inp[++i] != wd)
	{
		if (inp[i] == '-')
			con.min++;
		else if (inp[i] == '*' && con.dot == 0)
			con.bfstar = 1;
		else if (inp[i] == '*' && con.dot == 1)
			con.afstar = 1;
		else if (inp[i] == '.')
			con.dot = 1;
		else if (inp[i] == '0' && con.dotbf == 0 && con.zr == 0 && con.dot == 0)
			con.zr = 1;
		else if ((inp[i] >= '0' && inp[i] <= '9') && con.dot == 0)
			con.dotbf = make_t2(inp, i, con.dotbf);
		else if ((inp[i] >= '0' && inp[i] <= '9') && con.dot == 1)
			con.dotafter = make_t2(inp, i, con.dotafter);
		else
			break ;
	}
	return (con);
}

t_calcul	list_set(void)
{
	t_calcul a;

	a.dotbf = 0;
	a.dotafter = 0;
	a.dot = 0;
	a.min = 0;
	a.bfstar = 0;
	a.afstar = 0;
	a.zr = 0;
	return (a);
}
