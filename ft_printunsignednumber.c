/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsignednumber.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azorlutu <azorlutu@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 23:17:39 by azorlutu          #+#    #+#             */
/*   Updated: 2024/11/25 23:17:40 by azorlutu         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"

static int	ft_get_num_len(unsigned int n)
{
	int	length;

	length = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = n / 10;
		length++;
	}
	return (length);
}

static char	*ft_unsigneditoa(unsigned int n)
{
	long	nb;
	int		length;
	char	*str;

	nb = n;
	length = ft_get_num_len(nb);
	str = (char *)malloc((length + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[length] = '\0';
	if (nb == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (nb < 0)
		str[0] = '-';
	if (nb < 0)
		nb = -nb;
	while (nb != 0)
	{
		str[--length] = (nb % 10) + '0';
		nb = nb / 10;
	}
	return (str);
}

int	ft_printunsignednumber(unsigned int number)
{
	char	*str;
	int		len;

	str = ft_unsigneditoa(number);
	len = ft_strlen(str);
	if (!str)
		return (-1);
	write(1, str, len);
	free(str);
	return (len);
}
