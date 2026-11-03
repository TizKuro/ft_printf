/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trmorand <trmorand@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 03:45:50 by trmorand          #+#    #+#             */
/*   Updated: 2026/11/03 04:57:40 by trmorand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_pmemory(void *ptr);
int	ft_putnbr_hexadecimal_fd(unsigned long int n, int fd, char *base);
int	ft_putnbr_unsigned_fd(unsigned int n, int fd);
int	ft_putstr_fd(char *s, int fd);
int	ft_putnbr_fd(int n, int fd);
int	ft_putchar_fd(char c, int fd);

#endif
