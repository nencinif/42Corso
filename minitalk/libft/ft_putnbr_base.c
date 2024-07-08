/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabnenci <fabnenci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 22:20:07 by fabnenci          #+#    #+#             */
/*   Updated: 2024/07/08 22:23:38 by fabnenci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_base(unsigned long n, char *base)
{
	int				res;
	const size_t	baselen = ft_strlen(base);

	res = 0;
	if (n >= baselen)
		res = res + ft_putnbr_base(n / baselen, base);
	res = res + ft_putchar_fd(base[n % baselen], 1);
	return (res);
}

