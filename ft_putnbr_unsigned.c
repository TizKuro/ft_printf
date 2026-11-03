/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trmorand <trmorand@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 04:48:55 by trmorand          #+#    #+#             */
/*   Updated: 2026/11/03 23:58:45 by trmorand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_unsigned(unsigned int n)
{
	int	len;

	len = 0;

	if (n >= 0 && n <= 9)
	{
		ft_putchar(n + '0');
		len++;
	}
	if (n > 9)
	{
		len += ft_putnbr_unsigned (n / 10);
		len += ft_putnbr_unsigned (n % 10);
	}
	return (len);
}
