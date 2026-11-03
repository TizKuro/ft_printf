/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trmorand <trmorand@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 03:54:26 by trmorand          #+#    #+#             */
/*   Updated: 2026/11/03 23:59:16 by trmorand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_hexa(unsigned long int n, char *base)
{
	int	len;

	len = 0;
	if (n < 16)
	{
		ft_putchar(base[n]);
		len++;
	}
	else
	{
		len += ft_putnbr_hexa (n / 16, base);
		len += ft_putnbr_hexa (n % 16, base);
	}
	return (len);
}
