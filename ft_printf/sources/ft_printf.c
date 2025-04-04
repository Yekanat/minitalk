/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athekkan <athekkan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 15:07:59 by athekkan          #+#    #+#             */
/*   Updated: 2023/10/21 01:26:22 by athekkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_check_type(va_list args, const char str);

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		cur_val;
	int		i;

	va_start(args, str);
	cur_val = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			cur_val += ft_check_type(args, str[i + 1]);
			i++;
		}
		else
			cur_val += ft_print_char(str[i]);
		i++;
	}
	va_end(args);
	return (cur_val);
}
