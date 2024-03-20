/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabnenci <fabnenci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 11:53:36 by fabnenci          #+#    #+#             */
/*   Updated: 2024/01/22 18:03:34 by fabnenci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*tmpsrc;
	unsigned char	*tmpdes;

	if (dst == (void *)0 && src == (void *)0)
		return (dst);
	tmpsrc = (unsigned char *)src;
	tmpdes = (unsigned char *)dst;
	while (n > 0)
	{
		*(tmpdes++) = *(tmpsrc++);
		n--;
	}
	return (dst);
}
/*
int main()
{
	 char source[7] = "banana";
	 char dest[7] = "caccaca";
	 size_t len = 3;
	 
	 printf("%s",ft_memcpy(dest,source,len));
}
*/
