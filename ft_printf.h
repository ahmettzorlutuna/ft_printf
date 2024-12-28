/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azorlutu <azorlutu@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 22:55:13 by azorlutu          #+#    #+#             */
/*   Updated: 2024/11/25 22:55:14 by azorlutu         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdint.h>
# include <stdarg.h>

int	ft_printf(const char *str, ...);
int	ft_printchar(int chr);
int	ft_printstring(const char *s);
int	ft_printpointer(unsigned long long number);
int	ft_printnumber(int number);
int	ft_printunsignednumber(unsigned int number);
int	ft_printhexadecimal(unsigned int number, const char format);
int	ft_printpercent(void);

#endif
