/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hexadecimal_fd.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trmorand <trmorand@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 03:54:26 by trmorand          #+#    #+#             */
/*   Updated: 2026/11/03 04:30:14 by trmorand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_hexadecimal_fd(unsigned long int n, int fd, char *base)
{
	int	len;

	len = 0;
	if (n < 16)
	{
		ft_putchar_fd(base[n], fd);
		len++;
	}
	else
	{
		len += ft_putnbr_hexadecimal_fd (n / 16, fd, base);
		len += ft_putnbr_hexadecimal_fd (n % 16, fd, base);
	}
	return (len);
}
