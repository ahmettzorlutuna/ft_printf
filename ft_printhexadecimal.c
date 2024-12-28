/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexadecimal.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azorlutu <azorlutu@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 22:58:01 by azorlutu          #+#    #+#             */
/*   Updated: 2024/11/25 22:58:02 by azorlutu         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"

static int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_printhexadecimal(unsigned int number, const char format)
{
	char	*lower_hex_array;
	char	*upper_hex_array;
	int		len;

	upper_hex_array = "0123456789ABCDEF";
	lower_hex_array = "0123456789abcdef";
	len = 0;
	if (number >= 16)
		len += ft_printhexadecimal(number / 16, format);
	if (format == 'x')
		len += ft_putchar(lower_hex_array[number % 16]);
	else if (format == 'X')
		len += ft_putchar(upper_hex_array[number % 16]);
	return (len);
}
