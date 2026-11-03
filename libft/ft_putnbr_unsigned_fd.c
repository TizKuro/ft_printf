/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned_fd.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trmorand <trmorand@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 03:44:36 by trmorand          #+#    #+#             */
/*   Updated: 2026/11/03 04:13:14 by trmorand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_unsigned_fd(unsigned int n, int fd)
{
	int	len;

	len = 0;

	if (n >= 0 && n <= 9)
	{
		ft_putchar_fd(n + '0', fd);
		len++;
	}
	if (n > 9)
	{
		len += ft_putnbr_unsigned_fd (n / 10, fd);
		len += ft_putnbr_unsigned_fd (n % 10, fd);
	}
	return (len);
}
