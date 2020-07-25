/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhypar <junhypar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/25 12:27:44 by junhypar          #+#    #+#             */
/*   Updated: 2020/07/25 13:15:47 by junhypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_printf(const char *input, ...)
{
	va_list	lst;
	char	*word;

	word = ft_strdup(input);
	va_start(lst, input);
}
