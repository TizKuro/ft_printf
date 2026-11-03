/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trmorand <trmorand@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 03:45:50 by trmorand          #+#    #+#             */
/*   Updated: 2026/11/03 04:55:38 by trmorand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int				ft_pmemory(void *ptr);
int				ft_putnbr_hexadecimal_fd(unsigned long int n, int fd, char *base);
int				ft_putnbr_unsigned_fd(unsigned int n, int fd);
#endif
