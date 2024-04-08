/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabnenci <fabnenci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 18:28:38 by fabnenci          #+#    #+#             */
/*   Updated: 2024/04/08 15:14:38 by fabnenci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft/libft.h"
#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>
#include <stdarg.h>
#include <stdint.h>
#include <unistd.h>

// long			ft_putnbr_base(unsigned long n, int upper);
// long			ft_putptr(intptr_t ptr);
// unsigned int	ft_putnbri(unsigned int n);
// int				ft_putstrcount_fd(char *s, int fd);

int	ft_putchar(char ch)
{
	write(1, &ch, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	else
	{
		while (str[i] != '\0')
		{
			ft_putchar(str[i]);
			i++;
		}
	}
	return (i);
}

int	ft_putnbr_base(unsigned long n, char *base)
{
	int				res;
	size_t			baselen;

	baselen = 0;
	while (base[baselen] != '\0')
	{
		baselen++;
	}
	res = 0;
	if (n >= baselen)
		res = res + ft_putnbr_base(n / baselen, base);
	res = res + ft_putchar(base[n % baselen]);
	return (res);
}

int	ft_putptr(uintptr_t ptr)
{
	int	count;

	count = 0;
	if (!ptr)
	{
		count += ft_putstr("(nil)");
	}
	else
	{
		count = count + ft_putstr("0x");
		count = count + ft_putnbr_base(ptr, BASE16);
	}
	return (count);
}

int	ft_putnbr(int n)
{
	long	nl;
	int		res;

	res = 0;
	nl = n;
	if (nl < 0)
	{
		res = 1;
		ft_putchar('-');
		nl = -nl;
	}
	if (nl >= 10)
		res = res + ft_putnbr(nl / 10);
	res = res + ft_putchar(((nl % 10) + '0'));
	return (res);
}
