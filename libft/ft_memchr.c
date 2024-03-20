/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabnenci <fabnenci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 15:11:11 by fabnenci          #+#    #+#             */
/*   Updated: 2024/02/05 15:21:29 by fabnenci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			counter;
	unsigned char	*str;

	counter = 0;
	str = (unsigned char *)s;
	while (counter < n)
	{
		if (str[counter] == (unsigned char)c)
			return ((void *)(str + counter));
		counter++;
	}
	return (NULL);
}
/*
int main () {
   const char s[] = "banana";
   const char c = 'a';
   size_t n = 4;

   printf("%s",ft_memchr(s, c, n));
}
*/
