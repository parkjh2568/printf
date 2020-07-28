/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhypar <junhypar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/25 12:27:44 by junhypar          #+#    #+#             */
/*   Updated: 2020/07/28 17:48:40 by junhypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		config_type(const char *input, int i, int *j)
{
	while ((*j = *j + 1))
	{
		if (!(input[i + *j] >= 48 && input[i + *j] <= 57) && input[i + *j] != 46
				&& input[i + *j] != '-' && input[i + *j] != '*')
			break ;
	}
	if (input[i + *j] == '%')
		return (1);
	else if (input[i + *j] == 'c')
		return (2);
	else if (input[i + *j] == 's')
		return (3);
	else if (input[i + *j] == 'p')
		return (4);
	else if (input[i + *j] == 'd')
		return (5);
	else if (input[i + *j] == 'i')
		return (6);
	else if (input[i + *j] == 'u')
		return (7);
	else if (input[i + *j] == 'x')
		return (8);
	else if (input[i + *j] == 'X')
		return (9);
	return (0);
}

int		print_pp(void)
{
	write(1, "%", 1);
	return (1);
}

int		config_type2(int conf, const char *input, int i, va_list lst)
{
	if (conf == 1)
		return (print_pp());
	else if (conf == 3)
		return (ft_printf_s(input, i, lst, per_wd(conf)));
	else if (conf == 5)
		return (ft_printf_d(input, i, lst, per_wd(conf)));
	else if (conf == 6)
		return (ft_printf_d(input, i, lst, per_wd(conf)));
	else if (conf == 7)
		return (ft_printf_u(input, i, lst, per_wd(conf)));
	else if (conf == 8)
		return (ft_printf_x(input, i, lst, per_wd(conf)));
	return (0);
}

int		search_word(const char *input, va_list lst, char *word, int w)
{
	int i;
	int j;

	i = 0;
	while (input[i])
	{
		j = 0;
		if (input[i] == '%' && input[i + 1])
		{
			if (config_type(input, i, &j) > 0)
			{
				j = 0;
				w += config_type2(config_type(input, i, &j), input, i, lst);
				i += j;
			}
		}
		else
		{
			write(1, &input[i], 1);
			w++;
		}
		i++;
	}
	return (w);
}

int		ft_printf(const char *input, ...)
{
	va_list	lst;
	char	*word;

	word = ft_strdup((char *)input);
	va_start(lst, input);
	return (search_word(input, lst, word, 0));
}
