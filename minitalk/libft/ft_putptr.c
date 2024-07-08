/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabnenci <fabnenci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 22:14:33 by fabnenci          #+#    #+#             */
/*   Updated: 2024/07/08 22:47:47 by fabnenci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putptr(uintptr_t ptr)
{
	int	count;

	count = 0;
	if (!ptr)
	{
		count += ft_putstr_fd("(nil)", 1);
	}
	else
	{
		count = count + ft_putstr_fd("0x", 1);
		count = count + ft_putnbr_base(ptr, BASE16);
	}
	return (count);
}