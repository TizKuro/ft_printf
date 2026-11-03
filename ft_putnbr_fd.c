/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trmorand <trmorand@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 14:05:11 by trmorand          #+#    #+#             */
/*   Updated: 2026/11/03 04:58:03 by trmorand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_fd(int n, int fd)
{
	long int	nb;
	int	len;

	len = 0;
	nb = n;

	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb *= -1;
		len++;
	}
	if (nb >= 0 && nb <= 9)
	{
		ft_putchar_fd(nb + '0', fd);
		len++;
	}
	if (nb > 9)
	{
		len += ft_putnbr_fd (nb / 10, fd);
		len += ft_putnbr_fd (nb % 10, fd);
	}
	return (len);
}
