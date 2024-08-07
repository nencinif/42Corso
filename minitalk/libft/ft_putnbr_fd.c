/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabnenci <fabnenci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 15:29:46 by fabnenci          #+#    #+#             */
/*   Updated: 2024/07/08 22:56:49 by fabnenci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_fd(int n, int fd)
{
	long	nl;
	int		res;

	res = 0;
	nl = n;
	if (nl < 0)
	{
		res = 1;
		ft_putchar_fd('-', fd);
		nl = -nl;
	}
	if (nl >= 10)
		res = res + ft_putnbr_fd(nl / 10, fd);
	res = res + ft_putchar_fd(((nl % 10) + '0'), fd);
	return (res);
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
