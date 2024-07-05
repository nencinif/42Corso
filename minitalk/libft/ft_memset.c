/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabnenci <fabnenci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 11:20:57 by fabnenci          #+#    #+#             */
/*   Updated: 2024/01/22 18:03:53 by fabnenci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*tmp;

	tmp = (unsigned char *) b;
	while (len > 0)
	{
		*tmp++ = c;
		len--;
	}
	return (b);
}
/*
int main()
{
	 char source[7] = "banana";
	 int num = 97;
	 size_t len = 2;
	 
	 printf("%s",ft_memset(source,num,len));
}
*/
