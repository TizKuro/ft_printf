/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pmemory.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trmorand <trmorand@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 04:24:31 by trmorand          #+#    #+#             */
/*   Updated: 2026/11/03 04:49:05 by trmorand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pmemory(void *ptr)
{
	if(!ptr)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	write(1, "0x", 2);
	return (ft_putnbr_hexadecimal_fd((unsigned long int)ptr, 1, "0123456789abcdef") + 2);
}
