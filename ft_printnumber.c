/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnumber.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azorlutu <azorlutu@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 23:10:24 by azorlutu          #+#    #+#             */
/*   Updated: 2024/11/25 23:10:25 by azorlutu         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "./libft/libft.h"

int	ft_printnumber(int number)
{
	int		len;
	char	*array;

	len = 0;
	array = ft_itoa(number);
	if (!array)
		return (0);
	len = ft_printstring(array);
	free(array);
	return (len);
}
