/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabnenci <fabnenci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 15:29:46 by fabnenci          #+#    #+#             */
/*   Updated: 2024/03/20 17:34:41 by fabnenci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nb;

	nb = n;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		nb = n * (-1);
	}
	if (nb > 9)
		ft_putnbr_fd(nb / 10, fd);
	ft_putchar_fd((nb % 10) + '0', fd);
}
/*
 int main(void)
 {
 	ft_putnbr_fd(1337, 1);
 	write(1,"\n",1);
	ft_putnbr_fd(-2147483648, 1);
	write(1,"\n",1);
 	ft_putnbr_fd(2147483647, 1);
 	write(1,"\n",1);
 	ft_putnbr_fd(0, 1);
 }
*/
