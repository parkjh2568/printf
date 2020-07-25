/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhypar <junhypar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/25 12:27:44 by junhypar          #+#    #+#             */
/*   Updated: 2020/07/25 16:05:03 by junhypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		config_type(const char *input, int i, int j)
{
	while(j++)
	{
		if (!(input[i + j] >= '0' && input[i + j] <= '9') || input[i] != '.'
				|| input[i + j] != '-' || input[i + j] != '*')
			break;
	}
	if (input[i + j] == '%')
		return (1);
	else if (input[i + j] == 'c')
		return (2);
	else if (input[i + j] == 's')
		return (3);
	else if (input[i + j] == 'p')
		return (4);
	else if (input[i + j] == 'd')
		return (5);
	else if (input[i + j] == 'i')
		return (6);
	else if (input[i + j] == 'u')
		return (7);
	else if (input[i + j] == 'x')
		return (8);
	else if (input[i + j] == 'X')
		return (9);
	return (0);
}

int		config_type2(const char *input, int i)
{

}

int		print_%%()
{
	if (config_type(input, i, 0) == 1)
	{
		write(1,"%",1);
		w++;
		i++;
	}
}

int		search_word(const char *input, va_list lst, char *word)
{
	int i, w;

	i = 0;
	w = 0;
	while(input[i])
	{
		if (input[i] == '%' && input[i + 1])
		{
			if (config_type(input, i, 0) > 0)
			{
				config_type2(
			}
		}
		else
		{
			write(1,&input[i],1);
			w++;
		}
		i++;
	}
	return (w);
}

int ft_printf(const char *input, ...)
{
	va_list	lst;
	char	*word;

	word = ft_strdup((char *)input);
	va_start(lst, input);
	return (search_word(input,lst,word));
}
