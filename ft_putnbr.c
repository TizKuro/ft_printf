/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trmorand <trmorand@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 14:05:11 by trmorand          #+#    #+#             */
/*   Updated: 2026/11/05 17:21:06 by trmorand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	long int	nb;
	int			len;

	len = 0;
	nb = n;
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
		len++;
	}
	if (nb >= 0 && nb <= 9)
	{
		ft_putchar (nb + '0');
		len++;
	}
	if (nb > 9)
	{
		len += ft_putnbr (nb / 10);
		len += ft_putnbr (nb % 10);
	}
	return (len);
}
