/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstring.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azorlutu <azorlutu@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 23:17:03 by azorlutu          #+#    #+#             */
/*   Updated: 2024/11/25 23:17:03 by azorlutu         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

int	ft_printstring(const char *s)
{
	int	i;

	i = 0;
	if (!s)
	{
		ft_putstr_fd("(null)", 1);
		return (6);
	}
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
	return (i);
}
