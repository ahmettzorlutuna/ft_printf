/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azorlutu <azorlutu@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 14:25:30 by azorlutu          #+#    #+#             */
/*   Updated: 2024/10/07 14:25:31 by azorlutu         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int arg)
{
	if ((arg >= 'a' && arg <= 'z') || (arg >= 'A' && arg <= 'Z')
		|| (arg >= '0' && arg <= '9'))
		return (1);
	return (0);
}