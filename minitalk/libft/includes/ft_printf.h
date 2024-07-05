/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabnenci <fabnenci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 18:19:09 by fabnenci          #+#    #+#             */
/*   Updated: 2024/04/09 16:33:33 by fabnenci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
//# include <stdio.h>
# include <limits.h>
# include <stdarg.h>
# include <stdint.h>
# include <unistd.h>

# define BASE16 "0123456789abcdef"
# define BASE16CAPS "0123456789ABCDEF"
# define BASE10 "0123456789"

int				ft_printf(const char *format, ...);
int				ft_putnbr_base(unsigned long n, char *base);
int				ft_putptr(uintptr_t ptr);
int				ft_putstr(char *str);
int				ft_putchar(char ch);
int				ft_putnbr(int n);

#endif
