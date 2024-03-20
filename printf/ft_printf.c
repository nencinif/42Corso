/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabnenci <fabnenci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 17:36:06 by fabnenci          #+#    #+#             */
/*   Updated: 2024/03/20 17:56:19 by fabnenci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

int	ft_printf(const char *format, ...)
{
	int		lenght;
	int		i;
	va_list	arg;

	i = 0;
	if (!format)
		return (0);
	va_start(arg, format);
	while (format[i])
	{
		if (format[i] != '%')
		{
			write (1, &format[i], 1);
		}
		else
		{
			i++;
			if (format[i] == 's')
				lenght += ft_putstrcount_fd (va_arg (arg, char *), 1);
			else if (format[i] == 'd' | format[i] == 'i')
				lenght += ft_putnbr_fd (va_arg (arg, int), 1);
			else if (format[i] == 'c')
				ft_putchar_fd (va_arg (arg, int), 1);
			else if (format[i] == '%')
				write (1, '%', 1);
		}
		i++;
	}
	return (lenght);
}

int main()
{
	// ft_printf("Io sono un carattere %c\n", 'D');
	// ft_printf("Io sono un carattere %c\n", 'D');
	ft_putnbr_fd(ft_printf("Io sono una stringa %s %s\n", "banana", "bananona") , 1);
	// ft_printf("Io sono un integer %i\n", 0);
	// ft_printf("Io sono un integer negativo %i\n", -213);
	// ft_printf("Io sono un carattere %i\n", 213);
	// ft_printf("Io sono un carattere %i\n", 0);
	// ft_printf("Io sono un carattere %i\n", 0);
	// ft_printf("Io sono un carattere %d\n", 12);
	// ft_printf("Io sono un carattere %x\n", 100);
	// ft_printf("Io sono un carattere %X\n", 0);
	// ft_printf("Io sono un carattere %%\n", 0);
	// ft_printf("Io sono un carattere %p\n", 3);
}

