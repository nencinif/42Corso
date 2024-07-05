/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabnenci <fabnenci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 16:05:23 by fabnenci          #+#    #+#             */
/*   Updated: 2024/01/31 16:23:39 by fabnenci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			counter;

	counter = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (counter < n && str1[counter] == str2[counter])
		counter++;
	if (n == counter)
		return (0);
	return (str1[counter] - str2[counter]);
}

/*
int	main()
		{
			char uno[] = "banana";
			char due[] = "benana";
			int let = 2;
			printf("%d", memcmp(uno, due, let));
		}
*/
