/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabnenci <fabnenci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 17:36:06 by fabnenci          #+#    #+#             */
/*   Updated: 2024/04/09 16:59:06 by fabnenci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>
//#include <stdio.h>
#include <limits.h>
#include <stdarg.h>
#include <stdint.h>

static int	formatchecker(char c, va_list list)
{
	int	ccount;

	ccount = 0;
	if (c == '%')
		ccount = ft_putchar('%');
	else if (c == 'c')
		ccount = ft_putchar(va_arg(list, int));
	else if (c == 'i' || c == 'd')
		ccount = ft_putnbr(va_arg(list, int));
	else if (c == 's')
		ccount = ft_putstr(va_arg(list, char *));
	else if (c == 'u')
		ccount = ft_putnbr_base(va_arg(list, unsigned int), BASE10);
	else if (c == 'p')
		ccount = ft_putptr(va_arg(list, uintptr_t));
	else if (c == 'x')
		ccount = ft_putnbr_base(va_arg(list, unsigned int), BASE16);
	else if (c == 'X')
		ccount = ft_putnbr_base(va_arg(list, unsigned int), BASE16CAPS);
	return (ccount);
}

int	ft_printf(const char *format, ...)
{
	int		result;
	int		i;
	va_list	arg_list;

	va_start(arg_list, format);
	i = 0;
	result = 0;
	while (format[i])
	{
		if (format[i] == '%')
			result = result + formatchecker(format[++i], arg_list);
		else
			result = result + write(1, &format[i], 1);
		i++;
	}
	va_end(arg_list);
	return (result);
}

// int main()
// {
// 	int	saluti;
// 	int	*ptr;

// 	saluti = 153;

// 	ptr = &saluti;

// 	printf("questi sono %d caratteri:",(ft_printf("Io sono un int %i\n", 4)));
// 	printf("Io sono un int %i\n", 4);
// 	ft_printf("Io sono un int negativo %i\n", -213);
// 	printf("Io sono un int negativo %i\n", -213);
// 	ft_printf("Io sono un esadecimale in caps %X\n", 543215324);
// 	printf("Io sono un esadecimale in caps %X\n", 543215324);
// 	ft_printf("Io sono un esadecimale %x\n", 543215324);
// 	printf("Io sono un esadecimale %x\n", 543215324);
// 	ft_printf("Io sono un percento %%\n");
// 	printf("Io sono un percento %%\n");
// 	ft_printf ("Io sono un puntatore %p\n", ptr);
// 	printf ("Io sono un puntatore %p\n", ptr);
// 	//ft_printf("Io sono tante stringhe %s %s\n", "banana", "fragola");
// 	//printf("Io sono tante stringhe %s %s\n", "banana", "fragola");
// 	printf("questi sono %d caratteri\n", printf("Io sono
// tante stringhe %s %s\n", "banana", "fragola"));
// 	ft_printf("questi sono %d caratteri\n", printf("Io sono
// tante stringhe %s %s\n", "banana", "fragola"));
// 	return (0);
// }
