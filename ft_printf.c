/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trmorand <trmorand@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 02:01:42 by trmorand          #+#    #+#             */
/*   Updated: 2026/11/01 11:06:45 by trmorand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
static	int	litters(const char *format, int i, va_list *parameters)
{
	if (format[i + 1] == 'c')
		ft_putchar_fd(va_arg(*parameters, int), 1);
}

int	ft_printf(const char *format, ...)
{
	va_list parameters;
	va_start (parameters, format);
	size_t towrite;

	towrite = 0;
	while(format[towrite])
	{
		if (format[towrite] == '%')

		towrite++;
	}
}
