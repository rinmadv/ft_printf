/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madavid <madavid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 22:08:45 by madavid           #+#    #+#             */
/*   Updated: 2023/01/03 19:02:45 by madavid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(const char *str, ...);
void	ft_args(char c, va_list ap, int *n);
void	ft_putchar(char c, int *n);
void	ft_putstr(char *str, int *n);
void	ft_putnbr(long long int nb, int *n, int is_unsigned);
void	ft_puthexa(unsigned long long int nb, int *n, int c);
void	ft_putptr(unsigned long int ptr, int *n);

#endif