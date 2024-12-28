/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azorlutu <azorlutu@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 22:51:04 by azorlutu          #+#    #+#             */
/*   Updated: 2024/11/25 22:51:05 by azorlutu         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_form(va_list *args, const char form)
{
	int	length;

	length = 0;
	if (form == 'c')
		length += ft_printchar(va_arg(*args, int));
	else if (form == 's')
		length += ft_printstring(va_arg(*args, char *));
	else if (form == 'p')
		length += ft_printpointer(va_arg(*args, unsigned long long));
	else if (form == 'd' || form == 'i')
		length += ft_printnumber(va_arg(*args, int));
	else if (form == 'u')
		length += ft_printunsignednumber(va_arg(*args, unsigned int));
	else if (form == 'x' || form == 'X')
		length += ft_printhexadecimal(va_arg(*args, unsigned int), form);
	else if (form == '%')
		length += ft_printpercent();
	return (length);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1])
		{
			count += ft_check_form(&args, str[i + 1]);
			i++;
		}
		else
			count += ft_printchar(str[i]);
		i++;
	}
	va_end(args);
	return (count);
}
