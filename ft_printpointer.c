/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printpointer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azorlutu <azorlutu@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 23:13:31 by azorlutu          #+#    #+#             */
/*   Updated: 2024/11/25 23:13:32 by azorlutu         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

static int	ft_checkhex(uintptr_t ptr)
{
	const char	*hex_array;
	int			i;

	hex_array = "0123456789abcdef";
	i = 0;
	if (ptr >= 16)
		i += ft_checkhex(ptr / 16);
	i += ft_putchar(hex_array[ptr % 16]);
	return (i);
}

int	ft_printpointer(unsigned long long number)
{
	uintptr_t	address_decimal;
	int			count;

	address_decimal = (uintptr_t)number;
	count = 0;
	if (!number)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	count += write(1, "0x", 2);
	count += ft_checkhex(address_decimal);
	return (count);
}
