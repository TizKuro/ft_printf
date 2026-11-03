/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trmorand <trmorand@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 02:01:42 by trmorand          #+#    #+#             */
/*   Updated: 2026/11/03 03:13:15 by trmorand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
static	int	litters(const char *format, int i, va_list *parameters)
{
	if (format[i + 1] == 'c')
		return(ft_putchar_fd(va_arg(*parameters, int), 1));
	else if (format[i + 1] == 's')
		return(ft_putstr_fd(va_arg(*parameters, char *), 1));
	else if (format[i + 1] == 'd' || format[i + 1] == 'i')
		return(ft_putnbr_fd(va_arg(*parameters, int), 1));
	//else if (format[i + 1] == 'p')
	//else if (format[i + 1] == 'u')
	//else if (format[i + 1] == 'X' || format[i + 1] == 'x' )
	else if (format[i + 1] == '%')
		return(ft_putchar_fd('%', 1));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list parameters;
	va_start (parameters, format);
	size_t towrite;
	int	count;

	towrite = 0;
	count = 0;
	while(format[towrite])
	{
		if (format[towrite] == '%')
		{
			count += litters(format, towrite, &parameters);
			towrite++;
		}
		else
			count += ft_putchar_fd(format[towrite], 1);
		towrite++;
	}
	va_end(parameters);
	return (count);
}
