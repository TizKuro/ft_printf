/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trmorand <trmorand@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 03:45:50 by trmorand          #+#    #+#             */
/*   Updated: 2026/11/03 23:53:16 by trmorand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_pmemory(void *ptr);
int	ft_putnbr_hexa(unsigned long int n, char *base);
int	ft_putnbr_unsigned(unsigned int n);
int	ft_putstr(char *s);
int	ft_putnbr(int n);
int	ft_putchar(char c);

#endif
